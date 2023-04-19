/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./src/parse.y"

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "AST_tree.hpp"
int yylex(void);
void yyerror(char *);
Program* root;

#line 80 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 239 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MNT_D_FC_2023_SPRING_MINICOMPILER_SRC_PARSE_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

#define YYUNDEFTOK  2
#define YYMAXUTOK   330


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    98,    98,   101,   102,   105,   106,   109,   110,   113,
     114,   117,   118,   121,   122,   125,   126,   127,   128,   129,
     130,   131,   132,   135,   136,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   152,   153,   156,   157,
     160,   163,   166,   169,   170,   173,   174,   177,   180,   183,
     184,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     227,   228,   229,   230,   231,   232
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "BOOL", "SHORT", "INT", "LONG",
  "CHAR", "FLOAT", "DOUBLE", "TRUE", "FALSE", "IF", "ELSE", "FOR", "WHILE",
  "DO", "SWITCH", "CASE", "DEFAULT", "CONTINUE", "RETURN", "BREAK", "ADD",
  "ADDEQ", "DADD", "SUB", "SUBEQ", "DSUB", "MUL", "MULEQ", "DIV", "DIVEQ",
  "MOD", "MODEQ", "NOT", "BNOT", "NEQ", "AND", "BANDEQ", "BAND", "OR",
  "BOR", "BOREQ", "BXOR", "BXOREQ", "EQ", "GE", "DT", "LE", "LT", "SHL",
  "SHLEQ", "SHR", "SHREQ", "ASSIGN", "QUE", "COLON", "COMMA", "ELLIPSES",
  "DOT", "SEMI", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LBRACE",
  "RBRACE", "INTNUM", "IDENTIFIER", "STRING", "FLOATNUM", "CHARACTER",
  "LOWER_THAN_ELSE", "GT", "$accept", "program", "decls", "decl",
  "func_decl", "var_list", "var", "var_decl", "type", "stats", "stat",
  "if_stat", "for_stat", "while_stat", "do_stat", "switch_stat",
  "case_list", "case", "continue_stat", "break_stat", "return_stat",
  "expr", "val", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330
};
# endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      66,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,     3,
      66,  -111,  -111,  -111,   -52,  -111,  -111,    21,   405,  -111,
      57,  -111,  -111,   405,   405,   405,   405,   405,   405,  -111,
    -111,  -111,  -111,  -111,   455,  -111,   -42,   -43,  -111,   -44,
     179,   -13,   179,   -13,   -13,   494,   405,   405,  -111,   405,
     405,  -111,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,  -111,   405,  -111,    66,
     -40,   -26,  -111,   179,  1092,   179,  1092,   -13,  1092,   -13,
    1092,   -13,  1092,   -13,  1270,  1154,  1092,  1241,  1125,  1183,
    1092,  1212,  1092,  1270,   170,   170,   170,   103,  1092,   103,
    1092,   170,   162,  -111,  -111,   405,   -30,    -5,    15,    12,
      22,    34,   394,    36,  -111,  -111,  -111,    29,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,   546,   233,  1092,
     405,    83,   405,   405,   405,  -111,  -111,   585,  -111,   304,
     -39,  -111,  -111,   624,   405,   676,   715,   767,   819,  -111,
    -111,   375,   871,   405,   375,    84,    39,    87,   405,   910,
    -111,    40,  -111,   375,   949,   405,   375,     0,  -111,   375,
    1001,    44,   405,    53,  -111,  -111,  -111,   375,  -111,  1053,
    -111,  -111,  -111,   375,   375
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    17,    20,    15,    21,    19,    18,    16,     0,
       2,     4,     5,     6,     0,     1,     3,     0,     0,    13,
       0,    94,    95,     0,     0,     0,     0,     0,     0,    90,
      88,    92,    91,    93,     0,    87,     0,     0,    10,     0,
      55,    51,    56,    53,    57,     0,     0,     0,    52,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    24,     0,
       0,    11,    89,    62,    77,    63,    78,    59,    79,    60,
      80,    61,    81,    58,    71,    75,    82,    72,    76,    74,
      83,    73,    84,    70,    66,    67,    68,    64,    86,    65,
      85,    69,     0,     9,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     8,    34,     0,    23,    26,
      27,    28,    30,    29,    31,    32,    33,     0,     0,    12,
       0,     0,     0,     0,     0,    47,    50,     0,    48,     0,
       0,    25,     7,     0,     0,     0,     0,     0,     0,    49,
      35,     0,     0,     0,     0,     0,     0,    36,     0,     0,
      40,     0,    44,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,    42,    43,    39,     0,    41,     0,
      24,    38,    24,    46,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -111,  -111,  -111,   105,  -111,  -111,    37,     1,     2,  -110,
     -59,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,   -18,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    37,    38,   126,   127,   112,
     128,   129,   130,   131,   132,   133,   177,   185,   134,   135,
     136,   137,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    13,    14,    15,   138,    40,    41,    42,    43,    44,
      45,    13,    14,    48,   149,    79,    51,    18,    17,   182,
     183,    80,    39,    19,    58,    78,    81,   114,    83,    84,
     115,    85,    86,   140,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   141,   111,
       1,     2,     3,     4,     5,     6,     7,     8,   184,     1,
       2,     3,     4,     5,     6,     7,     8,    18,   142,   143,
     193,    39,   194,    19,    20,   144,     1,     2,     3,     4,
       5,     6,     7,     8,    21,    22,   145,   139,   148,   150,
     171,   173,   167,   176,   147,   170,   172,    23,   188,    24,
      25,   190,    26,     0,   178,    16,   113,   181,     0,    27,
     186,    36,   153,   155,   156,   157,   158,    46,   191,    48,
      49,     0,    51,    52,     0,    54,   162,    56,     0,     0,
      58,     0,   154,     0,     0,   169,    28,     0,     0,     0,
     174,     0,    29,    30,    31,    32,    33,   180,     0,     0,
       0,     0,     0,     0,   189,     1,     2,     3,     4,     5,
       6,     7,     8,    21,    22,   116,     0,   117,   118,   119,
     120,     0,     0,   121,   122,   123,    23,     0,    24,    25,
       0,    26,     0,     0,    46,     0,    48,    49,    27,    51,
      52,     0,    54,     0,    56,    48,     0,    58,    51,    52,
       0,    54,     0,    56,     0,     0,    58,     0,     0,     0,
       0,     0,    72,     0,    74,    28,     0,     0,     0,   124,
     125,    29,    30,    31,    32,    33,     1,     2,     3,     4,
       5,     6,     7,     8,    21,    22,   116,     0,   117,   118,
     119,   120,     0,     0,   121,   122,   123,    23,     0,    24,
      25,     0,    26,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
     124,   152,    29,    30,    31,    32,    33,     1,     2,     3,
       4,     5,     6,     7,     8,    21,    22,   116,     0,   117,
     118,   119,   120,     0,     0,   121,   122,   123,    23,     0,
      24,    25,     0,    26,     0,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,   124,   160,    29,    30,    31,    32,    33,     1,     2,
       3,     4,     5,     6,     7,     8,    21,    22,   116,     0,
     117,   118,   119,   120,     0,     0,   121,   122,   123,    23,
       0,    24,    25,     0,    26,    21,    22,     0,     0,     0,
       0,    27,     0,     0,     0,     0,    21,    22,    23,     0,
      24,    25,     0,    26,     0,     0,     0,     0,     0,    23,
      27,    24,    25,     0,    26,     0,     0,     0,    28,     0,
       0,    27,   124,     0,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,   146,    28,     0,     0,
       0,     0,     0,    29,    30,    31,    32,    33,    28,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,     0,     0,    76,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      77,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,   151,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    77,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,     0,     0,   159,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      77,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,   161,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,   163,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    77,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,     0,     0,   168,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    77,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,   175,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    77,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,     0,
       0,   192,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    77,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,    46,
       0,    48,    49,     0,    51,    52,     0,    54,     0,    56,
       0,     0,    58,    59,    60,     0,    62,    77,    64,     0,
      66,     0,    68,    69,     0,    70,    71,    72,    46,    74,
      48,    49,     0,    51,    52,     0,    54,     0,    56,     0,
       0,    58,    59,     0,     0,    62,     0,    64,     0,    66,
      77,    68,    69,     0,    70,    71,    72,    46,    74,    48,
      49,     0,    51,    52,     0,    54,     0,    56,     0,     0,
      58,    59,     0,     0,    62,     0,     0,     0,    66,    77,
      68,    69,     0,    70,    71,    72,    46,    74,    48,    49,
       0,    51,    52,     0,    54,     0,    56,     0,     0,    58,
      59,     0,     0,    62,     0,     0,     0,     0,    77,    68,
      69,     0,    70,    71,    72,    46,    74,    48,    49,     0,
      51,    52,     0,    54,     0,    56,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    77,    68,    69,
       0,    70,    71,    72,    46,    74,    48,    49,     0,    51,
      52,     0,    54,     0,    56,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,    69,     0,
      70,    71,    72,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
      18,     0,     0,     0,   114,    23,    24,    25,    26,    27,
      28,    10,    10,    26,   124,    58,    29,    56,    70,    19,
      20,    64,    20,    62,    37,    67,    70,    67,    46,    47,
      56,    49,    50,    63,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    63,    77,
       3,     4,     5,     6,     7,     8,     9,    10,    68,     3,
       4,     5,     6,     7,     8,     9,    10,    56,    63,    67,
     190,    79,   192,    62,    63,    63,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    62,   115,    62,    70,
      16,    14,   161,    63,   122,   164,    67,    24,    64,    26,
      27,    58,    29,    -1,   173,    10,    79,   176,    -1,    36,
     179,    64,   140,   141,   142,   143,   144,    24,   187,    26,
      27,    -1,    29,    30,    -1,    32,   154,    34,    -1,    -1,
      37,    -1,   141,    -1,    -1,   163,    63,    -1,    -1,    -1,
     168,    -1,    69,    70,    71,    72,    73,   175,    -1,    -1,
      -1,    -1,    -1,    -1,   182,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    24,    -1,    26,    27,    36,    29,
      30,    -1,    32,    -1,    34,    26,    -1,    37,    29,    30,
      -1,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    54,    63,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    29,    11,    12,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    11,    12,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    24,
      36,    26,    27,    -1,    29,    -1,    -1,    -1,    63,    -1,
      -1,    36,    67,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      75,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    75,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      75,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    75,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    75,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    75,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    75,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    -1,    24,
      -1,    26,    27,    -1,    29,    30,    -1,    32,    -1,    34,
      -1,    -1,    37,    38,    39,    -1,    41,    75,    43,    -1,
      45,    -1,    47,    48,    -1,    50,    51,    52,    24,    54,
      26,    27,    -1,    29,    30,    -1,    32,    -1,    34,    -1,
      -1,    37,    38,    -1,    -1,    41,    -1,    43,    -1,    45,
      75,    47,    48,    -1,    50,    51,    52,    24,    54,    26,
      27,    -1,    29,    30,    -1,    32,    -1,    34,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    -1,    45,    75,
      47,    48,    -1,    50,    51,    52,    24,    54,    26,    27,
      -1,    29,    30,    -1,    32,    -1,    34,    -1,    -1,    37,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    75,    47,
      48,    -1,    50,    51,    52,    24,    54,    26,    27,    -1,
      29,    30,    -1,    32,    -1,    34,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    47,    48,
      -1,    50,    51,    52,    24,    54,    26,    27,    -1,    29,
      30,    -1,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    48,    -1,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    77,
      78,    79,    80,    83,    84,     0,    79,    70,    56,    62,
      63,    11,    12,    24,    26,    27,    29,    36,    63,    69,
      70,    71,    72,    73,    97,    98,    64,    81,    82,    84,
      97,    97,    97,    97,    97,    97,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      50,    51,    52,    53,    54,    55,    62,    75,    67,    58,
      64,    70,    64,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    85,    82,    67,    56,    13,    15,    16,    17,
      18,    21,    22,    23,    67,    68,    83,    84,    86,    87,
      88,    89,    90,    91,    94,    95,    96,    97,    85,    97,
      63,    63,    63,    67,    63,    62,    62,    97,    62,    85,
      70,    62,    68,    97,    83,    97,    97,    97,    97,    62,
      68,    64,    97,    62,    64,    64,    64,    86,    62,    97,
      86,    16,    67,    14,    97,    62,    63,    92,    86,    64,
      97,    86,    19,    20,    68,    93,    86,    64,    64,    97,
      58,    86,    58,    85,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    88,    88,
      89,    90,    91,    92,    92,    93,    93,    94,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     8,     7,     3,
       1,     2,     4,     3,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     7,     9,     8,
       5,     8,     7,     2,     0,     4,     3,     2,     2,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 98 "./src/parse.y"
                 {root = new Program((yyvsp[0].decls_)); root -> print();}
#line 1784 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 3:
#line 101 "./src/parse.y"
                       {(yyval.decls_) = (yyvsp[-1].decls_); (yyval.decls_) -> push_back((yyvsp[0].decl_));}
#line 1790 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 4:
#line 102 "./src/parse.y"
               {(yyval.decls_) = new std::vector<Decl*> ; (yyval.decls_) -> push_back((yyvsp[0].decl_));}
#line 1796 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 5:
#line 105 "./src/parse.y"
                        {(yyval.decl_) = (yyvsp[0].func_decl_);}
#line 1802 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 6:
#line 106 "./src/parse.y"
                        {(yyval.decl_) = (yyvsp[0].var_decl_);}
#line 1808 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 7:
#line 109 "./src/parse.y"
                                                                         {(yyval.func_decl_) = new func_Decl((yyvsp[-7].type_),(yyvsp[-6].strVal),(yyvsp[-4].var_list_),(yyvsp[-1].stats_));}
#line 1814 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 8:
#line 110 "./src/parse.y"
                                                                {(yyval.func_decl_) = new func_Decl((yyvsp[-6].type_),(yyvsp[-5].strVal),NULL,(yyvsp[-1].stats_));}
#line 1820 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 9:
#line 113 "./src/parse.y"
                                        {(yyval.var_list_) = (yyvsp[-2].var_list_); (yyval.var_list_)->push_back((yyvsp[0].var_));}
#line 1826 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 10:
#line 114 "./src/parse.y"
                        {(yyval.var_list_) = new std::vector<Var*>; (yyval.var_list_)->push_back((yyvsp[0].var_));}
#line 1832 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 11:
#line 117 "./src/parse.y"
                        {(yyval.var_) = new Var((yyvsp[-1].type_),(yyvsp[0].strVal),NULL);}
#line 1838 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 12:
#line 118 "./src/parse.y"
                                        {(yyval.var_) = new Var((yyvsp[-3].type_),(yyvsp[-2].strVal),(yyvsp[0].expr_));}
#line 1844 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 13:
#line 121 "./src/parse.y"
                                        {(yyval.var_decl_) = new var_Decl((yyvsp[-2].type_),(yyvsp[-1].strVal),NULL);}
#line 1850 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 14:
#line 122 "./src/parse.y"
                                                {(yyval.var_decl_) = new var_Decl((yyvsp[-4].type_),(yyvsp[-3].strVal),(yyvsp[-1].expr_));}
#line 1856 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 15:
#line 125 "./src/parse.y"
                {(yyval.type_) = new Type(Type::TypeID::_Int);}
#line 1862 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 16:
#line 126 "./src/parse.y"
                        {(yyval.type_) = new Type(Type::TypeID::_Double);}
#line 1868 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 17:
#line 127 "./src/parse.y"
                {(yyval.type_) = new Type(Type::TypeID::_Bool);}
#line 1874 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 18:
#line 128 "./src/parse.y"
                {(yyval.type_) = new Type(Type::TypeID::_Float);}
#line 1880 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 19:
#line 129 "./src/parse.y"
                {(yyval.type_) = new Type(Type::TypeID::_Char);}
#line 1886 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 20:
#line 130 "./src/parse.y"
                {(yyval.type_) = new Type(Type::TypeID::_Short);}
#line 1892 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 21:
#line 131 "./src/parse.y"
                {(yyval.type_) = new Type(Type::TypeID::_Long);}
#line 1898 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 22:
#line 132 "./src/parse.y"
                {(yyval.type_) = new Type(Type::TypeID::_Void);}
#line 1904 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 23:
#line 135 "./src/parse.y"
                        {(yyval.stats_) = (yyvsp[-1].stats_); (yyval.stats_)->push_back((yyvsp[0].stat_));}
#line 1910 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 24:
#line 136 "./src/parse.y"
                {(yyval.stats_) = new std::vector<Stat*> ; }
#line 1916 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 25:
#line 139 "./src/parse.y"
                        {(yyval.stat_) = new expr_Stat((yyvsp[-1].expr_));}
#line 1922 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 26:
#line 140 "./src/parse.y"
                        {(yyval.stat_) = (yyvsp[0].if_stat_);}
#line 1928 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 27:
#line 141 "./src/parse.y"
                        {(yyval.stat_) = (yyvsp[0].for_stat_);}
#line 1934 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 28:
#line 142 "./src/parse.y"
                        {(yyval.stat_) = (yyvsp[0].while_stat_);}
#line 1940 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 29:
#line 143 "./src/parse.y"
                        {(yyval.stat_) = (yyvsp[0].switch_stat_);}
#line 1946 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 30:
#line 144 "./src/parse.y"
                        {(yyval.stat_) = (yyvsp[0].do_stat_);}
#line 1952 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 31:
#line 145 "./src/parse.y"
                        {(yyval.stat_) = (yyvsp[0].continue_stat_);}
#line 1958 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 32:
#line 146 "./src/parse.y"
                        {(yyval.stat_) = (yyvsp[0].break_stat_);}
#line 1964 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 33:
#line 147 "./src/parse.y"
                        {(yyval.stat_) = (yyvsp[0].return_stat_);}
#line 1970 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 34:
#line 148 "./src/parse.y"
                        {(yyval.stat_) = new var_decl_Stat((yyvsp[0].var_decl_));}
#line 1976 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 35:
#line 149 "./src/parse.y"
                               {(yyval.stat_) = new stats_Stat((yyvsp[-1].stats_));}
#line 1982 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 36:
#line 152 "./src/parse.y"
                                                            {(yyval.if_stat_) = new if_Stat((yyvsp[-2].expr_),(yyvsp[0].stat_),NULL);}
#line 1988 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 37:
#line 153 "./src/parse.y"
                                                {(yyval.if_stat_) = new if_Stat((yyvsp[-4].expr_),(yyvsp[-2].stat_),(yyvsp[0].stat_));}
#line 1994 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 38:
#line 156 "./src/parse.y"
                                                                {(yyval.for_stat_) = new for_Stat((yyvsp[-6].expr_),(yyvsp[-4].expr_),(yyvsp[-2].expr_),NULL,(yyvsp[0].stat_));}
#line 2000 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 39:
#line 157 "./src/parse.y"
                                                                   {(yyval.for_stat_) = new for_Stat(NULL,(yyvsp[-4].expr_),(yyvsp[-2].expr_),(yyvsp[-5].var_decl_),(yyvsp[0].stat_));}
#line 2006 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 40:
#line 160 "./src/parse.y"
                                                {(yyval.while_stat_) = new while_Stat((yyvsp[-2].expr_),(yyvsp[0].stat_));}
#line 2012 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 41:
#line 163 "./src/parse.y"
                                                                {(yyval.do_stat_) = new do_Stat((yyvsp[-5].expr_),(yyvsp[-1].stat_));}
#line 2018 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 42:
#line 166 "./src/parse.y"
                                                                {(yyval.switch_stat_) = new switch_Stat((yyvsp[-4].expr_),(yyvsp[-1].case_list_));}
#line 2024 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 43:
#line 169 "./src/parse.y"
                             {(yyval.case_list_) = (yyvsp[-1].case_list_); (yyval.case_list_)->push_back((yyvsp[0].case_));}
#line 2030 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 44:
#line 170 "./src/parse.y"
                {(yyval.case_list_) = new std::vector<Case*>;}
#line 2036 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 45:
#line 173 "./src/parse.y"
                                {(yyval.case_) = new Case((yyvsp[-2].expr_),(yyvsp[0].stats_));}
#line 2042 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 46:
#line 174 "./src/parse.y"
                                {(yyval.case_) = new Case(NULL,(yyvsp[0].stats_));}
#line 2048 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 47:
#line 177 "./src/parse.y"
                                {(yyval.continue_stat_) = new continue_Stat();}
#line 2054 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 48:
#line 180 "./src/parse.y"
                                {(yyval.break_stat_) = new break_Stat();}
#line 2060 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 49:
#line 183 "./src/parse.y"
                                {(yyval.return_stat_) = new return_Stat((yyvsp[-1].expr_));}
#line 2066 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 50:
#line 184 "./src/parse.y"
                                {(yyval.return_stat_) = new return_Stat(NULL);}
#line 2072 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 51:
#line 187 "./src/parse.y"
                                {(yyval.expr_) = new dadd_Expr(NULL,(yyvsp[0].expr_));}
#line 2078 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 52:
#line 188 "./src/parse.y"
                                {(yyval.expr_) = new dadd_Expr((yyvsp[-1].expr_),NULL);}
#line 2084 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 53:
#line 189 "./src/parse.y"
                                {(yyval.expr_) = new dsub_Expr(NULL,(yyvsp[0].expr_));}
#line 2090 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 54:
#line 190 "./src/parse.y"
                                {(yyval.expr_) = new dsub_Expr((yyvsp[-1].expr_),NULL);}
#line 2096 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 55:
#line 191 "./src/parse.y"
                                {(yyval.expr_) = new pos_Expr((yyvsp[0].expr_));}
#line 2102 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 56:
#line 192 "./src/parse.y"
                                {(yyval.expr_) = new neg_Expr((yyvsp[0].expr_));}
#line 2108 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 57:
#line 193 "./src/parse.y"
                                {(yyval.expr_) = new not_Expr((yyvsp[0].expr_));}
#line 2114 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 58:
#line 194 "./src/parse.y"
                                {(yyval.expr_) = new bnot_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2120 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 59:
#line 195 "./src/parse.y"
                                {(yyval.expr_) = new mul_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2126 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 60:
#line 196 "./src/parse.y"
                                {(yyval.expr_) = new div_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2132 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 61:
#line 197 "./src/parse.y"
                                {(yyval.expr_) = new mod_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2138 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 62:
#line 198 "./src/parse.y"
                                {(yyval.expr_) = new add_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2144 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 63:
#line 199 "./src/parse.y"
                                {(yyval.expr_) = new sub_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2150 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 64:
#line 200 "./src/parse.y"
                                {(yyval.expr_) = new shl_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2156 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 65:
#line 201 "./src/parse.y"
                                {(yyval.expr_) = new shr_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2162 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 66:
#line 202 "./src/parse.y"
                                {(yyval.expr_) = new ge_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2168 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 67:
#line 203 "./src/parse.y"
                                {(yyval.expr_) = new le_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2174 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 68:
#line 204 "./src/parse.y"
                                {(yyval.expr_) = new lt_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2180 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 69:
#line 205 "./src/parse.y"
                                {(yyval.expr_) = new gt_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2186 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 70:
#line 206 "./src/parse.y"
                                {(yyval.expr_) = new eq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2192 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 71:
#line 207 "./src/parse.y"
                                {(yyval.expr_) = new neq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2198 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 72:
#line 208 "./src/parse.y"
                                {(yyval.expr_) = new band_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2204 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 73:
#line 209 "./src/parse.y"
                                {(yyval.expr_) = new bxor_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2210 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 74:
#line 210 "./src/parse.y"
                                {(yyval.expr_) = new bor_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2216 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 75:
#line 211 "./src/parse.y"
                                {(yyval.expr_) = new and_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2222 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 76:
#line 212 "./src/parse.y"
                                {(yyval.expr_) = new or_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2228 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 77:
#line 213 "./src/parse.y"
                                {(yyval.expr_) = new addeq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2234 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 78:
#line 214 "./src/parse.y"
                                {(yyval.expr_) = new subeq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2240 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 79:
#line 215 "./src/parse.y"
                                {(yyval.expr_) = new muleq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2246 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 80:
#line 216 "./src/parse.y"
                                {(yyval.expr_) = new diveq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2252 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 81:
#line 217 "./src/parse.y"
                                {(yyval.expr_) = new modeq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2258 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 82:
#line 218 "./src/parse.y"
                                {(yyval.expr_) = new bandeq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2264 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 83:
#line 219 "./src/parse.y"
                                {(yyval.expr_) = new boreq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2270 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 84:
#line 220 "./src/parse.y"
                                {(yyval.expr_) = new bxoreq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2276 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 85:
#line 221 "./src/parse.y"
                                {(yyval.expr_) = new shreq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2282 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 86:
#line 222 "./src/parse.y"
                                {(yyval.expr_) = new shleq_Expr((yyvsp[-2].expr_),(yyvsp[0].expr_));}
#line 2288 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 87:
#line 223 "./src/parse.y"
                                {(yyval.expr_) = new val_Expr((yyvsp[0].val_));}
#line 2294 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 88:
#line 224 "./src/parse.y"
                                {(yyval.expr_) = new var_Expr((yyvsp[0].strVal));}
#line 2300 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 89:
#line 225 "./src/parse.y"
                                {(yyval.expr_) = (yyvsp[-1].expr_);}
#line 2306 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 90:
#line 227 "./src/parse.y"
                    {(yyval.val_) = new intVal((yyvsp[0].intVal));}
#line 2312 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 91:
#line 228 "./src/parse.y"
                    {(yyval.val_) = new doubleVal((yyvsp[0].doubleVal));}
#line 2318 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 92:
#line 229 "./src/parse.y"
                    {(yyval.val_) = new stringVal((yyvsp[0].strVal));}
#line 2324 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 93:
#line 230 "./src/parse.y"
                    {(yyval.val_) = new charVal((yyvsp[0].charVal));}
#line 2330 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 94:
#line 231 "./src/parse.y"
                    {(yyval.val_) = new boolVal(true);}
#line 2336 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;

  case 95:
#line 232 "./src/parse.y"
                    {(yyval.val_) = new boolVal(false);}
#line 2342 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"
    break;


#line 2346 "/mnt/d/fc_2023_spring/MiniCompiler/src/parse.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 234 "./src/parse.y"

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
