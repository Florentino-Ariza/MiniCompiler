%{
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "AST_tree.hpp"
int yylex(void);
void yyerror(char *);
Program* root;
%}

%union{
        int intVal;
        std::string *strVal;
        double doubleVal;
        char charVal;
        Program* program_;
        Decl* decl_;
        func_Decl* func_decl_;
        var_Decl* var_decl_;
        std::vector<Var*>* var_list_;
        std::vector<Stat*>* stats_;
        std::vector<Decl*>* decls_;
        Var* var_;
        Val* val_;
        Stat* stat_;
        Type* type_;
        if_Stat* if_stat_;
        for_Stat* for_stat_;
        while_Stat* while_stat_;
        do_Stat* do_stat_;
        switch_Stat* switch_stat_;
        std::vector<Case*>* case_list_;
        Case* case_;
        continue_Stat* continue_stat_;
        break_Stat* break_stat_;
        return_Stat* return_stat_;
        var_decl_Stat* var_decl_stat_;
        stats_Stat* stats_stat_;
        Expr* expr_;
}

%token VOID BOOL SHORT INT LONG CHAR FLOAT DOUBLE TRUE FALSE
        IF ELSE FOR WHILE DO SWITCH CASE DEFAULT CONTINUE RETURN BREAK
        ADD ADDEQ DADD SUB SUBEQ DSUB MUL MULEQ DIV DIVEQ MOD MODEQ 
        NOT BNOT NEQ AND BANDEQ BAND OR BOR BOREQ BXOR BXOREQ  
        EQ GE DT LE LT SHL SHLEQ SHR SHREQ 
        ASSIGN QUE COLON 
        COMMA ELLIPSES DOT SEMI LPAREN RPAREN LBRACKET RBRACKET LBRACE RBRACE
        
%token  <intVal> INTNUM 
%token  <strVal> IDENTIFIER STRING
%token  <doubleVal> FLOATNUM 
%token  <charVal> CHARACTER 
%type   <program_>   program
%type   <decls_>   decls
%type   <decl_>   decl
%type   <func_decl_>   func_decl
%type   <var_decl_>  var_decl
%type   <var_list_>  var_list
%type   <stats_> stats
%type   <var_>  var
%type   <val_>  val
%type   <stat_>  stat
%type   <type_>  type
%type   <if_stat_>  if_stat
%type   <for_stat_>  for_stat
%type   <while_stat_>  while_stat
%type   <do_stat_>  do_stat
%type   <switch_stat_>  switch_stat
%type   <case_list_>  case_list
%type   <case_>  case
%type   <continue_stat_>  continue_stat
%type   <break_stat_>  break_stat
%type   <return_stat_>  return_stat
%type   <expr_> expr

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%left	COMMA 
%right	ASSIGN ADDEQ SUBEQ MULEQ DIVEQ MODEQ SHLEQ SHREQ BANDEQ BOREQ BXOREQ 
%right	COLON 
%left	OR 
%left	AND
%left	BOR
%left	BXOR
%left	BAND
%left	EQ NEQ
%left	GE GT LE LT
%left	SHL SHR
%left	ADD SUB
%left	MUL DIV MOD
%right	DADD DSUB NOT BNOT 

%start program
%%

program : decls  {root = new Program($1); root -> print();}
        ;

decls   : decls decl   {$$ = $1; $$ -> push_back($2);}
        | decl {$$ = new std::vector<Decl*> ; $$ -> push_back($1);}
        ;

decl    : func_decl     {$$ = $1;}
        | var_decl      {$$ = $1;}
        ; 

func_decl   : type IDENTIFIER LPAREN var_list RPAREN LBRACE stats RBRACE {$$ = new func_Decl($1,$2,$4,$7);}
            | type IDENTIFIER LPAREN RPAREN LBRACE stats RBRACE {$$ = new func_Decl($1,$2,NULL,$6);}
            ;

var_list    : var_list COLON var        {$$ = $1; $$->push_back($3);}
            | var       {$$ = new std::vector<Var*>; $$->push_back($1);}
            ;

var : type IDENTIFIER   {$$ = new Var($1,$2,NULL);}
    | type IDENTIFIER ASSIGN expr       {$$ = new Var($1,$2,$4);}
    ;

var_decl    : type IDENTIFIER SEMI      {$$ = new var_Decl($1,$2,NULL);}
            | type IDENTIFIER ASSIGN expr SEMI  {$$ = new var_Decl($1,$2,$4);}
            ;

type    : INT   {$$ = new Type(Type::TypeID::_Int);}
        | DOUBLE        {$$ = new Type(Type::TypeID::_Double);}
        | BOOL  {$$ = new Type(Type::TypeID::_Bool);}
        | FLOAT {$$ = new Type(Type::TypeID::_Float);}
        | CHAR  {$$ = new Type(Type::TypeID::_Char);}
        | SHORT {$$ = new Type(Type::TypeID::_Short);}
        | LONG  {$$ = new Type(Type::TypeID::_Long);}
        | VOID  {$$ = new Type(Type::TypeID::_Void);}
        ;

stats   : stats stat    {$$ = $1; $$->push_back($2);}
        |       {$$ = new std::vector<Stat*> ; }
        ;

stat    : expr SEMI     {$$ = new expr_Stat($1);}
        | if_stat       {$$ = $1;}
        | for_stat      {$$ = $1;}
        | while_stat    {$$ = $1;}
        | switch_stat   {$$ = $1;}
        | do_stat       {$$ = $1;}
        | continue_stat {$$ = $1;}
        | break_stat    {$$ = $1;}
        | return_stat   {$$ = $1;}
        | var_decl      {$$ = new var_decl_Stat($1);}
        | LBRACE stats RBRACE  {$$ = new stats_Stat($2);}
        ;

if_stat : IF LPAREN expr RPAREN stat %prec LOWER_THAN_ELSE  {$$ = new if_Stat($3,$5,NULL);}
        | IF LPAREN expr RPAREN stat ELSE stat  {$$ = new if_Stat($3,$5,$7);}
        ;

for_stat    : FOR LPAREN expr SEMI expr SEMI expr RPAREN stat   {$$ = new for_Stat($3,$5,$7,NULL,$9);}
            | FOR LPAREN var_decl expr SEMI expr RPAREN stat       {$$ = new for_Stat(NULL,$4,$6,$3,$8);}
            ;

while_stat  : WHILE LPAREN expr RPAREN stat     {$$ = new while_Stat($3,$5);}
                ;

do_stat     : DO LBRACE expr RPAREN WHILE LPAREN stat RPAREN    {$$ = new do_Stat($3,$7);}
                ;

switch_stat : SWITCH LPAREN expr RPAREN LBRACE case_list RBRACE {$$ = new switch_Stat($3,$6);}
                ;

case_list   : case_list case {$$ = $1; $$->push_back($2);}
            |   {$$ = new std::vector<Case*>;}
            ;

case    : CASE expr COLON stats {$$ = new Case($2,$4);}
        | DEFAULT COLON stats   {$$ = new Case(NULL,$3);}
        ;

continue_stat   : CONTINUE SEMI {$$ = new continue_Stat();}
                ;

break_stat      : BREAK SEMI    {$$ = new break_Stat();}
                ;

return_stat : RETURN expr SEMI  {$$ = new return_Stat($2);}
            | RETURN SEMI       {$$ = new return_Stat(NULL);}
            ;

expr    : DADD expr             {$$ = new dadd_Expr(NULL,$2);}
        | expr DADD             {$$ = new dadd_Expr($1,NULL);}
        | DSUB expr             {$$ = new dsub_Expr(NULL,$2);}
        | expr DSUB             {$$ = new dsub_Expr($1,NULL);}
        | ADD expr              {$$ = new pos_Expr($2);}
        | SUB expr              {$$ = new neg_Expr($2);}
        | NOT expr              {$$ = new not_Expr($2);}
        | expr BNOT expr        {$$ = new bnot_Expr($1,$3);}
        | expr MUL expr         {$$ = new mul_Expr($1,$3);}
        | expr DIV expr         {$$ = new div_Expr($1,$3);}
        | expr MOD expr         {$$ = new mod_Expr($1,$3);}
        | expr ADD expr         {$$ = new add_Expr($1,$3);}
        | expr SUB expr         {$$ = new sub_Expr($1,$3);}
        | expr SHL expr         {$$ = new shl_Expr($1,$3);}
        | expr SHR expr         {$$ = new shr_Expr($1,$3);}
        | expr GE expr          {$$ = new ge_Expr($1,$3);}
        | expr LE expr          {$$ = new le_Expr($1,$3);}
        | expr LT expr          {$$ = new lt_Expr($1,$3);}
        | expr GT expr          {$$ = new gt_Expr($1,$3);}
        | expr EQ expr          {$$ = new eq_Expr($1,$3);}
        | expr NEQ expr         {$$ = new neq_Expr($1,$3);}
        | expr BAND expr        {$$ = new band_Expr($1,$3);}
        | expr BXOR expr        {$$ = new bxor_Expr($1,$3);}
        | expr BOR expr         {$$ = new bor_Expr($1,$3);}
        | expr AND expr         {$$ = new and_Expr($1,$3);}
        | expr OR expr          {$$ = new or_Expr($1,$3);}
        | expr ADDEQ expr       {$$ = new addeq_Expr($1,$3);}
        | expr SUBEQ expr       {$$ = new subeq_Expr($1,$3);}
        | expr MULEQ expr       {$$ = new muleq_Expr($1,$3);}
        | expr DIVEQ expr       {$$ = new diveq_Expr($1,$3);}
        | expr MODEQ expr       {$$ = new modeq_Expr($1,$3);}
        | expr BANDEQ expr      {$$ = new bandeq_Expr($1,$3);}
        | expr BOREQ expr       {$$ = new boreq_Expr($1,$3);}
        | expr BXOREQ expr      {$$ = new bxoreq_Expr($1,$3);}
        | expr SHREQ expr       {$$ = new shreq_Expr($1,$3);}
        | expr SHLEQ expr       {$$ = new shleq_Expr($1,$3);}
        | val                   {$$ = new val_Expr($1);}
        | IDENTIFIER            {$$ = new var_Expr($1);}
        | LPAREN expr RPAREN    {$$ = $2;}
        ;
val     : INTNUM    {$$ = new intVal($1);}
        | FLOATNUM  {$$ = new doubleVal($1);}
        | STRING    {$$ = new stringVal($1);}
        | CHARACTER {$$ = new charVal($1);}
        | TRUE      {$$ = new boolVal(true);}
        | FALSE     {$$ = new boolVal(false);}
        ;
%%
void yyerror(char *str){
    
    fprintf(stderr,"error:%s\n",str);
}

int yywrap(){
    
    return 1;
}
int main()
{  
    yyparse();
}