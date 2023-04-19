/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MNT_D_FC_2023_SPRING_MINICOMPILER_SRC_PARSE_HPP_INCLUDED
# define YY_YY_MNT_D_FC_2023_SPRING_MINICOMPILER_SRC_PARSE_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VOID = 258,
    BOOL = 259,
    SHORT = 260,
    INT = 261,
    LONG = 262,
    CHAR = 263,
    FLOAT = 264,
    DOUBLE = 265,
    TRUE = 266,
    FALSE = 267,
    IF = 268,
    ELSE = 269,
    FOR = 270,
    WHILE = 271,
    DO = 272,
    SWITCH = 273,
    CASE = 274,
    DEFAULT = 275,
    CONTINUE = 276,
    RETURN = 277,
    BREAK = 278,
    ADD = 279,
    ADDEQ = 280,
    DADD = 281,
    SUB = 282,
    SUBEQ = 283,
    DSUB = 284,
    MUL = 285,
    MULEQ = 286,
    DIV = 287,
    DIVEQ = 288,
    MOD = 289,
    MODEQ = 290,
    NOT = 291,
    BNOT = 292,
    NEQ = 293,
    AND = 294,
    BANDEQ = 295,
    BAND = 296,
    OR = 297,
    BOR = 298,
    BOREQ = 299,
    BXOR = 300,
    BXOREQ = 301,
    EQ = 302,
    GE = 303,
    DT = 304,
    LE = 305,
    LT = 306,
    SHL = 307,
    SHLEQ = 308,
    SHR = 309,
    SHREQ = 310,
    ASSIGN = 311,
    QUE = 312,
    COLON = 313,
    COMMA = 314,
    ELLIPSES = 315,
    DOT = 316,
    SEMI = 317,
    LPAREN = 318,
    RPAREN = 319,
    LBRACKET = 320,
    RBRACKET = 321,
    LBRACE = 322,
    RBRACE = 323,
    INTNUM = 324,
    IDENTIFIER = 325,
    STRING = 326,
    FLOATNUM = 327,
    CHARACTER = 328,
    LOWER_THAN_ELSE = 329,
    GT = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "./src/parse.y"

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

#line 164 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MNT_D_FC_2023_SPRING_MINICOMPILER_SRC_PARSE_HPP_INCLUDED  */
