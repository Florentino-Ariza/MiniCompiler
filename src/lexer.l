
%option noyywrap
%{
    #include <stdio.h>
    #include <math.h>
    #include <iostream>
    #include <string.h>
    void yyerror(char *);
%}

%%
      
","														{printf("COMMA "); return COMMA;}
"..."													{printf("ELLIPSES "); return ELLIPSES;}
"."														{printf("DOT "); return DOT;}
";"														{printf("SEMI "); return SEMI;}
"("														{printf("LPAREN "); return LPAREN;}
")"														{printf("RPAREN "); return RPAREN;}
"["														{printf("LBRACKET "); return LBRACKET;}
"]"														{printf("RBRACKET "); return RBRACKET;}
"{"														{printf("LBRACE "); return LBRACE;}
"}"														{printf("RBRACE "); return RBRACE;}
"<<="													{printf("SHLEQ "); return SHLEQ;}
"<<"													{printf("SHL "); return SHL;}
">>="													{printf("SHREQ "); return SHREQ;}
">>"													{printf("SHR "); return SHR;}
"=="													{printf("EQ "); return EQ;}
">="													{printf("GE "); return GE;}
">"														{printf("GT "); return GT;}
"<="													{printf("LE "); return LE;}
"<"														{printf("LT "); return LT;}
"!="													{printf("NEQ "); return NEQ;}
"!"														{printf("NOT "); return NOT;}
"="														{printf("ASSIGN "); return ASSIGN;}
"&&"													{printf("AND "); return AND;}
"&="													{printf("BANDEQ "); return BANDEQ;}
"&"														{printf("BAND "); return BAND;}
"||"													{printf("OR "); return OR;}
"|="													{printf("BOREQ "); return BOREQ;}
"|"														{printf("BOR "); return BOR;}
"->"													{printf("ARW "); return ARW;}
"^="													{printf("BXOREQ "); return BXOREQ;}
"^"														{printf("BXOR "); return BXOR;}
"~"														{printf("BNOT "); return BNOT;}
"++"													{printf("DADD "); return DADD;}
"+="													{printf("ADDEQ "); return ADDEQ;}
"+"														{printf("ADD "); return ADD;}
"--"													{printf("DSUB "); return DSUB;}
"-="													{printf("SUBEQ "); return SUBEQ;}
"-"														{printf("SUB "); return SUB;}
"*="													{printf("MULEQ "); return MULEQ;}
"*"														{printf("MUL "); return MUL;}
"/="													{printf("DIVEQ "); return DIVEQ;}
"/"														{printf("DIV "); return DIV;}
"%="													{printf("MODEQ "); return MODEQ;}
"%"														{printf("MOD "); return MOD;}
"?"														{printf("QUES "); return QUES;}
":"														{printf("COLON "); return COLON;}
"struct"												{printf("STRUCT "); return STRUCT;}
"union"													{printf("UNION "); return UNION;}
"typedef"												{printf("TYPEDEF "); return TYPEDEF;}
"const"													{printf("CONST "); return CONST;}
"enum"													{printf("ENUM "); return ENUM;}
"ptr"													{printf("PTR "); return PTR;}
"array"													{printf("ARRAY "); return ARRAY;}
"if"													{printf("IF "); return IF;}
"else"													{printf("ELSE "); return ELSE;}
"for"													{printf("FOR "); return FOR;}
"while"													{printf("WHILE "); return WHILE;}
"do"													{printf("DO "); return DO;}
"switch"												{printf("SWITCH "); return SWITCH;}
"case"													{printf("CASE "); return CASE;}
"default"												{printf("DEFAULT "); return DEFAULT;}
"continue"												{printf("CONTINUE "); return CONTINUE;}
"return"												{printf("RETURN "); return RETURN;}
"true"													{printf("TRUE "); return TRUE; }
"false"													{printf("FALSE "); return FALSE; }
"break"													{printf("BREAK "); return BREAK; }
"sizeof"												{printf("SIZEOF "); return SIZEOF; }
"bool"													{printf("BOOL "); return BOOL; }
"short"													{printf("SHORT "); return SHORT; }
"int"													{printf("INT "); return INT; }
"long"													{printf("LONG "); return LONG; }
"char"													{printf("CHAR "); return CHAR; }
"float"													{printf("FLOAT "); return FLOAT; }
"double"												{printf("DOUBLE "); return DOUBLE; }
"void"													{printf("VOID "); return VOID; }
[ \t\n]													{ ; }
"/*"[^*]*[*]+([^*/][^*]*[*]+)*"/"						{ ; }
"//".*													{ ; }
"\'"[^']"\'"											{ 
															printf("CHARACTER(%c)", yytext[1]);
															return CHARACTER; 
														}
"\""[^"]*"\""                                           {
                                                            
                                                            printf("STRING(");
                                                            for(int i = 1;i<yyleng;i++)
                                                                printf("%c",yytext[i]);
                                                            printf(")");
                                                            return STRING;
                                                        }
[0-9]+													{printf("INTNUM(%s)",yytext); return INTNUM; }
[0-9]+													{ ; }
[0-9]+													{ ; }
[0-9]+													{ ; }        
FLOATNUM {DIGIT}+\.{DIGIT}*
IDENTIFIER

%%
int main(int argc, char ** argv)
{
    if ( argc > 2 ) {
        if (! (yyin = fopen(argv[1], "r" ) )){
        perror(argv[1]);
        return 1;
        }
        printf("[I]>>>Read data from file:%s\n", argv[1]);
    }else{
        printf("[I]>>>Read data from stdin.\n");
    }
    yyout=fopen("result.txt","w");
    yylex();
    return 0;
}
