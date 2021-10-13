/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse grammar_parse
#define yylex   grammar_lex
#define yyerror grammar_error
#define yylval  grammar_lval
#define yychar  grammar_char
#define yydebug grammar_debug
#define yynerrs grammar_nerrs
#define yylloc grammar_lloc

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
/* Put the tokens into the symbol table, so that GDB and other debuggers
   know about them.  */
enum yytokentype {
    _ERROR_ = 258,
    _SYMB_43 = 259,
    _SYMB_29 = 260,
    _SYMB_39 = 261,
    _SYMB_18 = 262,
    _SYMB_28 = 263,
    _SYMB_25 = 264,
    _SYMB_19 = 265,
    _SYMB_6 = 266,
    _SYMB_7 = 267,
    _SYMB_37 = 268,
    _SYMB_40 = 269,
    _SYMB_16 = 270,
    _SYMB_35 = 271,
    _SYMB_41 = 272,
    _SYMB_14 = 273,
    _SYMB_0 = 274,
    _SYMB_36 = 275,
    _SYMB_42 = 276,
    _SYMB_15 = 277,
    _SYMB_45 = 278,
    _SYMB_2 = 279,
    _SYMB_38 = 280,
    _SYMB_17 = 281,
    _SYMB_3 = 282,
    _SYMB_1 = 283,
    _SYMB_4 = 284,
    _SYMB_33 = 285,
    _SYMB_22 = 286,
    _SYMB_31 = 287,
    _SYMB_12 = 288,
    _SYMB_30 = 289,
    _SYMB_5 = 290,
    _SYMB_32 = 291,
    _SYMB_34 = 292,
    _SYMB_23 = 293,
    _SYMB_13 = 294,
    _SYMB_10 = 295,
    _SYMB_46 = 296,
    _SYMB_11 = 297,
    _SYMB_27 = 298,
    _SYMB_20 = 299,
    _SYMB_47 = 300,
    _SYMB_48 = 301,
    _SYMB_49 = 302,
    _SYMB_50 = 303,
    _SYMB_51 = 304,
    _SYMB_52 = 305,
    _SYMB_53 = 306,
    _SYMB_54 = 307,
    _SYMB_55 = 308,
    _SYMB_56 = 309,
    _SYMB_57 = 310,
    _SYMB_58 = 311,
    _SYMB_8 = 312,
    _SYMB_26 = 313,
    _SYMB_21 = 314,
    _SYMB_24 = 315,
    _SYMB_9 = 316,
    _SYMB_44 = 317,
    _SYMB_59 = 318,
    _STRING_ = 319,
    _CHAR_ = 320,
    _INTEGER_ = 321,
    _DOUBLE_ = 322
};
#endif
/* Tokens.  */
#define _ERROR_ 258
#define _SYMB_43 259
#define _SYMB_29 260
#define _SYMB_39 261
#define _SYMB_18 262
#define _SYMB_28 263
#define _SYMB_25 264
#define _SYMB_19 265
#define _SYMB_6 266
#define _SYMB_7 267
#define _SYMB_37 268
#define _SYMB_40 269
#define _SYMB_16 270
#define _SYMB_35 271
#define _SYMB_41 272
#define _SYMB_14 273
#define _SYMB_0 274
#define _SYMB_36 275
#define _SYMB_42 276
#define _SYMB_15 277
#define _SYMB_45 278
#define _SYMB_2 279
#define _SYMB_38 280
#define _SYMB_17 281
#define _SYMB_3 282
#define _SYMB_1 283
#define _SYMB_4 284
#define _SYMB_33 285
#define _SYMB_22 286
#define _SYMB_31 287
#define _SYMB_12 288
#define _SYMB_30 289
#define _SYMB_5 290
#define _SYMB_32 291
#define _SYMB_34 292
#define _SYMB_23 293
#define _SYMB_13 294
#define _SYMB_10 295
#define _SYMB_46 296
#define _SYMB_11 297
#define _SYMB_27 298
#define _SYMB_20 299
#define _SYMB_47 300
#define _SYMB_48 301
#define _SYMB_49 302
#define _SYMB_50 303
#define _SYMB_51 304
#define _SYMB_52 305
#define _SYMB_53 306
#define _SYMB_54 307
#define _SYMB_55 308
#define _SYMB_56 309
#define _SYMB_57 310
#define _SYMB_58 311
#define _SYMB_8 312
#define _SYMB_26 313
#define _SYMB_21 314
#define _SYMB_24 315
#define _SYMB_9 316
#define _SYMB_44 317
#define _SYMB_59 318
#define _STRING_ 319
#define _CHAR_ 320
#define _INTEGER_ 321
#define _DOUBLE_ 322




/* Copy the first part of user declarations.  */
#line 6 "grammar.y"

/* Begin C preamble code */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Absyn.h"

#define YYMAXDEPTH 10000000

typedef struct grammar__buffer_state *YY_BUFFER_STATE;
YY_BUFFER_STATE grammar__scan_string(const char *str);
void grammar__delete_buffer(YY_BUFFER_STATE buf);
extern int yyparse(void);
extern int yylex(void);
extern int grammar__init_lexer(FILE * inp);
extern void yyerror(const char *str);

ListIden reverseListIden(ListIden l)
{
    ListIden prev = 0;
    ListIden tmp = 0;
    while (l)
    {
        tmp = l->listiden_;
        l->listiden_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListGlobDecl reverseListGlobDecl(ListGlobDecl l)
{
    ListGlobDecl prev = 0;
    ListGlobDecl tmp = 0;
    while (l)
    {
        tmp = l->listglobdecl_;
        l->listglobdecl_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListPack reverseListPack(ListPack l)
{
    ListPack prev = 0;
    ListPack tmp = 0;
    while (l)
    {
        tmp = l->listpack_;
        l->listpack_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListClassMemDecl reverseListClassMemDecl(ListClassMemDecl l)
{
    ListClassMemDecl prev = 0;
    ListClassMemDecl tmp = 0;
    while (l)
    {
        tmp = l->listclassmemdecl_;
        l->listclassmemdecl_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListTypeArg reverseListTypeArg(ListTypeArg l)
{
    ListTypeArg prev = 0;
    ListTypeArg tmp = 0;
    while (l)
    {
        tmp = l->listtypearg_;
        l->listtypearg_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListParaSig reverseListParaSig(ListParaSig l)
{
    ListParaSig prev = 0;
    ListParaSig tmp = 0;
    while (l)
    {
        tmp = l->listparasig_;
        l->listparasig_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListProp reverseListProp(ListProp l)
{
    ListProp prev = 0;
    ListProp tmp = 0;
    while (l)
    {
        tmp = l->listprop_;
        l->listprop_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListPropDecl reverseListPropDecl(ListPropDecl l)
{
    ListPropDecl prev = 0;
    ListPropDecl tmp = 0;
    while (l)
    {
        tmp = l->listpropdecl_;
        l->listpropdecl_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListCType reverseListCType(ListCType l)
{
    ListCType prev = 0;
    ListCType tmp = 0;
    while (l)
    {
        tmp = l->listctype_;
        l->listctype_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListType reverseListType(ListType l)
{
    ListType prev = 0;
    ListType tmp = 0;
    while (l)
    {
        tmp = l->listtype_;
        l->listtype_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListStmt reverseListStmt(ListStmt l)
{
    ListStmt prev = 0;
    ListStmt tmp = 0;
    while (l)
    {
        tmp = l->liststmt_;
        l->liststmt_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}
ListExp reverseListExp(ListExp l)
{
    ListExp prev = 0;
    ListExp tmp = 0;
    while (l)
    {
        tmp = l->listexp_;
        l->listexp_ = prev;
        prev = l;
        l = tmp;
    }
    return prev;
}

/* Global variables holding parse results for entrypoints. */
Program YY_RESULT_Program_ = 0;

/* Entrypoint: parse Program from file. */
Program pProgram(FILE *inp)
{
    grammar__init_lexer(inp);
    int result = yyparse();
    if (result)
    { /* Failure */
        return 0;
    }
    else
    { /* Success */
        return YY_RESULT_Program_;
    }
}

/* Entrypoint: parse Program from string. */
Program psProgram(const char *str)
{
    YY_BUFFER_STATE buf;
    grammar__init_lexer(0);
    buf = grammar__scan_string(str);
    int result = yyparse();
    grammar__delete_buffer(buf);
    if (result)
    { /* Failure */
        return 0;
    }
    else
    { /* Success */
        return YY_RESULT_Program_;
    }
}


/* End C preamble code */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 223 "grammar.y"
{
    int    _int;
    char   _char;
    double _double;
    char*  _string;
    ListIden listiden_;
    Program program_;
    GlobDecl globdecl_;
    ListGlobDecl listglobdecl_;
    ImportDecl importdecl_;
    Pack pack_;
    ListPack listpack_;
    ClassMemDecl classmemdecl_;
    ListClassMemDecl listclassmemdecl_;
    TypeArg typearg_;
    ListTypeArg listtypearg_;
    TArgsDecl targsdecl_;
    FuncDecl funcdecl_;
    FuncBody funcbody_;
    ParaSig parasig_;
    ListParaSig listparasig_;
    ClassDecl classdecl_;
    Inhrt inhrt_;
    Prop prop_;
    PropDecl propdecl_;
    ListProp listprop_;
    ListPropDecl listpropdecl_;
    VarSig varsig_;
    VarDef vardef_;
    GVarDef gvardef_;
    CType ctype_;
    ListCType listctype_;
    Type type_;
    ListType listtype_;
    Lit lit_;
    Op op_;
    Stmt stmt_;
    Else else_;
    ListStmt liststmt_;
    StmtBlock stmtblock_;
    Exp exp_;
    ListExp listexp_;
    OptionExp optionexp_;
    LamBody lambody_;
}
/* Line 193 of yacc.c.  */
#line 499 "Parser.c"
    YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
    int first_line;
    int first_column;
    int last_line;
    int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 524 "Parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
/* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
    yytype_int16 yyss;
    YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNRULES -- Number of states.  */
#define YYNSTATES  257

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
        65,    66,    67
    };

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
    {
        0,     0,     3,     4,     6,    10,    12,    14,    16,    18,
        19,    22,    27,    29,    31,    35,    38,    40,    41,    44,
        46,    50,    55,    57,    61,    62,    66,    76,    77,    79,
        83,    84,    86,    90,    99,   108,   109,   112,   114,   118,
        120,   123,   124,   127,   131,   133,   137,   140,   142,   147,
        151,   155,   157,   161,   164,   166,   168,   172,   174,   176,
        178,   180,   182,   184,   186,   188,   190,   192,   194,   196,
        198,   200,   202,   204,   206,   208,   210,   212,   214,   216,
        218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
        238,   240,   242,   245,   248,   251,   255,   258,   261,   266,
        272,   276,   277,   279,   280,   283,   287,   291,   293,   297,
        299,   303,   305,   309,   311,   315,   317,   321,   323,   327,
        329,   333,   335,   339,   341,   345,   347,   351,   353,   357,
        359,   363,   366,   369,   372,   375,   378,   381,   383,   386,
        389,   394,   399,   401,   403,   405,   407,   411,   413,   417,
        424,   429,   436,   440,   441,   443,   447,   448,   451
    };

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
    {
        70,     0,    -1,    -1,    63,    -1,    63,    19,    69,    -1,
        72,    -1,    76,    -1,    85,    -1,    73,    -1,    -1,    72,
        71,    -1,    90,    51,    75,    28,    -1,    63,    -1,    74,
        -1,    74,    24,    75,    -1,    93,    28,    -1,    81,    -1,
        -1,    77,    76,    -1,    63,    -1,    63,    27,    96,    -1,
        48,    63,    27,    96,    -1,    78,    -1,    78,    19,    79,
        -1,    -1,    29,    79,    35,    -1,    90,    63,    80,    11,
        84,    12,    27,    96,    82,    -1,    -1,   115,    -1,    63,
        27,    96,    -1,    -1,    83,    -1,    83,    19,    84,    -1,
        90,    46,    63,    80,    86,    57,    77,    61,    -1,    90,
        53,    80,    63,    86,    57,    77,    61,    -1,    -1,    27,
        95,    -1,    63,    -1,    40,    89,    42,    -1,    87,    -1,
        87,    89,    -1,    -1,    90,    88,    -1,    69,    27,    96,
        -1,    91,    -1,    91,    33,   132,    -1,    90,    92,    -1,
        63,    -1,    63,    29,    97,    35,    -1,    40,    96,    42,
        -1,    11,    97,    12,    -1,    94,    -1,    94,    19,    95,
        -1,    94,    39,    -1,    94,    -1,    96,    -1,    96,    19,
        97,    -1,    66,    -1,    64,    -1,    65,    -1,    67,    -1,
        33,    -1,    18,    -1,    22,    -1,    15,    -1,    26,    -1,
        7,    -1,    10,    -1,    44,    -1,    59,    -1,    31,    -1,
        38,    -1,    60,    -1,     9,    -1,    58,    -1,    43,    -1,
        8,    -1,     5,    -1,    34,    -1,    29,    -1,    35,    -1,
        32,    -1,    36,    -1,    30,    -1,    37,    -1,    16,    -1,
        20,    -1,    13,    -1,    25,    -1,     6,    -1,    14,    -1,
        24,    -1,   131,    28,    -1,    92,    28,    -1,    55,    28,
        -1,    55,   131,    28,    -1,    45,    28,    -1,    47,    28,
        -1,    50,   131,   115,   113,    -1,    49,    63,    52,   131,
        115,    -1,    56,   131,   115,    -1,    -1,   115,    -1,    -1,
        114,   112,    -1,    57,   114,    61,    -1,   116,    99,   117,
        -1,   117,    -1,   117,   100,   118,    -1,   118,    -1,   118,
        101,   119,    -1,   119,    -1,   119,   102,   120,    -1,   120,
        -1,   120,   103,   121,    -1,   121,    -1,   121,   104,   122,
        -1,   122,    -1,   122,   105,   123,    -1,   123,    -1,   123,
        106,   124,    -1,   124,    -1,   124,   107,   125,    -1,   125,
        -1,   125,   108,   126,    -1,   126,    -1,   126,   109,   127,
        -1,   127,    -1,   128,   110,   127,    -1,   128,    -1,   129,
        111,   130,    -1,    17,   128,    -1,    21,   128,    -1,    16,
        128,    -1,    20,   128,    -1,     4,   128,    -1,    62,   128,
        -1,   129,    -1,   129,    17,    -1,   129,    21,    -1,   129,
        40,   131,    42,    -1,   129,    11,   132,    12,    -1,   130,
        -1,    98,    -1,    63,    -1,    54,    -1,    11,   131,    12,
        -1,   116,    -1,    63,    23,   134,    -1,    41,    11,    69,
        12,    23,   134,    -1,    11,   131,    19,    12,    -1,    11,
        131,    19,   131,   133,    12,    -1,    40,   132,    42,    -1,
        -1,   131,    -1,   131,    19,   132,    -1,    -1,    19,   132,
        -1,   131,    -1
    };

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
    {
        0,   407,   407,   408,   409,   411,   413,   414,   415,   417,
        418,   420,   422,   424,   425,   427,   428,   430,   431,   433,
        434,   435,   437,   438,   440,   441,   443,   445,   446,   448,
        450,   451,   452,   454,   455,   457,   458,   460,   462,   464,
        465,   467,   468,   470,   472,   473,   475,   477,   478,   479,
        480,   482,   483,   485,   486,   488,   489,   491,   492,   493,
        494,   496,   497,   498,   499,   500,   501,   502,   503,   504,
        505,   506,   508,   510,   512,   514,   516,   518,   519,   521,
        522,   523,   524,   526,   527,   529,   530,   532,   533,   534,
        536,   538,   540,   541,   542,   543,   544,   545,   546,   547,
        548,   550,   551,   553,   554,   556,   558,   559,   561,   562,
        564,   565,   567,   568,   570,   571,   573,   574,   576,   577,
        579,   580,   582,   583,   585,   586,   588,   589,   591,   592,
        594,   595,   596,   597,   598,   599,   600,   601,   603,   604,
        605,   606,   607,   609,   610,   611,   612,   614,   615,   616,
        617,   618,   619,   621,   622,   623,   625,   626,   628
    };
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
    {
        "$end", "error", "$undefined", "_ERROR_", "_SYMB_43", "_SYMB_29",
        "_SYMB_39", "_SYMB_18", "_SYMB_28", "_SYMB_25", "_SYMB_19", "_SYMB_6",
        "_SYMB_7", "_SYMB_37", "_SYMB_40", "_SYMB_16", "_SYMB_35", "_SYMB_41",
        "_SYMB_14", "_SYMB_0", "_SYMB_36", "_SYMB_42", "_SYMB_15", "_SYMB_45",
        "_SYMB_2", "_SYMB_38", "_SYMB_17", "_SYMB_3", "_SYMB_1", "_SYMB_4",
        "_SYMB_33", "_SYMB_22", "_SYMB_31", "_SYMB_12", "_SYMB_30", "_SYMB_5",
        "_SYMB_32", "_SYMB_34", "_SYMB_23", "_SYMB_13", "_SYMB_10", "_SYMB_46",
        "_SYMB_11", "_SYMB_27", "_SYMB_20", "_SYMB_47", "_SYMB_48", "_SYMB_49",
        "_SYMB_50", "_SYMB_51", "_SYMB_52", "_SYMB_53", "_SYMB_54", "_SYMB_55",
        "_SYMB_56", "_SYMB_57", "_SYMB_58", "_SYMB_8", "_SYMB_26", "_SYMB_21",
        "_SYMB_24", "_SYMB_9", "_SYMB_44", "_SYMB_59", "_STRING_", "_CHAR_",
        "_INTEGER_", "_DOUBLE_", "$accept", "ListIden", "Program", "GlobDecl",
        "ListGlobDecl", "ImportDecl", "Pack", "ListPack", "ClassMemDecl",
        "ListClassMemDecl", "TypeArg", "ListTypeArg", "TArgsDecl", "FuncDecl",
        "FuncBody", "ParaSig", "ListParaSig", "ClassDecl", "Inhrt", "Prop",
        "PropDecl", "ListProp", "ListPropDecl", "VarSig", "VarDef", "GVarDef",
        "CType", "ListCType", "Type", "ListType", "Lit", "Op", "Op1", "Op2",
        "Op3", "Op4", "Op5", "Op6", "Op7", "Op8", "Op9", "Op10", "Op11", "Op13",
        "Stmt", "Else", "ListStmt", "StmtBlock", "Exp1", "Exp2", "Exp3", "Exp4",
        "Exp5", "Exp6", "Exp7", "Exp8", "Exp9", "Exp10", "Exp11", "Exp12",
        "Exp13", "Exp14", "Exp15", "Exp", "ListExp", "OptionExp", "LamBody", 0
    };
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
    {
        0,    68,    69,    69,    69,    70,    71,    71,    71,    72,
        72,    73,    74,    75,    75,    76,    76,    77,    77,    78,
        78,    78,    79,    79,    80,    80,    81,    82,    82,    83,
        84,    84,    84,    85,    85,    86,    86,    87,    88,    89,
        89,    90,    90,    91,    92,    92,    93,    94,    94,    94,
        94,    95,    95,    96,    96,    97,    97,    98,    98,    98,
        98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
        99,    99,   100,   101,   102,   103,   104,   105,   105,   106,
        106,   106,   106,   107,   107,   108,   108,   109,   109,   109,
        110,   111,   112,   112,   112,   112,   112,   112,   112,   112,
        112,   113,   113,   114,   114,   115,   116,   116,   117,   117,
        118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
        123,   123,   124,   124,   125,   125,   126,   126,   127,   127,
        128,   128,   128,   128,   128,   128,   128,   128,   129,   129,
        129,   129,   129,   130,   130,   130,   130,   131,   131,   131,
        131,   131,   131,   132,   132,   132,   133,   133,   134
    };

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
    {
        0,     2,     0,     1,     3,     1,     1,     1,     1,     0,
        2,     4,     1,     1,     3,     2,     1,     0,     2,     1,
        3,     4,     1,     3,     0,     3,     9,     0,     1,     3,
        0,     1,     3,     8,     8,     0,     2,     1,     3,     1,
        2,     0,     2,     3,     1,     3,     2,     1,     4,     3,
        3,     1,     3,     2,     1,     1,     3,     1,     1,     1,
        1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
        1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
        1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
        1,     1,     2,     2,     2,     3,     2,     2,     4,     5,
        3,     0,     1,     0,     2,     3,     3,     1,     3,     1,
        3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
        3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
        3,     2,     2,     2,     2,     2,     2,     1,     2,     2,
        4,     4,     1,     1,     1,     1,     3,     1,     3,     6,
        4,     6,     3,     0,     1,     3,     0,     2,     1
    };

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
    {
        9,     0,    41,     1,    10,     8,     6,    16,     7,     2,
        0,     0,     0,     0,    24,     3,     0,    42,    44,    46,
        15,    37,    39,     0,    24,    12,    13,     0,     0,     0,
        2,     0,     0,   153,    40,    38,    35,     0,    11,     0,
        19,    22,     0,    35,     3,     4,    30,     0,     0,    47,
        54,    43,     0,     0,     0,     0,     0,     0,   153,     0,
        145,     0,   144,    58,    59,    57,    60,   143,   147,   107,
        109,   111,   113,   115,   117,   119,   121,   123,   125,   127,
        129,   137,   142,   154,    45,     0,     0,    14,     0,     0,
        0,    25,     0,     0,    31,     0,    55,     0,     0,     0,
        53,     0,   144,   135,     0,   133,   131,   134,   132,     0,
        2,   136,     0,    66,    67,    64,    62,    63,    65,    70,
        61,    71,    68,    69,     0,    72,     0,    73,     0,    74,
        0,    75,     0,    76,     0,    77,    78,     0,    79,    81,
        80,    82,     0,    83,    84,     0,    85,    86,     0,    89,
        87,    88,     0,    90,     0,   153,   138,   139,    91,     0,
        0,   153,    51,    36,    17,     0,    20,    23,    17,     0,
        30,     0,     0,    50,    49,     0,     0,   146,     0,   152,
        0,   158,   148,   106,   108,   110,   112,   114,   116,   118,
        120,   122,   124,   126,   128,     0,     0,   130,   155,     0,
        41,    21,    41,    29,    32,     0,    56,    48,   150,   156,
        0,   141,   140,    52,    33,    18,     2,    34,    27,   153,
        0,     0,   103,    26,    28,   157,   151,   149,     2,     0,
        0,     0,     0,     0,     0,   105,   144,     0,   104,     0,
        96,    97,     0,     0,    94,     0,     0,    93,    92,     0,
        101,    95,   100,     0,    98,   102,    99
    };

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
    {
        -1,    16,     1,     4,     2,     5,    26,    27,   215,   200,
        41,    42,    29,     7,   223,    94,    95,     8,    86,    22,
        17,    23,   216,    18,    19,    10,    50,   163,    96,    97,
        67,   124,   126,   128,   130,   132,   134,   137,   142,   145,
        148,   152,   154,   160,   238,   254,   228,   224,    68,    69,
        70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
        80,    81,    82,    83,    84,   220,   182
    };

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -150
static const yytype_int16 yypact[] =
    {
        -150,    26,    27,  -150,  -150,  -150,  -150,  -150,  -150,   -33,
        0,   -25,   -20,    -8,    39,    21,    10,  -150,    38,  -150,
        -150,  -150,   -25,    31,    39,  -150,    53,    54,   -39,    20,
        22,    82,     4,   181,  -150,  -150,    69,    -8,  -150,    35,
        73,    90,    75,    69,    94,  -150,    51,     4,     4,    86,
        77,  -150,   238,   181,   238,   238,   238,   238,   181,   108,
        -150,   238,   103,  -150,  -150,  -150,  -150,  -150,   250,    64,
        119,    71,    92,   131,     5,   101,    17,    36,     8,  -150,
        126,    -5,  -150,   122,  -150,     4,    85,  -150,   116,     4,
        -39,  -150,    87,   120,   127,   136,   130,   138,   109,     4,
        -150,   181,  -150,  -150,    57,  -150,  -150,  -150,  -150,   110,
        22,  -150,   181,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
        -150,  -150,  -150,  -150,   238,  -150,   238,  -150,   238,  -150,
        238,  -150,   238,  -150,   238,  -150,  -150,   238,  -150,  -150,
        -150,  -150,   238,  -150,  -150,   238,  -150,  -150,   238,  -150,
        -150,  -150,   238,  -150,   238,   181,  -150,  -150,  -150,   181,
        -3,   181,   140,  -150,  -150,     4,  -150,  -150,  -150,     4,
        51,   133,     4,  -150,  -150,   129,   149,  -150,    91,  -150,
        150,  -150,  -150,    64,   119,    71,    92,   131,     5,   101,
        17,    36,     8,  -150,  -150,   153,   124,  -150,  -150,     4,
        106,  -150,   111,  -150,  -150,     4,  -150,  -150,  -150,   152,
        146,  -150,  -150,  -150,  -150,  -150,   -29,  -150,   121,   181,
        161,   181,  -150,  -150,  -150,  -150,  -150,  -150,    25,   148,
        156,   125,   181,   166,   181,  -150,    30,   162,  -150,   163,
        -150,  -150,   137,   121,  -150,   165,   121,  -150,  -150,   181,
        121,  -150,  -150,   121,  -150,  -150,  -150
    };

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
    {
        -150,   -26,  -150,  -150,  -150,  -150,  -150,   158,   197,    32,
        -150,   113,     7,  -150,  -150,  -150,    34,  -150,   167,  -150,
        -150,   183,   206,  -150,   -19,  -150,   -82,    12,   -31,   -94,
        -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
        -150,  -150,  -150,  -150,  -150,  -150,  -150,  -149,  -150,    88,
        89,    95,    83,    84,    80,    81,    96,    72,    76,  -129,
        66,  -150,    59,   -53,   -56,  -150,     6
    };

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -25
static const yytype_int16 yytable[] =
    {
        104,    51,   109,   162,    45,   175,   155,    11,   101,    39,
        135,    11,   156,    12,   149,    47,   157,    98,    13,   158,
        14,   150,    31,   193,    40,   194,     3,    -5,    20,    52,
        15,    36,   -24,   151,    15,   159,    53,    32,    21,   136,
        30,    54,    55,    24,    48,    56,    57,   143,   176,    30,
        28,    60,   146,   112,   144,    25,   147,    -3,   166,   181,
        102,    63,    64,    65,    66,    58,    59,    49,    28,   177,
        229,    33,   230,    35,   231,   232,   178,    37,   206,    60,
        233,   234,    38,    43,   180,    44,   235,    61,   236,    63,
        64,    65,    66,    46,   250,    52,    85,   252,    88,   195,
        89,   255,    53,   208,   256,   198,   196,    54,    55,    90,
        91,    56,    57,    30,    93,    99,   100,   162,   103,   110,
        105,   106,   107,   108,   125,   209,   112,   111,   127,   129,
        138,    58,    59,   139,   201,   131,   140,   141,   203,   133,
        153,   161,   164,   165,   168,    60,   170,   169,   171,   172,
        173,   174,   179,    61,    62,    63,    64,    65,    66,   199,
        205,   177,   210,   225,   207,   211,   212,   214,   181,   221,
        52,   219,   217,   226,   218,   239,   240,    53,   222,   243,
        245,   246,    54,    55,   241,    52,    56,    57,   242,   249,
        247,   248,    53,   251,   244,    87,   253,    54,    55,     6,
        202,    56,    57,   167,   204,    34,    58,    59,     9,   237,
        92,   213,   183,   186,   188,   184,   187,   191,   189,   197,
        60,    58,    59,   185,   192,     0,     0,   227,    61,    62,
        63,    64,    65,    66,     0,    60,     0,     0,   190,     0,
        0,     0,    52,    61,    62,    63,    64,    65,    66,   101,
        0,     0,     0,     0,    54,    55,     0,   113,    56,    57,
        114,     0,     0,     0,     0,   115,     0,     0,   116,     0,
        0,     0,   117,     0,     0,     0,   118,     0,     0,     0,
        0,   119,     0,   120,     0,     0,     0,     0,   121,     0,
        0,     0,    60,     0,   122,     0,     0,     0,     0,     0,
        61,   102,    63,    64,    65,    66,     0,     0,     0,   123
    };

static const yytype_int16 yycheck[] =
    {
        53,    32,    58,    85,    30,    99,    11,    40,    11,    48,
        5,    40,    17,    46,     6,    11,    21,    48,    51,    24,
        53,    13,    15,   152,    63,   154,     0,     0,    28,     4,
        63,    24,    11,    25,    63,    40,    11,    27,    63,    34,
        19,    16,    17,    63,    40,    20,    21,    30,   101,    19,
        29,    54,    16,    23,    37,    63,    20,    27,    89,   112,
        63,    64,    65,    66,    67,    40,    41,    63,    29,    12,
        45,    33,    47,    42,    49,    50,    19,    24,   172,    54,
        55,    56,    28,    63,   110,    63,    61,    62,    63,    64,
        65,    66,    67,    11,   243,     4,    27,   246,    63,   155,
        27,   250,    11,    12,   253,   161,   159,    16,    17,    19,
        35,    20,    21,    19,    63,    29,    39,   199,    52,    11,
        54,    55,    56,    57,    60,   178,    23,    61,     9,    58,
        29,    40,    41,    32,   165,    43,    35,    36,   169,     8,
        14,    19,    57,    27,    57,    54,    19,    27,    12,    19,
        12,    42,    42,    62,    63,    64,    65,    66,    67,    19,
        27,    12,    12,   219,    35,    12,    42,    61,   221,    23,
        4,    19,    61,    12,   205,   228,    28,    11,    57,   232,
        233,   234,    16,    17,    28,     4,    20,    21,    63,    52,
        28,    28,    11,    28,    28,    37,   249,    16,    17,     2,
        168,    20,    21,    90,   170,    22,    40,    41,     2,   228,
        43,   199,   124,   130,   134,   126,   132,   145,   137,   160,
        54,    40,    41,   128,   148,    -1,    -1,   221,    62,    63,
        64,    65,    66,    67,    -1,    54,    -1,    -1,   142,    -1,
        -1,    -1,     4,    62,    63,    64,    65,    66,    67,    11,
        -1,    -1,    -1,    -1,    16,    17,    -1,     7,    20,    21,
        10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    -1,
        -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
        -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,
        -1,    -1,    54,    -1,    44,    -1,    -1,    -1,    -1,    -1,
        62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    59
    };

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
    {
        0,    70,    72,     0,    71,    73,    76,    81,    85,    90,
        93,    40,    46,    51,    53,    63,    69,    88,    91,    92,
        28,    63,    87,    89,    63,    63,    74,    75,    29,    80,
        19,    80,    27,    33,    89,    42,    80,    24,    28,    48,
        63,    78,    79,    63,    63,    69,    11,    11,    40,    63,
        94,    96,     4,    11,    16,    17,    20,    21,    40,    41,
        54,    62,    63,    64,    65,    66,    67,    98,   116,   117,
        118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
        128,   129,   130,   131,   132,    27,    86,    75,    63,    27,
        19,    35,    86,    63,    83,    84,    96,    97,    96,    29,
        39,    11,    63,   128,   131,   128,   128,   128,   128,   132,
        11,   128,    23,     7,    10,    15,    18,    22,    26,    31,
        33,    38,    44,    59,    99,    60,   100,     9,   101,    58,
        102,    43,   103,     8,   104,     5,    34,   105,    29,    32,
        35,    36,   106,    30,    37,   107,    16,    20,   108,     6,
        13,    25,   109,    14,   110,    11,    17,    21,    24,    40,
        111,    19,    94,    95,    57,    27,    96,    79,    57,    27,
        19,    12,    19,    12,    42,    97,   131,    12,    19,    42,
        69,   131,   134,   117,   118,   119,   120,   121,   122,   123,
        124,   125,   126,   127,   127,   132,   131,   130,   132,    19,
        77,    96,    77,    96,    84,    27,    97,    35,    12,   131,
        12,    12,    42,    95,    61,    76,    90,    61,    96,    19,
        133,    23,    57,    82,   115,   132,    12,   134,   114,    45,
        47,    49,    50,    55,    56,    61,    63,    92,   112,   131,
        28,    28,    63,   131,    28,   131,   131,    28,    28,    52,
        115,    28,   115,   131,   113,   115,   115
    };

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
    if (!yyvaluep)
        return;
    YYUSE (yylocationp);
# ifdef YYPRINT
    if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
    YYUSE (yyoutput);
# endif
    switch (yytype)
    {
        default:
            break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
    if (yytype < YYNTOKENS)
        YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
    else
        YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

    YY_LOCATION_PRINT (yyoutput, *yylocationp);
    YYFPRINTF (yyoutput, ": ");
    yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
    YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
    YYFPRINTF (stderr, "Stack now");
    for (; bottom <= top; ++bottom)
        YYFPRINTF (stderr, " %d", *bottom);
    YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
    int yynrhs = yyr2[yyrule];
    int yyi;
    unsigned long int yylno = yyrline[yyrule];
    YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
               yyrule - 1, yylno);
    /* The symbols being reduced.  */
    for (yyi = 0; yyi < yynrhs; yyi++)
    {
        fprintf (stderr, "   $%d = ", yyi + 1);
        yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
                         &(yyvsp[(yyi + 1) - (yynrhs)])
            , &(yylsp[(yyi + 1) - (yynrhs)])		       );
        fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
    YYUSE (yyvaluep);
    YYUSE (yylocationp);

    if (!yymsg)
        yymsg = "Deleting";
    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
    {

        default:
            break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{

    int yystate;
    int yyn;
    int yyresult;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;
    /* Look-ahead token as an internal (translated) token number.  */
    int yytoken = 0;
#if YYERROR_VERBOSE
    /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

    /* Three stacks and their tools:
       `yyss': related to states,
       `yyvs': related to semantic values,
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss = yyssa;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp;
    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

    YYSIZE_T yystacksize = YYINITDEPTH;

    /* The variables used to return semantic value and location from the
       action routines.  */
    YYSTYPE yyval;
    YYLTYPE yyloc;

    /* The number of symbols on the RHS of the reduced rule.
       Keep to zero when no symbol should be popped.  */
    int yylen = 0;

    YYDPRINTF ((stderr, "Starting parse\n"));

    yystate = 0;
    yyerrstatus = 0;
    yynerrs = 0;
    yychar = YYEMPTY;		/* Cause a token to be read.  */

    /* Initialize stack pointers.
       Waste one element of value and location stack
       so that they stay on the same level as the state stack.
       The wasted elements are never initialized.  */

    yyssp = yyss;
    yyvsp = yyvs;
    yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
    /* Initialize the default location before parsing starts.  */
    yylloc.first_line   = yylloc.last_line   = 1;
    yylloc.first_column = yylloc.last_column = 0;
#endif

    goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
    yynewstate:
    /* In all cases, when you get here, the value and location stacks
       have just been pushed.  So pushing a state here evens the stacks.  */
    yyssp++;

    yysetstate:
    *yyssp = yystate;

    if (yyss + yystacksize - 1 <= yyssp)
    {
        /* Get the current used size of the three stacks, in elements.  */
        YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
        {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
        goto yyexhaustedlab;
# else
        /* Extend the stack our own way.  */
        if (YYMAXDEPTH <= yystacksize)
            goto yyexhaustedlab;
        yystacksize *= 2;
        if (YYMAXDEPTH < yystacksize)
            yystacksize = YYMAXDEPTH;

        {
            yytype_int16 *yyss1 = yyss;
            union yyalloc *yyptr =
                (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
            if (! yyptr)
                goto yyexhaustedlab;
            YYSTACK_RELOCATE (yyss);
            YYSTACK_RELOCATE (yyvs);
            YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
            if (yyss1 != yyssa)
                YYSTACK_FREE (yyss1);
        }
# endif
#endif /* no yyoverflow */

        yyssp = yyss + yysize - 1;
        yyvsp = yyvs + yysize - 1;
        yylsp = yyls + yysize - 1;

        YYDPRINTF ((stderr, "Stack size increased to %lu\n",
            (unsigned long int) yystacksize));

        if (yyss + yystacksize - 1 <= yyssp)
            YYABORT;
    }

    YYDPRINTF ((stderr, "Entering state %d\n", yystate));

    goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
    yybackup:

    /* Do appropriate processing given the current state.  Read a
       look-ahead token if we need one and don't already have one.  */

    /* First try to decide what to do without reference to look-ahead token.  */
    yyn = yypact[yystate];
    if (yyn == YYPACT_NINF)
        goto yydefault;

    /* Not known => get a look-ahead token if don't already have one.  */

    /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
    if (yychar == YYEMPTY)
    {
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = YYLEX;
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
        if (yyn == 0 || yyn == YYTABLE_NINF)
            goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
    }

    if (yyn == YYFINAL)
        YYACCEPT;

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus)
        yyerrstatus--;

    /* Shift the look-ahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the shifted token unless it is eof.  */
    if (yychar != YYEOF)
        yychar = YYEMPTY;

    yystate = yyn;
    *++yyvsp = yylval;
    *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
    yyreduce:
    /* yyn is the number of a rule to reduce with.  */
    yylen = yyr2[yyn];

    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  Assigning to YYVAL
       unconditionally makes the parser a bit smaller, and it avoids a
       GCC warning that YYVAL may be used uninitialized.  */
    yyval = yyvsp[1-yylen];

    /* Default location.  */
    YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
    {
        case 2:
#line 407 "grammar.y"
        { (yyval.listiden_) = 0; ;}
            break;

        case 3:
#line 408 "grammar.y"
        { (yyval.listiden_) = make_ListIden((yyvsp[(1) - (1)]._string), 0); ;}
            break;

        case 4:
#line 409 "grammar.y"
        { (yyval.listiden_) = make_ListIden((yyvsp[(1) - (3)]._string), (yyvsp[(3) - (3)].listiden_)); ;}
            break;

        case 5:
#line 411 "grammar.y"
        { (yyval.program_) = make_Prog(reverseListGlobDecl((yyvsp[(1) - (1)].listglobdecl_))); YY_RESULT_Program_= (yyval.program_); ;}
            break;

        case 6:
#line 413 "grammar.y"
        { (yyval.globdecl_) = make_GMemDecl((yyvsp[(1) - (1)].classmemdecl_)); ;}
            break;

        case 7:
#line 414 "grammar.y"
        { (yyval.globdecl_) = make_GClassDecl((yyvsp[(1) - (1)].classdecl_)); ;}
            break;

        case 8:
#line 415 "grammar.y"
        { (yyval.globdecl_) = make_GImport((yyvsp[(1) - (1)].importdecl_)); ;}
            break;

        case 9:
#line 417 "grammar.y"
        { (yyval.listglobdecl_) = 0; ;}
            break;

        case 10:
#line 418 "grammar.y"
        { (yyval.listglobdecl_) = make_ListGlobDecl((yyvsp[(2) - (2)].globdecl_), (yyvsp[(1) - (2)].listglobdecl_)); ;}
            break;

        case 11:
#line 420 "grammar.y"
        { (yyval.importdecl_) = make_IImport(reverseListPropDecl((yyvsp[(1) - (4)].listpropdecl_)), (yyvsp[(3) - (4)].listpack_)); ;}
            break;

        case 12:
#line 422 "grammar.y"
        { (yyval.pack_) = make_PackName((yyvsp[(1) - (1)]._string)); ;}
            break;

        case 13:
#line 424 "grammar.y"
        { (yyval.listpack_) = make_ListPack((yyvsp[(1) - (1)].pack_), 0); ;}
            break;

        case 14:
#line 425 "grammar.y"
        { (yyval.listpack_) = make_ListPack((yyvsp[(1) - (3)].pack_), (yyvsp[(3) - (3)].listpack_)); ;}
            break;

        case 15:
#line 427 "grammar.y"
        { (yyval.classmemdecl_) = make_CVarDecl((yyvsp[(1) - (2)].gvardef_)); ;}
            break;

        case 16:
#line 428 "grammar.y"
        { (yyval.classmemdecl_) = make_CFuncDecl((yyvsp[(1) - (1)].funcdecl_)); ;}
            break;

        case 17:
#line 430 "grammar.y"
        { (yyval.listclassmemdecl_) = 0; ;}
            break;

        case 18:
#line 431 "grammar.y"
        { (yyval.listclassmemdecl_) = make_ListClassMemDecl((yyvsp[(2) - (2)].classmemdecl_), (yyvsp[(1) - (2)].listclassmemdecl_)); ;}
            break;

        case 19:
#line 433 "grammar.y"
        { (yyval.typearg_) = make_TSimp((yyvsp[(1) - (1)]._string)); ;}
            break;

        case 20:
#line 434 "grammar.y"
        { (yyval.typearg_) = make_TCov((yyvsp[(1) - (3)]._string), (yyvsp[(3) - (3)].type_)); ;}
            break;

        case 21:
#line 435 "grammar.y"
        { (yyval.typearg_) = make_TContra((yyvsp[(2) - (4)]._string), (yyvsp[(4) - (4)].type_)); ;}
            break;

        case 22:
#line 437 "grammar.y"
        { (yyval.listtypearg_) = make_ListTypeArg((yyvsp[(1) - (1)].typearg_), 0); ;}
            break;

        case 23:
#line 438 "grammar.y"
        { (yyval.listtypearg_) = make_ListTypeArg((yyvsp[(1) - (3)].typearg_), (yyvsp[(3) - (3)].listtypearg_)); ;}
            break;

        case 24:
#line 440 "grammar.y"
        { (yyval.targsdecl_) = make_TNil(); ;}
            break;

        case 25:
#line 441 "grammar.y"
        { (yyval.targsdecl_) = make_TDecl((yyvsp[(2) - (3)].listtypearg_)); ;}
            break;

        case 26:
#line 443 "grammar.y"
        { (yyval.funcdecl_) = make_FFunc(reverseListPropDecl((yyvsp[(1) - (9)].listpropdecl_)), (yyvsp[(2) - (9)]._string), (yyvsp[(3) - (9)].targsdecl_), (yyvsp[(5) - (9)].listparasig_), (yyvsp[(8) - (9)].type_), (yyvsp[(9) - (9)].funcbody_)); ;}
            break;

        case 27:
#line 445 "grammar.y"
        { (yyval.funcbody_) = make_FAbsBody(); ;}
            break;

        case 28:
#line 446 "grammar.y"
        { (yyval.funcbody_) = make_FConBody((yyvsp[(1) - (1)].stmtblock_)); ;}
            break;

        case 29:
#line 448 "grammar.y"
        { (yyval.parasig_) = make_PSig((yyvsp[(1) - (3)]._string), (yyvsp[(3) - (3)].type_)); ;}
            break;

        case 30:
#line 450 "grammar.y"
        { (yyval.listparasig_) = 0; ;}
            break;

        case 31:
#line 451 "grammar.y"
        { (yyval.listparasig_) = make_ListParaSig((yyvsp[(1) - (1)].parasig_), 0); ;}
            break;

        case 32:
#line 452 "grammar.y"
        { (yyval.listparasig_) = make_ListParaSig((yyvsp[(1) - (3)].parasig_), (yyvsp[(3) - (3)].listparasig_)); ;}
            break;

        case 33:
#line 454 "grammar.y"
        { (yyval.classdecl_) = make_CClass(reverseListPropDecl((yyvsp[(1) - (8)].listpropdecl_)), (yyvsp[(3) - (8)]._string), (yyvsp[(4) - (8)].targsdecl_), (yyvsp[(5) - (8)].inhrt_), reverseListClassMemDecl((yyvsp[(7) - (8)].listclassmemdecl_))); ;}
            break;

        case 34:
#line 455 "grammar.y"
        { (yyval.classdecl_) = make_CInter(reverseListPropDecl((yyvsp[(1) - (8)].listpropdecl_)), (yyvsp[(3) - (8)].targsdecl_), (yyvsp[(4) - (8)]._string), (yyvsp[(5) - (8)].inhrt_), reverseListClassMemDecl((yyvsp[(7) - (8)].listclassmemdecl_))); ;}
            break;

        case 35:
#line 457 "grammar.y"
        { (yyval.inhrt_) = make_INoInherit(); ;}
            break;

        case 36:
#line 458 "grammar.y"
        { (yyval.inhrt_) = make_IInherit((yyvsp[(2) - (2)].listctype_)); ;}
            break;

        case 37:
#line 460 "grammar.y"
        { (yyval.prop_) = make_PName((yyvsp[(1) - (1)]._string)); ;}
            break;

        case 38:
#line 462 "grammar.y"
        { (yyval.propdecl_) = make_PProp((yyvsp[(2) - (3)].listprop_)); ;}
            break;

        case 39:
#line 464 "grammar.y"
        { (yyval.listprop_) = make_ListProp((yyvsp[(1) - (1)].prop_), 0); ;}
            break;

        case 40:
#line 465 "grammar.y"
        { (yyval.listprop_) = make_ListProp((yyvsp[(1) - (2)].prop_), (yyvsp[(2) - (2)].listprop_)); ;}
            break;

        case 41:
#line 467 "grammar.y"
        { (yyval.listpropdecl_) = 0; ;}
            break;

        case 42:
#line 468 "grammar.y"
        { (yyval.listpropdecl_) = make_ListPropDecl((yyvsp[(2) - (2)].propdecl_), (yyvsp[(1) - (2)].listpropdecl_)); ;}
            break;

        case 43:
#line 470 "grammar.y"
        { (yyval.varsig_) = make_VSig((yyvsp[(1) - (3)].listiden_), (yyvsp[(3) - (3)].type_)); ;}
            break;

        case 44:
#line 472 "grammar.y"
        { (yyval.vardef_) = make_VNoAsn((yyvsp[(1) - (1)].varsig_)); ;}
            break;

        case 45:
#line 473 "grammar.y"
        { (yyval.vardef_) = make_VAsn((yyvsp[(1) - (3)].varsig_), (yyvsp[(3) - (3)].listexp_)); ;}
            break;

        case 46:
#line 475 "grammar.y"
        { (yyval.gvardef_) = make_MPropVar(reverseListPropDecl((yyvsp[(1) - (2)].listpropdecl_)), (yyvsp[(2) - (2)].vardef_)); ;}
            break;

        case 47:
#line 477 "grammar.y"
        { (yyval.ctype_) = make_CSimp((yyvsp[(1) - (1)]._string)); ;}
            break;

        case 48:
#line 478 "grammar.y"
        { (yyval.ctype_) = make_CGen((yyvsp[(1) - (4)]._string), (yyvsp[(3) - (4)].listtype_)); ;}
            break;

        case 49:
#line 479 "grammar.y"
        { (yyval.ctype_) = make_CList((yyvsp[(2) - (3)].type_)); ;}
            break;

        case 50:
#line 480 "grammar.y"
        { (yyval.ctype_) = make_CTup((yyvsp[(2) - (3)].listtype_)); ;}
            break;

        case 51:
#line 482 "grammar.y"
        { (yyval.listctype_) = make_ListCType((yyvsp[(1) - (1)].ctype_), 0); ;}
            break;

        case 52:
#line 483 "grammar.y"
        { (yyval.listctype_) = make_ListCType((yyvsp[(1) - (3)].ctype_), (yyvsp[(3) - (3)].listctype_)); ;}
            break;

        case 53:
#line 485 "grammar.y"
        { (yyval.type_) = make_TMaybe((yyvsp[(1) - (2)].ctype_)); ;}
            break;

        case 54:
#line 486 "grammar.y"
        { (yyval.type_) = make_TPure((yyvsp[(1) - (1)].ctype_)); ;}
            break;

        case 55:
#line 488 "grammar.y"
        { (yyval.listtype_) = make_ListType((yyvsp[(1) - (1)].type_), 0); ;}
            break;

        case 56:
#line 489 "grammar.y"
        { (yyval.listtype_) = make_ListType((yyvsp[(1) - (3)].type_), (yyvsp[(3) - (3)].listtype_)); ;}
            break;

        case 57:
#line 491 "grammar.y"
        { (yyval.lit_) = make_LInt((yyvsp[(1) - (1)]._int)); ;}
            break;

        case 58:
#line 492 "grammar.y"
        { (yyval.lit_) = make_LStr((yyvsp[(1) - (1)]._string)); ;}
            break;

        case 59:
#line 493 "grammar.y"
        { (yyval.lit_) = make_LChr((yyvsp[(1) - (1)]._char)); ;}
            break;

        case 60:
#line 494 "grammar.y"
        { (yyval.lit_) = make_LFlo((yyvsp[(1) - (1)]._double)); ;}
            break;

        case 61:
#line 496 "grammar.y"
        { (yyval.op_) = make_Asn(); ;}
            break;

        case 62:
#line 497 "grammar.y"
        { (yyval.op_) = make_AddAsn(); ;}
            break;

        case 63:
#line 498 "grammar.y"
        { (yyval.op_) = make_SubAsn(); ;}
            break;

        case 64:
#line 499 "grammar.y"
        { (yyval.op_) = make_MulAsn(); ;}
            break;

        case 65:
#line 500 "grammar.y"
        { (yyval.op_) = make_DivAsn(); ;}
            break;

        case 66:
#line 501 "grammar.y"
        { (yyval.op_) = make_ModAsn(); ;}
            break;

        case 67:
#line 502 "grammar.y"
        { (yyval.op_) = make_AndAsn(); ;}
            break;

        case 68:
#line 503 "grammar.y"
        { (yyval.op_) = make_XorAsn(); ;}
            break;

        case 69:
#line 504 "grammar.y"
        { (yyval.op_) = make_OrAsn(); ;}
            break;

        case 70:
#line 505 "grammar.y"
        { (yyval.op_) = make_ShlAsn(); ;}
            break;

        case 71:
#line 506 "grammar.y"
        { (yyval.op_) = make_ShrAsn(); ;}
            break;

        case 72:
#line 508 "grammar.y"
        { (yyval.op_) = make_LogOr(); ;}
            break;

        case 73:
#line 510 "grammar.y"
        { (yyval.op_) = make_LogAnd(); ;}
            break;

        case 74:
#line 512 "grammar.y"
        { (yyval.op_) = make_BitOr(); ;}
            break;

        case 75:
#line 514 "grammar.y"
        { (yyval.op_) = make_BitXor(); ;}
            break;

        case 76:
#line 516 "grammar.y"
        { (yyval.op_) = make_BitAnd(); ;}
            break;

        case 77:
#line 518 "grammar.y"
        { (yyval.op_) = make_NotEq(); ;}
            break;

        case 78:
#line 519 "grammar.y"
        { (yyval.op_) = make_Eq(); ;}
            break;

        case 79:
#line 521 "grammar.y"
        { (yyval.op_) = make_Lt(); ;}
            break;

        case 80:
#line 522 "grammar.y"
        { (yyval.op_) = make_Gt(); ;}
            break;

        case 81:
#line 523 "grammar.y"
        { (yyval.op_) = make_Leq(); ;}
            break;

        case 82:
#line 524 "grammar.y"
        { (yyval.op_) = make_Geq(); ;}
            break;

        case 83:
#line 526 "grammar.y"
        { (yyval.op_) = make_Shl(); ;}
            break;

        case 84:
#line 527 "grammar.y"
        { (yyval.op_) = make_Shr(); ;}
            break;

        case 85:
#line 529 "grammar.y"
        { (yyval.op_) = make_Add(); ;}
            break;

        case 86:
#line 530 "grammar.y"
        { (yyval.op_) = make_Sub(); ;}
            break;

        case 87:
#line 532 "grammar.y"
        { (yyval.op_) = make_Mul(); ;}
            break;

        case 88:
#line 533 "grammar.y"
        { (yyval.op_) = make_Div(); ;}
            break;

        case 89:
#line 534 "grammar.y"
        { (yyval.op_) = make_Mod(); ;}
            break;

        case 90:
#line 536 "grammar.y"
        { (yyval.op_) = make_Pow(); ;}
            break;

        case 91:
#line 538 "grammar.y"
        { (yyval.op_) = make_Ref(); ;}
            break;

        case 92:
#line 540 "grammar.y"
        { (yyval.stmt_) = make_SExp((yyvsp[(1) - (2)].exp_)); ;}
            break;

        case 93:
#line 541 "grammar.y"
        { (yyval.stmt_) = make_SDecl((yyvsp[(1) - (2)].vardef_)); ;}
            break;

        case 94:
#line 542 "grammar.y"
        { (yyval.stmt_) = make_SRetNil(); ;}
            break;

        case 95:
#line 543 "grammar.y"
        { (yyval.stmt_) = make_SRet((yyvsp[(2) - (3)].exp_)); ;}
            break;

        case 96:
#line 544 "grammar.y"
        { (yyval.stmt_) = make_SBreak(); ;}
            break;

        case 97:
#line 545 "grammar.y"
        { (yyval.stmt_) = make_SCont(); ;}
            break;

        case 98:
#line 546 "grammar.y"
        { (yyval.stmt_) = make_SIf((yyvsp[(2) - (4)].exp_), (yyvsp[(3) - (4)].stmtblock_), (yyvsp[(4) - (4)].else_)); ;}
            break;

        case 99:
#line 547 "grammar.y"
        { (yyval.stmt_) = make_SFor((yyvsp[(2) - (5)]._string), (yyvsp[(4) - (5)].exp_), (yyvsp[(5) - (5)].stmtblock_)); ;}
            break;

        case 100:
#line 548 "grammar.y"
        { (yyval.stmt_) = make_SWhile((yyvsp[(2) - (3)].exp_), (yyvsp[(3) - (3)].stmtblock_)); ;}
            break;

        case 101:
#line 550 "grammar.y"
        { (yyval.else_) = make_EEmpty(); ;}
            break;

        case 102:
#line 551 "grammar.y"
        { (yyval.else_) = make_EElse((yyvsp[(1) - (1)].stmtblock_)); ;}
            break;

        case 103:
#line 553 "grammar.y"
        { (yyval.liststmt_) = 0; ;}
            break;

        case 104:
#line 554 "grammar.y"
        { (yyval.liststmt_) = make_ListStmt((yyvsp[(2) - (2)].stmt_), (yyvsp[(1) - (2)].liststmt_)); ;}
            break;

        case 105:
#line 556 "grammar.y"
        { (yyval.stmtblock_) = make_SStmt(reverseListStmt((yyvsp[(2) - (3)].liststmt_))); ;}
            break;

        case 106:
#line 558 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 107:
#line 559 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 108:
#line 561 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 109:
#line 562 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 110:
#line 564 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 111:
#line 565 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 112:
#line 567 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 113:
#line 568 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 114:
#line 570 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 115:
#line 571 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 116:
#line 573 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 117:
#line 574 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 118:
#line 576 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 119:
#line 577 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 120:
#line 579 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 121:
#line 580 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 122:
#line 582 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 123:
#line 583 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 124:
#line 585 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 125:
#line 586 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 126:
#line 588 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 127:
#line 589 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 128:
#line 591 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 129:
#line 592 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 130:
#line 594 "grammar.y"
        { (yyval.exp_) = make_opf((yyvsp[(1) - (3)].exp_), (yyvsp[(2) - (3)].op_), (yyvsp[(3) - (3)].exp_)); ;}
            break;

        case 131:
#line 595 "grammar.y"
        { (yyval.exp_) = make_PreInc((yyvsp[(2) - (2)].exp_)); ;}
            break;

        case 132:
#line 596 "grammar.y"
        { (yyval.exp_) = make_PreDec((yyvsp[(2) - (2)].exp_)); ;}
            break;

        case 133:
#line 597 "grammar.y"
        { (yyval.exp_) = make_Pos((yyvsp[(2) - (2)].exp_)); ;}
            break;

        case 134:
#line 598 "grammar.y"
        { (yyval.exp_) = make_Neg((yyvsp[(2) - (2)].exp_)); ;}
            break;

        case 135:
#line 599 "grammar.y"
        { (yyval.exp_) = make_LogNot((yyvsp[(2) - (2)].exp_)); ;}
            break;

        case 136:
#line 600 "grammar.y"
        { (yyval.exp_) = make_BitNot((yyvsp[(2) - (2)].exp_)); ;}
            break;

        case 137:
#line 601 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 138:
#line 603 "grammar.y"
        { (yyval.exp_) = make_SufInc((yyvsp[(1) - (2)].exp_)); ;}
            break;

        case 139:
#line 604 "grammar.y"
        { (yyval.exp_) = make_SufDec((yyvsp[(1) - (2)].exp_)); ;}
            break;

        case 140:
#line 605 "grammar.y"
        { (yyval.exp_) = make_ArrIdx((yyvsp[(1) - (4)].exp_), (yyvsp[(3) - (4)].exp_)); ;}
            break;

        case 141:
#line 606 "grammar.y"
        { (yyval.exp_) = make_FuncCall((yyvsp[(1) - (4)].exp_), (yyvsp[(3) - (4)].listexp_)); ;}
            break;

        case 142:
#line 607 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 143:
#line 609 "grammar.y"
        { (yyval.exp_) = make_ELit((yyvsp[(1) - (1)].lit_)); ;}
            break;

        case 144:
#line 610 "grammar.y"
        { (yyval.exp_) = make_EIde((yyvsp[(1) - (1)]._string)); ;}
            break;

        case 145:
#line 611 "grammar.y"
        { (yyval.exp_) = make_ENil(); ;}
            break;

        case 146:
#line 612 "grammar.y"
        { (yyval.exp_) = (yyvsp[(2) - (3)].exp_); ;}
            break;

        case 147:
#line 614 "grammar.y"
        { (yyval.exp_) = (yyvsp[(1) - (1)].exp_); ;}
            break;

        case 148:
#line 615 "grammar.y"
        { (yyval.exp_) = make_ESing((yyvsp[(1) - (3)]._string), (yyvsp[(3) - (3)].lambody_)); ;}
            break;

        case 149:
#line 616 "grammar.y"
        { (yyval.exp_) = make_EMore((yyvsp[(3) - (6)].listiden_), (yyvsp[(6) - (6)].lambody_)); ;}
            break;

        case 150:
#line 617 "grammar.y"
        { (yyval.exp_) = make_ETupOne((yyvsp[(2) - (4)].exp_)); ;}
            break;

        case 151:
#line 618 "grammar.y"
        { (yyval.exp_) = make_ETupTwo((yyvsp[(2) - (6)].exp_), (yyvsp[(4) - (6)].exp_), (yyvsp[(5) - (6)].optionexp_)); ;}
            break;

        case 152:
#line 619 "grammar.y"
        { (yyval.exp_) = make_EList((yyvsp[(2) - (3)].listexp_)); ;}
            break;

        case 153:
#line 621 "grammar.y"
        { (yyval.listexp_) = 0; ;}
            break;

        case 154:
#line 622 "grammar.y"
        { (yyval.listexp_) = make_ListExp((yyvsp[(1) - (1)].exp_), 0); ;}
            break;

        case 155:
#line 623 "grammar.y"
        { (yyval.listexp_) = make_ListExp((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].listexp_)); ;}
            break;

        case 156:
#line 625 "grammar.y"
        { (yyval.optionexp_) = make_ONil(); ;}
            break;

        case 157:
#line 626 "grammar.y"
        { (yyval.optionexp_) = make_OExp((yyvsp[(2) - (2)].listexp_)); ;}
            break;

        case 158:
#line 628 "grammar.y"
        { (yyval.lambody_) = make_LExp((yyvsp[(1) - (1)].exp_)); ;}
            break;


/* Line 1267 of yacc.c.  */
#line 2796 "Parser.c"
        default: break;
    }
    YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

    YYPOPSTACK (yylen);
    yylen = 0;
    YY_STACK_PRINT (yyss, yyssp);

    *++yyvsp = yyval;
    *++yylsp = yyloc;

    /* Now `shift' the result of the reduction.  Determine what state
       that goes to, based on the state we popped back to and the rule
       number reduced by.  */

    yyn = yyr1[yyn];

    yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
    if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
        yystate = yytable[yystate];
    else
        yystate = yydefgoto[yyn - YYNTOKENS];

    goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
    yyerrlab:
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus)
    {
        ++yynerrs;
#if ! YYERROR_VERBOSE
        yyerror (YY_("syntax error"));
#else
        {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

    yyerror_range[0] = yylloc;

    if (yyerrstatus == 3)
    {
        /* If just tried and failed to reuse look-ahead token after an
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
                        yytoken, &yylval, &yylloc);
            yychar = YYEMPTY;
        }
    }

    /* Else will try to reuse look-ahead token after shifting the error
       token.  */
    goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
    yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (/*CONSTCOND*/ 0)
        goto yyerrorlab;

    yyerror_range[0] = yylsp[1-yylen];
    /* Do not reclaim the symbols of the rule which action triggered
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
    yyerrstatus = 3;	/* Each real token shifted decrements this.  */

    for (;;)
    {
        yyn = yypact[yystate];
        if (yyn != YYPACT_NINF)
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

        yyerror_range[0] = *yylsp;
        yydestruct ("Error: popping",
                    yystos[yystate], yyvsp, yylsp);
        YYPOPSTACK (1);
        yystate = *yyssp;
        YY_STACK_PRINT (yyss, yyssp);
    }

    if (yyn == YYFINAL)
        YYACCEPT;

    *++yyvsp = yylval;

    yyerror_range[1] = yylloc;
    /* Using YYLLOC is tempting, but would change the location of
       the look-ahead.  YYLOC is available though.  */
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
    *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
    yyexhaustedlab:
    yyerror (YY_("memory exhausted"));
    yyresult = 2;
    /* Fall through.  */
#endif

    yyreturn:
    if (yychar != YYEOF && yychar != YYEMPTY)
        yydestruct ("Cleanup: discarding lookahead",
                    yytoken, &yylval, &yylloc);
    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    YYPOPSTACK (yylen);
    YY_STACK_PRINT (yyss, yyssp);
    while (yyssp != yyss)
    {
        yydestruct ("Cleanup: popping",
                    yystos[*yyssp], yyvsp, yylsp);
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
    /* Make sure YYID is used.  */
    return YYID (yyresult);
}


#line 631 "grammar.y"


void yyerror(const char *str)
{
    extern char *grammar_text;
    fprintf(stderr,"error: %d,%d: %s at %s\n",
            grammar_lloc.first_line, grammar_lloc.first_column, str, grammar_text);
}


