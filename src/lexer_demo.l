
%option noyywrap
%{
    #include <stdio.h>
    #include <math.h>
    #include <iostream>
    #include <string.h>
    void yyerror(char *);
%}

%%
      
","														{printf("COMMA "); }
"..."													{printf("ELLIPSES ");}
"."														{printf("DOT "); }
";"														{printf("SEMI "); }
"("														{printf("LPAREN "); }
")"														{printf("RPAREN "); }
"["														{printf("LBRACKET ");}
"]"														{printf("RBRACKET ");}
"{"														{printf("LBRACE "); }
"}"														{printf("RBRACE "); }
"<<="													{printf("SHLEQ "); }
"<<"													{printf("SHL "); }
">>="													{printf("SHREQ "); }
">>"													{printf("SHR "); }
"=="													{printf("EQ "); }
">="													{printf("GE "); }
">"														{printf("GT "); }
"<="													{printf("LE "); }
"<"														{printf("LT "); }
"!="													{printf("NEQ "); }
"!"														{printf("NOT "); }
"="														{printf("ASSIGN "); }
"&&"													{printf("AND "); }
"&="													{printf("BANDEQ "); }
"&"														{printf("BAND "); }
"||"													{printf("OR "); }
"|="													{printf("BOREQ "); }
"|"														{printf("BOR "); }
"->"													{printf("ARW "); }
"^="													{printf("BXOREQ "); }
"^"														{printf("BXOR "); }
"~"														{printf("BNOT "); }
"++"													{printf("DADD "); }
"+="													{printf("ADDEQ "); }
"+"														{printf("ADD "); }
"--"													{printf("DSUB "); }
"-="													{printf("SUBEQ "); }
"-"														{printf("SUB "); }
"*="													{printf("MULEQ "); }
"*"														{printf("MUL "); }
"/="													{printf("DIVEQ "); }
"/"														{printf("DIV "); }
"%="													{printf("MODEQ "); }
"%"														{printf("MOD "); }
"?"														{printf("QUES "); }
":"														{printf("COLON "); }
"struct"												{printf("STRUCT "); }
"union"													{printf("UNION "); }
"typedef"												{printf("TYPEDEF "); }
"const"													{printf("CONST "); }
"enum"													{printf("ENUM "); }
"ptr"													{printf("PTR "); }
"array"													{printf("ARRAY "); }
"if"													{printf("IF "); }
"else"													{printf("ELSE "); }
"for"													{printf("FOR "); }
"while"													{printf("WHILE "); }
"do"													{printf("DO "); }
"switch"												{printf("SWITCH "); }
"case"													{printf("CASE "); }
"default"												{printf("DEFAULT ");}
"continue"												{printf("CONTINUE ");}
"return"												{printf("RETURN "); }
"true"													{printf("TRUE "); }
"false"													{printf("FALSE ");}
"break"													{printf("BREAK "); }
"sizeof"												{printf("SIZEOF "); }
"bool"													{printf("BOOL "); }
"short"													{printf("SHORT "); }
"int"													{printf("INT ");}
"long"													{printf("LONG ");}
"char"													{printf("CHAR ");  }
"float"													{printf("FLOAT "); }
"double"												{printf("DOUBLE "); }
"void"													{printf("VOID ");  }
[ \t\n]													{ ; }
"/*"[^*]*[*]+([^*/][^*]*[*]+)*"/"						{ ; }
"//".*													{ ; }
"\'"[^']"\'"											{ 
															printf("CHARACTER(%c) ", yytext[1]);
															
														}
"\""[^"]*"\""                                           {
                                                            
                                                            printf("STRING(");
                                                            for(int i = 1;i<yyleng-1;i++)
                                                                printf("%c",yytext[i]);
                                                            printf(") ");
                                                            
                                                        }
[0-9]+													{printf("INTNUM(%s) ",yytext); }
[a-zA-Z_][a-zA-Z0-9_]*									{printf("IDENDIFIER(%s) ",yytext); }
[0-9]+\.[0-9]*											{printf("FLOATNUM(%s) ",yytext); }


%%
int main(int argc, char ** argv)
{
    if ( argc > 1 ) {
        if (! (yyin = fopen(argv[1], "r" ) )){
        perror(argv[1]);
        return 1;
        }
        printf("[I]>>>Read data from file:%s\n", argv[1]);
    }else{
        printf("[I]>>>Read data from stdin.\n");
    }
    yylex();
    return 0;
}
