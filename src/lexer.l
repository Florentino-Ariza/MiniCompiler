%option noyywrap
%{
    #include <stdio.h>
    #include <math.h>
    #include <iostream>
    #include <string.h>
    #include "AST_tree.hpp"
    #include "parse.hpp"
    void yyerror(char *);
%}

%%
      
","														{ return COMMA;}
"..."													{ return ELLIPSES;}
"."														{ return DOT;}
";"														{ return SEMI;}
"("														{ return LPAREN;}
")"														{ return RPAREN;}
"["														{ return LBRACKET;}
"]"														{ return RBRACKET;}
"{"														{ return LBRACE;}
"}"														{ return RBRACE;}
"<<="													{ return SHLEQ;}
"<<"													{ return SHL;}
">>="													{ return SHREQ;}
">>"													{ return SHR;}
"=="													{ return EQ;}
">="													{ return GE;}
">"														{ return GT;}
"<="													{ return LE;}
"<"														{ return LT;}
"!="													{ return NEQ;}
"!"														{ return NOT;}
"="														{ return ASSIGN;}
"&&"													{ return AND;}
"&="													{ return BANDEQ;}
"&"														{ return BAND;}
"||"													{ return OR;}
"|="													{ return BOREQ;}
"|"														{ return BOR;}
"^="													{ return BXOREQ;}
"^"														{ return BXOR;}
"~"														{ return BNOT;}
"++"													{ return DADD;}
"+="													{ return ADDEQ;}
"+"														{ return ADD;}
"--"													{ return DSUB;}
"-="													{ return SUBEQ;}
"-"														{ return SUB;}
"*="													{ return MULEQ;}
"*"														{ return MUL;}
"/="													{ return DIVEQ;}
"/"														{ return DIV;}
"%="													{ return MODEQ;}
"%"														{ return MOD;}
":"														{ return COLON;}
"if"													{ return IF;}
"else"													{ return ELSE;}
"for"													{ return FOR;}
"while"													{ return WHILE;}
"do"													{ return DO;}
"switch"												{ return SWITCH;}
"case"													{ return CASE;}
"default"												{ return DEFAULT;}
"continue"												{ return CONTINUE;}
"return"												{ return RETURN;}
"true"													{ return TRUE; }
"false"													{ return FALSE; }
"break"													{ return BREAK; }
"bool"													{ return BOOL; }
"short"													{ return SHORT; }
"int"													{ return INT; }
"long"													{ return LONG; }
"char"													{ return CHAR; }
"float"													{ return FLOAT; }
"double"												{ return DOUBLE; }
"void"													{ return VOID; }
[ \t\n]													{ ; }
"/*"[^*]*[*]+([^*/][^*]*[*]+)*"/"						{ ; }
"//".*													{ ; }
"\'"[^']"\'"											{ 
                                                            sscanf(yytext, "%c", &yylval.charVal); 
															return CHARACTER; 
														}
"\""[^"]*"\""                                           {
                                                            yylval.strVal = new std::string(yytext, yyleng);
                                                            return STRING;
                                                        }
[0-9]+													{ sscanf(yytext, "%d", &yylval.intVal); return INTNUM; }
[a-zA-Z_][a-zA-Z0-9_]*									{ yylval.strVal = new std::string(yytext, yyleng); return IDENTIFIER; }
[0-9]+\.[0-9]*											{ sscanf(yytext, "%lf", &yylval.doubleVal); return FLOATNUM; }    

%%

