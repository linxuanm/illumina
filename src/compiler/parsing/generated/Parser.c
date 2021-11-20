/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         grammar_parse
#define yylex           grammar_lex
#define yyerror         grammar_error
#define yydebug         grammar_debug
#define yynerrs         grammar_nerrs

/* First part of user prologue.  */
#line 20 "grammar.y"

/* Begin C preamble code */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.h"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE grammar__scan_string(const char *str, yyscan_t scanner);
extern void grammar__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void grammar_lex_destroy(yyscan_t scanner);
extern char* grammar_get_text(yyscan_t scanner);

extern yyscan_t grammar__initialize_lexer(FILE * inp);

/* List reversal functions. */
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

/* End C preamble code */

#line 262 "Parser.c"

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

#include "Bison.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__BANG = 4,                      /* _BANG  */
  YYSYMBOL__BANGEQ = 5,                    /* _BANGEQ  */
  YYSYMBOL__PERCENT = 6,                   /* _PERCENT  */
  YYSYMBOL__PERCENTEQ = 7,                 /* _PERCENTEQ  */
  YYSYMBOL__AMP = 8,                       /* _AMP  */
  YYSYMBOL__DAMP = 9,                      /* _DAMP  */
  YYSYMBOL__AMPEQ = 10,                    /* _AMPEQ  */
  YYSYMBOL__LPAREN = 11,                   /* _LPAREN  */
  YYSYMBOL__RPAREN = 12,                   /* _RPAREN  */
  YYSYMBOL__STAR = 13,                     /* _STAR  */
  YYSYMBOL__DSTAR = 14,                    /* _DSTAR  */
  YYSYMBOL__STAREQ = 15,                   /* _STAREQ  */
  YYSYMBOL__PLUS = 16,                     /* _PLUS  */
  YYSYMBOL__DPLUS = 17,                    /* _DPLUS  */
  YYSYMBOL__PLUSEQ = 18,                   /* _PLUSEQ  */
  YYSYMBOL__COMMA = 19,                    /* _COMMA  */
  YYSYMBOL__MINUS = 20,                    /* _MINUS  */
  YYSYMBOL__DMINUS = 21,                   /* _DMINUS  */
  YYSYMBOL__MINUSEQ = 22,                  /* _MINUSEQ  */
  YYSYMBOL__RARROW = 23,                   /* _RARROW  */
  YYSYMBOL__DOT = 24,                      /* _DOT  */
  YYSYMBOL__SLASH = 25,                    /* _SLASH  */
  YYSYMBOL__SLASHEQ = 26,                  /* _SLASHEQ  */
  YYSYMBOL__COLON = 27,                    /* _COLON  */
  YYSYMBOL__SEMI = 28,                     /* _SEMI  */
  YYSYMBOL__LT = 29,                       /* _LT  */
  YYSYMBOL__DLT = 30,                      /* _DLT  */
  YYSYMBOL__DLTEQ = 31,                    /* _DLTEQ  */
  YYSYMBOL__LDARROW = 32,                  /* _LDARROW  */
  YYSYMBOL__EQ = 33,                       /* _EQ  */
  YYSYMBOL__DEQ = 34,                      /* _DEQ  */
  YYSYMBOL__GT = 35,                       /* _GT  */
  YYSYMBOL__GTEQ = 36,                     /* _GTEQ  */
  YYSYMBOL__DGT = 37,                      /* _DGT  */
  YYSYMBOL__DGTEQ = 38,                    /* _DGTEQ  */
  YYSYMBOL__QUESTION = 39,                 /* _QUESTION  */
  YYSYMBOL__AT = 40,                       /* _AT  */
  YYSYMBOL__LBRACK = 41,                   /* _LBRACK  */
  YYSYMBOL__BACKSLASH = 42,                /* _BACKSLASH  */
  YYSYMBOL__RBRACK = 43,                   /* _RBRACK  */
  YYSYMBOL__CARET = 44,                    /* _CARET  */
  YYSYMBOL__CARETEQ = 45,                  /* _CARETEQ  */
  YYSYMBOL__KW_break = 46,                 /* _KW_break  */
  YYSYMBOL__KW_class = 47,                 /* _KW_class  */
  YYSYMBOL__KW_continue = 48,              /* _KW_continue  */
  YYSYMBOL__KW_contra = 49,                /* _KW_contra  */
  YYSYMBOL__KW_else = 50,                  /* _KW_else  */
  YYSYMBOL__KW_for = 51,                   /* _KW_for  */
  YYSYMBOL__KW_if = 52,                    /* _KW_if  */
  YYSYMBOL__KW_import = 53,                /* _KW_import  */
  YYSYMBOL__KW_in = 54,                    /* _KW_in  */
  YYSYMBOL__KW_interface = 55,             /* _KW_interface  */
  YYSYMBOL__KW_null = 56,                  /* _KW_null  */
  YYSYMBOL__KW_return = 57,                /* _KW_return  */
  YYSYMBOL__KW_while = 58,                 /* _KW_while  */
  YYSYMBOL__LBRACE = 59,                   /* _LBRACE  */
  YYSYMBOL__BAR = 60,                      /* _BAR  */
  YYSYMBOL__BAREQ = 61,                    /* _BAREQ  */
  YYSYMBOL__DBAR = 62,                     /* _DBAR  */
  YYSYMBOL__RBRACE = 63,                   /* _RBRACE  */
  YYSYMBOL__TILDE = 64,                    /* _TILDE  */
  YYSYMBOL_T_Iden = 65,                    /* T_Iden  */
  YYSYMBOL__STRING_ = 66,                  /* _STRING_  */
  YYSYMBOL__CHAR_ = 67,                    /* _CHAR_  */
  YYSYMBOL__INTEGER_ = 68,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 69,                  /* _DOUBLE_  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_ListIden = 71,                  /* ListIden  */
  YYSYMBOL_Program = 72,                   /* Program  */
  YYSYMBOL_GlobDecl = 73,                  /* GlobDecl  */
  YYSYMBOL_ListGlobDecl = 74,              /* ListGlobDecl  */
  YYSYMBOL_ImportDecl = 75,                /* ImportDecl  */
  YYSYMBOL_Pack = 76,                      /* Pack  */
  YYSYMBOL_ListPack = 77,                  /* ListPack  */
  YYSYMBOL_ClassMemDecl = 78,              /* ClassMemDecl  */
  YYSYMBOL_ListClassMemDecl = 79,          /* ListClassMemDecl  */
  YYSYMBOL_TypeArg = 80,                   /* TypeArg  */
  YYSYMBOL_ListTypeArg = 81,               /* ListTypeArg  */
  YYSYMBOL_TArgsDecl = 82,                 /* TArgsDecl  */
  YYSYMBOL_FuncDecl = 83,                  /* FuncDecl  */
  YYSYMBOL_FuncBody = 84,                  /* FuncBody  */
  YYSYMBOL_ParaSig = 85,                   /* ParaSig  */
  YYSYMBOL_ListParaSig = 86,               /* ListParaSig  */
  YYSYMBOL_ClassDecl = 87,                 /* ClassDecl  */
  YYSYMBOL_Inhrt = 88,                     /* Inhrt  */
  YYSYMBOL_Prop = 89,                      /* Prop  */
  YYSYMBOL_PropDecl = 90,                  /* PropDecl  */
  YYSYMBOL_ListProp = 91,                  /* ListProp  */
  YYSYMBOL_ListPropDecl = 92,              /* ListPropDecl  */
  YYSYMBOL_VarSig = 93,                    /* VarSig  */
  YYSYMBOL_VarDef = 94,                    /* VarDef  */
  YYSYMBOL_GVarDef = 95,                   /* GVarDef  */
  YYSYMBOL_CType = 96,                     /* CType  */
  YYSYMBOL_ListCType = 97,                 /* ListCType  */
  YYSYMBOL_Type = 98,                      /* Type  */
  YYSYMBOL_ListType = 99,                  /* ListType  */
  YYSYMBOL_Lit = 100,                      /* Lit  */
  YYSYMBOL_Op = 101,                       /* Op  */
  YYSYMBOL_Op1 = 102,                      /* Op1  */
  YYSYMBOL_Op2 = 103,                      /* Op2  */
  YYSYMBOL_Op3 = 104,                      /* Op3  */
  YYSYMBOL_Op4 = 105,                      /* Op4  */
  YYSYMBOL_Op5 = 106,                      /* Op5  */
  YYSYMBOL_Op6 = 107,                      /* Op6  */
  YYSYMBOL_Op7 = 108,                      /* Op7  */
  YYSYMBOL_Op8 = 109,                      /* Op8  */
  YYSYMBOL_Op9 = 110,                      /* Op9  */
  YYSYMBOL_Op10 = 111,                     /* Op10  */
  YYSYMBOL_Op11 = 112,                     /* Op11  */
  YYSYMBOL_Op13 = 113,                     /* Op13  */
  YYSYMBOL_Stmt = 114,                     /* Stmt  */
  YYSYMBOL_Else = 115,                     /* Else  */
  YYSYMBOL_AliasIf = 116,                  /* AliasIf  */
  YYSYMBOL_ListStmt = 117,                 /* ListStmt  */
  YYSYMBOL_StmtBlock = 118,                /* StmtBlock  */
  YYSYMBOL_Exp1 = 119,                     /* Exp1  */
  YYSYMBOL_Exp2 = 120,                     /* Exp2  */
  YYSYMBOL_Exp3 = 121,                     /* Exp3  */
  YYSYMBOL_Exp4 = 122,                     /* Exp4  */
  YYSYMBOL_Exp5 = 123,                     /* Exp5  */
  YYSYMBOL_Exp6 = 124,                     /* Exp6  */
  YYSYMBOL_Exp7 = 125,                     /* Exp7  */
  YYSYMBOL_Exp8 = 126,                     /* Exp8  */
  YYSYMBOL_Exp9 = 127,                     /* Exp9  */
  YYSYMBOL_Exp10 = 128,                    /* Exp10  */
  YYSYMBOL_Exp11 = 129,                    /* Exp11  */
  YYSYMBOL_Exp12 = 130,                    /* Exp12  */
  YYSYMBOL_Exp13 = 131,                    /* Exp13  */
  YYSYMBOL_Exp14 = 132,                    /* Exp14  */
  YYSYMBOL_TArgsPass = 133,                /* TArgsPass  */
  YYSYMBOL_Exp15 = 134,                    /* Exp15  */
  YYSYMBOL_Exp = 135,                      /* Exp  */
  YYSYMBOL_ListExp = 136,                  /* ListExp  */
  YYSYMBOL_OptionExp = 137,                /* OptionExp  */
  YYSYMBOL_LamBody = 138                   /* LamBody  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 255 "grammar.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, grammar_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 446 "Parser.c"


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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   408,   408,   409,   410,   412,   414,   415,   416,   418,
     419,   421,   423,   425,   426,   428,   429,   431,   432,   434,
     435,   436,   438,   439,   441,   442,   444,   446,   447,   449,
     451,   452,   453,   455,   456,   458,   459,   461,   463,   465,
     466,   468,   469,   471,   473,   474,   476,   478,   479,   480,
     481,   483,   484,   486,   487,   489,   490,   492,   493,   494,
     495,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   509,   511,   513,   515,   517,   519,   520,   522,
     523,   524,   525,   527,   528,   530,   531,   533,   534,   535,
     537,   539,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   551,   552,   553,   555,   557,   558,   560,   562,   563,
     565,   566,   568,   569,   571,   572,   574,   575,   577,   578,
     580,   581,   583,   584,   586,   587,   589,   590,   592,   593,
     595,   596,   598,   599,   600,   601,   602,   603,   604,   605,
     607,   608,   609,   610,   611,   613,   614,   616,   617,   618,
     619,   621,   622,   623,   624,   625,   626,   628,   629,   630,
     632,   633,   635,   636
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_BANG",
  "_BANGEQ", "_PERCENT", "_PERCENTEQ", "_AMP", "_DAMP", "_AMPEQ",
  "_LPAREN", "_RPAREN", "_STAR", "_DSTAR", "_STAREQ", "_PLUS", "_DPLUS",
  "_PLUSEQ", "_COMMA", "_MINUS", "_DMINUS", "_MINUSEQ", "_RARROW", "_DOT",
  "_SLASH", "_SLASHEQ", "_COLON", "_SEMI", "_LT", "_DLT", "_DLTEQ",
  "_LDARROW", "_EQ", "_DEQ", "_GT", "_GTEQ", "_DGT", "_DGTEQ", "_QUESTION",
  "_AT", "_LBRACK", "_BACKSLASH", "_RBRACK", "_CARET", "_CARETEQ",
  "_KW_break", "_KW_class", "_KW_continue", "_KW_contra", "_KW_else",
  "_KW_for", "_KW_if", "_KW_import", "_KW_in", "_KW_interface", "_KW_null",
  "_KW_return", "_KW_while", "_LBRACE", "_BAR", "_BAREQ", "_DBAR",
  "_RBRACE", "_TILDE", "T_Iden", "_STRING_", "_CHAR_", "_INTEGER_",
  "_DOUBLE_", "$accept", "ListIden", "Program", "GlobDecl", "ListGlobDecl",
  "ImportDecl", "Pack", "ListPack", "ClassMemDecl", "ListClassMemDecl",
  "TypeArg", "ListTypeArg", "TArgsDecl", "FuncDecl", "FuncBody", "ParaSig",
  "ListParaSig", "ClassDecl", "Inhrt", "Prop", "PropDecl", "ListProp",
  "ListPropDecl", "VarSig", "VarDef", "GVarDef", "CType", "ListCType",
  "Type", "ListType", "Lit", "Op", "Op1", "Op2", "Op3", "Op4", "Op5",
  "Op6", "Op7", "Op8", "Op9", "Op10", "Op11", "Op13", "Stmt", "Else",
  "AliasIf", "ListStmt", "StmtBlock", "Exp1", "Exp2", "Exp3", "Exp4",
  "Exp5", "Exp6", "Exp7", "Exp8", "Exp9", "Exp10", "Exp11", "Exp12",
  "Exp13", "Exp14", "TArgsPass", "Exp15", "Exp", "ListExp", "OptionExp",
  "LamBody", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-203)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-146)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -203,    12,    29,  -203,  -203,  -203,  -203,  -203,  -203,    69,
      14,   -22,   -11,     3,    40,    67,    47,  -203,    52,  -203,
    -203,  -203,   -22,    51,    40,  -203,    73,    70,   -39,    34,
      35,    90,    -5,   230,  -203,  -203,    76,     3,  -203,    39,
      82,    94,    79,    76,    96,  -203,    54,    -5,    -5,    88,
      84,  -203,   212,   230,   212,   212,   212,   212,   230,   110,
    -203,   212,   102,  -203,  -203,  -203,  -203,  -203,     1,    74,
     128,    80,    95,   135,     4,    20,   -12,    -3,     8,  -203,
     132,   124,  -203,   130,  -203,    -5,    92,  -203,   125,    -5,
     -39,  -203,   104,   126,   142,   154,   158,   161,   111,    -5,
    -203,   230,  -203,  -203,    18,  -203,  -203,  -203,  -203,   141,
      35,  -203,    91,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,   212,  -203,   212,  -203,   212,  -203,
     212,  -203,   212,  -203,   212,  -203,  -203,   212,  -203,  -203,
    -203,  -203,   212,  -203,  -203,   212,  -203,  -203,   212,  -203,
    -203,  -203,   212,  -203,   212,  -203,  -203,  -203,    -5,   230,
      62,   174,   230,   167,  -203,  -203,    -5,  -203,  -203,  -203,
      -5,    54,   162,    -5,  -203,  -203,   155,   182,  -203,   171,
    -203,   183,  -203,  -203,  -203,  -203,    74,   128,    80,    95,
     135,     4,    20,   -12,    -3,     8,  -203,  -203,   156,   160,
    -203,   230,  -203,    -5,   134,  -203,   136,  -203,  -203,    -5,
    -203,  -203,  -203,   179,   178,    24,  -203,  -203,   192,  -203,
    -203,  -203,   -34,  -203,   148,   230,   196,    91,   186,   187,
     146,   230,   189,   230,  -203,    44,   190,  -203,  -203,   191,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,   166,   148,
    -203,   193,   148,  -203,  -203,   230,   172,  -203,  -203,   148,
      25,  -203,  -203,  -203,  -203
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     0,    41,     1,    10,     8,     6,    16,     7,     2,
       0,     0,     0,     0,    24,     3,     0,    42,    44,    46,
      15,    37,    39,     0,    24,    12,    13,     0,     0,     0,
       2,     0,     0,   157,    40,    38,    35,     0,    11,     0,
      19,    22,     0,    35,     3,     4,    30,     0,     0,    47,
      54,    43,     0,     0,     0,     0,     0,     0,   157,     0,
     149,     0,   148,    58,    59,    57,    60,   147,   151,   109,
     111,   113,   115,   117,   119,   121,   123,   125,   127,   129,
     131,   139,   144,   158,    45,     0,     0,    14,     0,     0,
       0,    25,     0,     0,    31,     0,    55,     0,     0,     0,
      53,     0,   148,   137,     0,   135,   133,   136,   134,     0,
       2,   138,     0,    66,    67,    64,    62,    63,    65,    70,
      61,    71,    68,    69,     0,    72,     0,    73,     0,    74,
       0,    75,     0,    76,     0,    77,    78,     0,    79,    81,
      80,    82,     0,    83,    84,     0,    85,    86,     0,    89,
      87,    88,     0,    90,     0,   140,   141,    91,     0,     0,
       0,     0,   157,    51,    36,    17,     0,    20,    23,    17,
       0,    30,     0,     0,    50,    49,     0,     0,   150,     0,
     156,     0,   105,   163,   162,   152,   108,   110,   112,   114,
     116,   118,   120,   122,   124,   126,   128,   130,     0,     0,
     132,   157,   159,     0,    41,    21,    41,    29,    32,     0,
      56,    48,   154,   160,     0,     2,   146,   142,     0,    52,
      33,    18,     2,    34,    27,   157,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   148,     0,   106,    98,     0,
     143,    26,    28,   161,   155,   153,    96,    97,     0,     0,
      94,     0,     0,    93,    92,     0,   101,    95,   100,     0,
       0,   104,    99,   103,   102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,   -27,  -203,  -203,  -203,  -203,  -203,   188,   222,    57,
    -203,   152,     0,  -203,  -203,  -203,    72,  -203,   201,  -203,
    -203,   226,   247,  -203,    37,  -203,   -83,    56,   -28,   -94,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,     2,  -203,  -202,  -203,
     137,   138,   139,   133,   143,   131,   123,   127,   121,   122,
    -101,   115,  -203,  -203,   113,   -53,   -57,  -203,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    16,     1,     4,     2,     5,    26,    27,   221,   204,
      41,    42,    29,     7,   241,    94,    95,     8,    86,    22,
      17,    23,   222,    18,    19,    10,    50,   164,    96,    97,
      67,   124,   126,   128,   130,   132,   134,   137,   142,   145,
     148,   152,   154,   160,   237,   261,   238,   215,   183,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,   161,    82,    83,    84,   226,   185
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     104,   109,   163,    45,    51,   176,    47,    11,   113,   135,
      39,   114,     3,   146,   149,    31,   115,   147,   143,   116,
      98,   150,   242,   117,    36,   144,    40,   118,    52,    -5,
     178,    15,   119,   151,   120,    53,    48,   179,   136,   121,
      54,    55,    20,    21,    56,    57,   122,   256,   177,   138,
     258,   196,   139,   197,    24,   140,   141,   262,   264,   184,
      49,   167,   123,    30,   198,    58,    59,   112,    25,    28,
     228,    -3,   229,   101,    32,   230,   231,   231,   -24,   210,
      60,   232,   233,   181,   182,    33,    30,   234,    61,   235,
      63,    64,    65,    66,    35,    52,    28,    37,    38,    43,
      44,    46,    53,    85,    88,   202,   199,    54,    55,    89,
      11,    56,    57,    90,    91,    30,    12,    99,    60,    93,
     163,   110,    13,   100,    14,   112,   213,   102,    63,    64,
      65,    66,    58,    59,    15,  -145,   125,   127,   205,   131,
     129,   155,   207,   133,   218,   156,   153,    60,   157,   162,
     182,   165,   166,   170,   175,    61,    62,    63,    64,    65,
      66,   171,   239,   169,   158,   159,   172,   103,   243,   105,
     106,   107,   108,   174,   184,    52,   111,   173,   249,   251,
     252,   224,    53,   212,   180,   201,   203,    54,    55,   209,
     211,    56,    57,    52,   178,   214,   216,   220,   225,   223,
      53,   227,   259,   217,   240,    54,    55,   182,   244,    56,
      57,   248,    58,    59,   246,   247,    52,   250,   253,   254,
     255,   257,   260,   101,     6,    87,   206,    60,    54,    55,
      58,    59,    56,    57,    52,    61,    62,    63,    64,    65,
      66,    53,   168,   208,    92,    60,    54,    55,    34,     9,
      56,    57,   236,    61,    62,    63,    64,    65,    66,   219,
     192,   186,   263,   189,   187,   191,   194,   188,    60,   193,
     195,    58,    59,   200,     0,   190,    61,   102,    63,    64,
      65,    66,   245,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66
};

static const yytype_int16 yycheck[] =
{
      53,    58,    85,    30,    32,    99,    11,    41,     7,     5,
      49,    10,     0,    16,     6,    15,    15,    20,    30,    18,
      48,    13,   224,    22,    24,    37,    65,    26,     4,     0,
      12,    65,    31,    25,    33,    11,    41,    19,    34,    38,
      16,    17,    28,    65,    20,    21,    45,   249,   101,    29,
     252,   152,    32,   154,    65,    35,    36,   259,   260,   112,
      65,    89,    61,    19,   158,    41,    42,    23,    65,    29,
      46,    27,    48,    11,    27,    51,    52,    52,    11,   173,
      56,    57,    58,   110,    59,    33,    19,    63,    64,    65,
      66,    67,    68,    69,    43,     4,    29,    24,    28,    65,
      65,    11,    11,    27,    65,   162,   159,    16,    17,    27,
      41,    20,    21,    19,    35,    19,    47,    29,    56,    65,
     203,    11,    53,    39,    55,    23,   179,    65,    66,    67,
      68,    69,    41,    42,    65,    11,    62,     9,   166,    44,
      60,    17,   170,     8,   201,    21,    14,    56,    24,    19,
      59,    59,    27,    27,    43,    64,    65,    66,    67,    68,
      69,    19,   215,    59,    40,    41,    12,    52,   225,    54,
      55,    56,    57,    12,   227,     4,    61,    19,   231,   232,
     233,   209,    11,    12,    43,    11,    19,    16,    17,    27,
      35,    20,    21,     4,    12,    12,    40,    63,    19,    63,
      11,    23,   255,    43,    12,    16,    17,    59,    12,    20,
      21,    65,    41,    42,    28,    28,     4,    28,    28,    28,
      54,    28,    50,    11,     2,    37,   169,    56,    16,    17,
      41,    42,    20,    21,     4,    64,    65,    66,    67,    68,
      69,    11,    90,   171,    43,    56,    16,    17,    22,     2,
      20,    21,   215,    64,    65,    66,    67,    68,    69,   203,
     137,   124,   260,   130,   126,   134,   145,   128,    56,   142,
     148,    41,    42,   160,    -1,   132,    64,    65,    66,    67,
      68,    69,   227,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    72,    74,     0,    73,    75,    78,    83,    87,    92,
      95,    41,    47,    53,    55,    65,    71,    90,    93,    94,
      28,    65,    89,    91,    65,    65,    76,    77,    29,    82,
      19,    82,    27,    33,    91,    43,    82,    24,    28,    49,
      65,    80,    81,    65,    65,    71,    11,    11,    41,    65,
      96,    98,     4,    11,    16,    17,    20,    21,    41,    42,
      56,    64,    65,    66,    67,    68,    69,   100,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   134,   135,   136,    27,    88,    77,    65,    27,
      19,    35,    88,    65,    85,    86,    98,    99,    98,    29,
      39,    11,    65,   131,   135,   131,   131,   131,   131,   136,
      11,   131,    23,     7,    10,    15,    18,    22,    26,    31,
      33,    38,    45,    61,   101,    62,   102,     9,   103,    60,
     104,    44,   105,     8,   106,     5,    34,   107,    29,    32,
      35,    36,   108,    30,    37,   109,    16,    20,   110,     6,
      13,    25,   111,    14,   112,    17,    21,    24,    40,    41,
     113,   133,    19,    96,    97,    59,    27,    98,    81,    59,
      27,    19,    12,    19,    12,    43,    99,   135,    12,    19,
      43,    71,    59,   118,   135,   138,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   130,    99,   135,
     134,    11,   136,    19,    79,    98,    79,    98,    86,    27,
      99,    35,    12,   135,    12,   117,    40,    43,   136,    97,
      63,    78,    92,    63,    98,    19,   137,    23,    46,    48,
      51,    52,    57,    58,    63,    65,    94,   114,   116,   135,
      12,    84,   118,   136,    12,   138,    28,    28,    65,   135,
      28,   135,   135,    28,    28,    54,   118,    28,   118,   135,
      50,   115,   118,   116,   118
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    71,    72,    73,    73,    73,    74,
      74,    75,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    81,    81,    82,    82,    83,    84,    84,    85,
      86,    86,    86,    87,    87,    88,    88,    89,    90,    91,
      91,    92,    92,    93,    94,    94,    95,    96,    96,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   103,   104,   105,   106,   107,   107,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   111,
     112,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   115,   116,   117,   117,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   132,   133,   133,   134,   134,   134,
     134,   135,   135,   135,   135,   135,   135,   136,   136,   136,
     137,   137,   138,   138
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
       1,     1,     2,     2,     2,     3,     2,     2,     1,     5,
       3,     0,     2,     2,     4,     0,     2,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     4,     5,     1,     0,     3,     1,     1,     1,
       3,     1,     3,     6,     4,     6,     3,     0,     1,     3,
       0,     2,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* ListIden: %empty  */
#line 408 "grammar.y"
                       { (yyval.listiden_) = 0; }
#line 1738 "Parser.c"
    break;

  case 3: /* ListIden: T_Iden  */
#line 409 "grammar.y"
           { (yyval.listiden_) = make_ListIden((yyvsp[0]._string), 0); }
#line 1744 "Parser.c"
    break;

  case 4: /* ListIden: T_Iden _COMMA ListIden  */
#line 410 "grammar.y"
                           { (yyval.listiden_) = make_ListIden((yyvsp[-2]._string), (yyvsp[0].listiden_)); }
#line 1750 "Parser.c"
    break;

  case 5: /* Program: ListGlobDecl  */
#line 412 "grammar.y"
                       { (yyval.program_) = make_Prog(reverseListGlobDecl((yyvsp[0].listglobdecl_))); result->program_ = (yyval.program_); }
#line 1756 "Parser.c"
    break;

  case 6: /* GlobDecl: ClassMemDecl  */
#line 414 "grammar.y"
                        { (yyval.globdecl_) = make_GMemDecl((yyvsp[0].classmemdecl_)); }
#line 1762 "Parser.c"
    break;

  case 7: /* GlobDecl: ClassDecl  */
#line 415 "grammar.y"
              { (yyval.globdecl_) = make_GClassDecl((yyvsp[0].classdecl_)); }
#line 1768 "Parser.c"
    break;

  case 8: /* GlobDecl: ImportDecl  */
#line 416 "grammar.y"
               { (yyval.globdecl_) = make_GImport((yyvsp[0].importdecl_)); }
#line 1774 "Parser.c"
    break;

  case 9: /* ListGlobDecl: %empty  */
#line 418 "grammar.y"
                           { (yyval.listglobdecl_) = 0; }
#line 1780 "Parser.c"
    break;

  case 10: /* ListGlobDecl: ListGlobDecl GlobDecl  */
#line 419 "grammar.y"
                          { (yyval.listglobdecl_) = make_ListGlobDecl((yyvsp[0].globdecl_), (yyvsp[-1].listglobdecl_)); }
#line 1786 "Parser.c"
    break;

  case 11: /* ImportDecl: ListPropDecl _KW_import ListPack _SEMI  */
#line 421 "grammar.y"
                                                    { (yyval.importdecl_) = make_IImport(reverseListPropDecl((yyvsp[-3].listpropdecl_)), (yyvsp[-1].listpack_)); }
#line 1792 "Parser.c"
    break;

  case 12: /* Pack: T_Iden  */
#line 423 "grammar.y"
              { (yyval.pack_) = make_PackName((yyvsp[0]._string)); }
#line 1798 "Parser.c"
    break;

  case 13: /* ListPack: Pack  */
#line 425 "grammar.y"
                { (yyval.listpack_) = make_ListPack((yyvsp[0].pack_), 0); }
#line 1804 "Parser.c"
    break;

  case 14: /* ListPack: Pack _DOT ListPack  */
#line 426 "grammar.y"
                       { (yyval.listpack_) = make_ListPack((yyvsp[-2].pack_), (yyvsp[0].listpack_)); }
#line 1810 "Parser.c"
    break;

  case 15: /* ClassMemDecl: GVarDef _SEMI  */
#line 428 "grammar.y"
                             { (yyval.classmemdecl_) = make_CVarDecl((yyvsp[-1].gvardef_)); }
#line 1816 "Parser.c"
    break;

  case 16: /* ClassMemDecl: FuncDecl  */
#line 429 "grammar.y"
             { (yyval.classmemdecl_) = make_CFuncDecl((yyvsp[0].funcdecl_)); }
#line 1822 "Parser.c"
    break;

  case 17: /* ListClassMemDecl: %empty  */
#line 431 "grammar.y"
                               { (yyval.listclassmemdecl_) = 0; }
#line 1828 "Parser.c"
    break;

  case 18: /* ListClassMemDecl: ListClassMemDecl ClassMemDecl  */
#line 432 "grammar.y"
                                  { (yyval.listclassmemdecl_) = make_ListClassMemDecl((yyvsp[0].classmemdecl_), (yyvsp[-1].listclassmemdecl_)); }
#line 1834 "Parser.c"
    break;

  case 19: /* TypeArg: T_Iden  */
#line 434 "grammar.y"
                 { (yyval.typearg_) = make_TSimp((yyvsp[0]._string)); }
#line 1840 "Parser.c"
    break;

  case 20: /* TypeArg: T_Iden _COLON Type  */
#line 435 "grammar.y"
                       { (yyval.typearg_) = make_TCov((yyvsp[-2]._string), (yyvsp[0].type_)); }
#line 1846 "Parser.c"
    break;

  case 21: /* TypeArg: _KW_contra T_Iden _COLON Type  */
#line 436 "grammar.y"
                                  { (yyval.typearg_) = make_TContra((yyvsp[-2]._string), (yyvsp[0].type_)); }
#line 1852 "Parser.c"
    break;

  case 22: /* ListTypeArg: TypeArg  */
#line 438 "grammar.y"
                      { (yyval.listtypearg_) = make_ListTypeArg((yyvsp[0].typearg_), 0); }
#line 1858 "Parser.c"
    break;

  case 23: /* ListTypeArg: TypeArg _COMMA ListTypeArg  */
#line 439 "grammar.y"
                               { (yyval.listtypearg_) = make_ListTypeArg((yyvsp[-2].typearg_), (yyvsp[0].listtypearg_)); }
#line 1864 "Parser.c"
    break;

  case 24: /* TArgsDecl: %empty  */
#line 441 "grammar.y"
                        { (yyval.targsdecl_) = make_TNil(); }
#line 1870 "Parser.c"
    break;

  case 25: /* TArgsDecl: _LT ListTypeArg _GT  */
#line 442 "grammar.y"
                        { (yyval.targsdecl_) = make_TDecl((yyvsp[-1].listtypearg_)); }
#line 1876 "Parser.c"
    break;

  case 26: /* FuncDecl: ListPropDecl T_Iden TArgsDecl _LPAREN ListParaSig _RPAREN _COLON Type FuncBody  */
#line 444 "grammar.y"
                                                                                          { (yyval.funcdecl_) = make_FFunc(reverseListPropDecl((yyvsp[-8].listpropdecl_)), (yyvsp[-7]._string), (yyvsp[-6].targsdecl_), (yyvsp[-4].listparasig_), (yyvsp[-1].type_), (yyvsp[0].funcbody_)); }
#line 1882 "Parser.c"
    break;

  case 27: /* FuncBody: %empty  */
#line 446 "grammar.y"
                       { (yyval.funcbody_) = make_FAbsBody(); }
#line 1888 "Parser.c"
    break;

  case 28: /* FuncBody: StmtBlock  */
#line 447 "grammar.y"
              { (yyval.funcbody_) = make_FConBody((yyvsp[0].stmtblock_)); }
#line 1894 "Parser.c"
    break;

  case 29: /* ParaSig: T_Iden _COLON Type  */
#line 449 "grammar.y"
                             { (yyval.parasig_) = make_PSig((yyvsp[-2]._string), (yyvsp[0].type_)); }
#line 1900 "Parser.c"
    break;

  case 30: /* ListParaSig: %empty  */
#line 451 "grammar.y"
                          { (yyval.listparasig_) = 0; }
#line 1906 "Parser.c"
    break;

  case 31: /* ListParaSig: ParaSig  */
#line 452 "grammar.y"
            { (yyval.listparasig_) = make_ListParaSig((yyvsp[0].parasig_), 0); }
#line 1912 "Parser.c"
    break;

  case 32: /* ListParaSig: ParaSig _COMMA ListParaSig  */
#line 453 "grammar.y"
                               { (yyval.listparasig_) = make_ListParaSig((yyvsp[-2].parasig_), (yyvsp[0].listparasig_)); }
#line 1918 "Parser.c"
    break;

  case 33: /* ClassDecl: ListPropDecl _KW_class T_Iden TArgsDecl Inhrt _LBRACE ListClassMemDecl _RBRACE  */
#line 455 "grammar.y"
                                                                                           { (yyval.classdecl_) = make_CClass(reverseListPropDecl((yyvsp[-7].listpropdecl_)), (yyvsp[-5]._string), (yyvsp[-4].targsdecl_), (yyvsp[-3].inhrt_), reverseListClassMemDecl((yyvsp[-1].listclassmemdecl_))); }
#line 1924 "Parser.c"
    break;

  case 34: /* ClassDecl: ListPropDecl _KW_interface TArgsDecl T_Iden Inhrt _LBRACE ListClassMemDecl _RBRACE  */
#line 456 "grammar.y"
                                                                                       { (yyval.classdecl_) = make_CInter(reverseListPropDecl((yyvsp[-7].listpropdecl_)), (yyvsp[-5].targsdecl_), (yyvsp[-4]._string), (yyvsp[-3].inhrt_), reverseListClassMemDecl((yyvsp[-1].listclassmemdecl_))); }
#line 1930 "Parser.c"
    break;

  case 35: /* Inhrt: %empty  */
#line 458 "grammar.y"
                    { (yyval.inhrt_) = make_INoInherit(); }
#line 1936 "Parser.c"
    break;

  case 36: /* Inhrt: _COLON ListCType  */
#line 459 "grammar.y"
                     { (yyval.inhrt_) = make_IInherit((yyvsp[0].listctype_)); }
#line 1942 "Parser.c"
    break;

  case 37: /* Prop: T_Iden  */
#line 461 "grammar.y"
              { (yyval.prop_) = make_PName((yyvsp[0]._string)); }
#line 1948 "Parser.c"
    break;

  case 38: /* PropDecl: _LBRACK ListProp _RBRACK  */
#line 463 "grammar.y"
                                    { (yyval.propdecl_) = make_PProp((yyvsp[-1].listprop_)); }
#line 1954 "Parser.c"
    break;

  case 39: /* ListProp: Prop  */
#line 465 "grammar.y"
                { (yyval.listprop_) = make_ListProp((yyvsp[0].prop_), 0); }
#line 1960 "Parser.c"
    break;

  case 40: /* ListProp: Prop ListProp  */
#line 466 "grammar.y"
                  { (yyval.listprop_) = make_ListProp((yyvsp[-1].prop_), (yyvsp[0].listprop_)); }
#line 1966 "Parser.c"
    break;

  case 41: /* ListPropDecl: %empty  */
#line 468 "grammar.y"
                           { (yyval.listpropdecl_) = 0; }
#line 1972 "Parser.c"
    break;

  case 42: /* ListPropDecl: ListPropDecl PropDecl  */
#line 469 "grammar.y"
                          { (yyval.listpropdecl_) = make_ListPropDecl((yyvsp[0].propdecl_), (yyvsp[-1].listpropdecl_)); }
#line 1978 "Parser.c"
    break;

  case 43: /* VarSig: ListIden _COLON Type  */
#line 471 "grammar.y"
                              { (yyval.varsig_) = make_VSig((yyvsp[-2].listiden_), (yyvsp[0].type_)); }
#line 1984 "Parser.c"
    break;

  case 44: /* VarDef: VarSig  */
#line 473 "grammar.y"
                { (yyval.vardef_) = make_VNoAsn((yyvsp[0].varsig_)); }
#line 1990 "Parser.c"
    break;

  case 45: /* VarDef: VarSig _EQ ListExp  */
#line 474 "grammar.y"
                       { (yyval.vardef_) = make_VAsn((yyvsp[-2].varsig_), (yyvsp[0].listexp_)); }
#line 1996 "Parser.c"
    break;

  case 46: /* GVarDef: ListPropDecl VarDef  */
#line 476 "grammar.y"
                              { (yyval.gvardef_) = make_MPropVar(reverseListPropDecl((yyvsp[-1].listpropdecl_)), (yyvsp[0].vardef_)); }
#line 2002 "Parser.c"
    break;

  case 47: /* CType: T_Iden  */
#line 478 "grammar.y"
               { (yyval.ctype_) = make_CSimp((yyvsp[0]._string)); }
#line 2008 "Parser.c"
    break;

  case 48: /* CType: T_Iden _LT ListType _GT  */
#line 479 "grammar.y"
                            { (yyval.ctype_) = make_CGen((yyvsp[-3]._string), (yyvsp[-1].listtype_)); }
#line 2014 "Parser.c"
    break;

  case 49: /* CType: _LBRACK Type _RBRACK  */
#line 480 "grammar.y"
                         { (yyval.ctype_) = make_CList((yyvsp[-1].type_)); }
#line 2020 "Parser.c"
    break;

  case 50: /* CType: _LPAREN ListType _RPAREN  */
#line 481 "grammar.y"
                             { (yyval.ctype_) = make_CTup((yyvsp[-1].listtype_)); }
#line 2026 "Parser.c"
    break;

  case 51: /* ListCType: CType  */
#line 483 "grammar.y"
                  { (yyval.listctype_) = make_ListCType((yyvsp[0].ctype_), 0); }
#line 2032 "Parser.c"
    break;

  case 52: /* ListCType: CType _COMMA ListCType  */
#line 484 "grammar.y"
                           { (yyval.listctype_) = make_ListCType((yyvsp[-2].ctype_), (yyvsp[0].listctype_)); }
#line 2038 "Parser.c"
    break;

  case 53: /* Type: CType _QUESTION  */
#line 486 "grammar.y"
                       { (yyval.type_) = make_TMaybe((yyvsp[-1].ctype_)); }
#line 2044 "Parser.c"
    break;

  case 54: /* Type: CType  */
#line 487 "grammar.y"
          { (yyval.type_) = make_TPure((yyvsp[0].ctype_)); }
#line 2050 "Parser.c"
    break;

  case 55: /* ListType: Type  */
#line 489 "grammar.y"
                { (yyval.listtype_) = make_ListType((yyvsp[0].type_), 0); }
#line 2056 "Parser.c"
    break;

  case 56: /* ListType: Type _COMMA ListType  */
#line 490 "grammar.y"
                         { (yyval.listtype_) = make_ListType((yyvsp[-2].type_), (yyvsp[0].listtype_)); }
#line 2062 "Parser.c"
    break;

  case 57: /* Lit: _INTEGER_  */
#line 492 "grammar.y"
                { (yyval.lit_) = make_LInt((yyvsp[0]._int)); }
#line 2068 "Parser.c"
    break;

  case 58: /* Lit: _STRING_  */
#line 493 "grammar.y"
             { (yyval.lit_) = make_LStr((yyvsp[0]._string)); }
#line 2074 "Parser.c"
    break;

  case 59: /* Lit: _CHAR_  */
#line 494 "grammar.y"
           { (yyval.lit_) = make_LChr((yyvsp[0]._char)); }
#line 2080 "Parser.c"
    break;

  case 60: /* Lit: _DOUBLE_  */
#line 495 "grammar.y"
             { (yyval.lit_) = make_LFlo((yyvsp[0]._double)); }
#line 2086 "Parser.c"
    break;

  case 61: /* Op: _EQ  */
#line 497 "grammar.y"
         { (yyval.op_) = make_Asn(); }
#line 2092 "Parser.c"
    break;

  case 62: /* Op: _PLUSEQ  */
#line 498 "grammar.y"
            { (yyval.op_) = make_AddAsn(); }
#line 2098 "Parser.c"
    break;

  case 63: /* Op: _MINUSEQ  */
#line 499 "grammar.y"
             { (yyval.op_) = make_SubAsn(); }
#line 2104 "Parser.c"
    break;

  case 64: /* Op: _STAREQ  */
#line 500 "grammar.y"
            { (yyval.op_) = make_MulAsn(); }
#line 2110 "Parser.c"
    break;

  case 65: /* Op: _SLASHEQ  */
#line 501 "grammar.y"
             { (yyval.op_) = make_DivAsn(); }
#line 2116 "Parser.c"
    break;

  case 66: /* Op: _PERCENTEQ  */
#line 502 "grammar.y"
               { (yyval.op_) = make_ModAsn(); }
#line 2122 "Parser.c"
    break;

  case 67: /* Op: _AMPEQ  */
#line 503 "grammar.y"
           { (yyval.op_) = make_AndAsn(); }
#line 2128 "Parser.c"
    break;

  case 68: /* Op: _CARETEQ  */
#line 504 "grammar.y"
             { (yyval.op_) = make_XorAsn(); }
#line 2134 "Parser.c"
    break;

  case 69: /* Op: _BAREQ  */
#line 505 "grammar.y"
           { (yyval.op_) = make_OrAsn(); }
#line 2140 "Parser.c"
    break;

  case 70: /* Op: _DLTEQ  */
#line 506 "grammar.y"
           { (yyval.op_) = make_ShlAsn(); }
#line 2146 "Parser.c"
    break;

  case 71: /* Op: _DGTEQ  */
#line 507 "grammar.y"
           { (yyval.op_) = make_ShrAsn(); }
#line 2152 "Parser.c"
    break;

  case 72: /* Op1: _DBAR  */
#line 509 "grammar.y"
            { (yyval.op_) = make_LogOr(); }
#line 2158 "Parser.c"
    break;

  case 73: /* Op2: _DAMP  */
#line 511 "grammar.y"
            { (yyval.op_) = make_LogAnd(); }
#line 2164 "Parser.c"
    break;

  case 74: /* Op3: _BAR  */
#line 513 "grammar.y"
           { (yyval.op_) = make_BitOr(); }
#line 2170 "Parser.c"
    break;

  case 75: /* Op4: _CARET  */
#line 515 "grammar.y"
             { (yyval.op_) = make_BitXor(); }
#line 2176 "Parser.c"
    break;

  case 76: /* Op5: _AMP  */
#line 517 "grammar.y"
           { (yyval.op_) = make_BitAnd(); }
#line 2182 "Parser.c"
    break;

  case 77: /* Op6: _BANGEQ  */
#line 519 "grammar.y"
              { (yyval.op_) = make_NotEq(); }
#line 2188 "Parser.c"
    break;

  case 78: /* Op6: _DEQ  */
#line 520 "grammar.y"
         { (yyval.op_) = make_Eq(); }
#line 2194 "Parser.c"
    break;

  case 79: /* Op7: _LT  */
#line 522 "grammar.y"
          { (yyval.op_) = make_Lt(); }
#line 2200 "Parser.c"
    break;

  case 80: /* Op7: _GT  */
#line 523 "grammar.y"
        { (yyval.op_) = make_Gt(); }
#line 2206 "Parser.c"
    break;

  case 81: /* Op7: _LDARROW  */
#line 524 "grammar.y"
             { (yyval.op_) = make_Leq(); }
#line 2212 "Parser.c"
    break;

  case 82: /* Op7: _GTEQ  */
#line 525 "grammar.y"
          { (yyval.op_) = make_Geq(); }
#line 2218 "Parser.c"
    break;

  case 83: /* Op8: _DLT  */
#line 527 "grammar.y"
           { (yyval.op_) = make_Shl(); }
#line 2224 "Parser.c"
    break;

  case 84: /* Op8: _DGT  */
#line 528 "grammar.y"
         { (yyval.op_) = make_Shr(); }
#line 2230 "Parser.c"
    break;

  case 85: /* Op9: _PLUS  */
#line 530 "grammar.y"
            { (yyval.op_) = make_Add(); }
#line 2236 "Parser.c"
    break;

  case 86: /* Op9: _MINUS  */
#line 531 "grammar.y"
           { (yyval.op_) = make_Sub(); }
#line 2242 "Parser.c"
    break;

  case 87: /* Op10: _STAR  */
#line 533 "grammar.y"
             { (yyval.op_) = make_Mul(); }
#line 2248 "Parser.c"
    break;

  case 88: /* Op10: _SLASH  */
#line 534 "grammar.y"
           { (yyval.op_) = make_Div(); }
#line 2254 "Parser.c"
    break;

  case 89: /* Op10: _PERCENT  */
#line 535 "grammar.y"
             { (yyval.op_) = make_Mod(); }
#line 2260 "Parser.c"
    break;

  case 90: /* Op11: _DSTAR  */
#line 537 "grammar.y"
              { (yyval.op_) = make_Pow(); }
#line 2266 "Parser.c"
    break;

  case 91: /* Op13: _DOT  */
#line 539 "grammar.y"
            { (yyval.op_) = make_Ref(); }
#line 2272 "Parser.c"
    break;

  case 92: /* Stmt: Exp _SEMI  */
#line 541 "grammar.y"
                 { (yyval.stmt_) = make_SExp((yyvsp[-1].exp_)); }
#line 2278 "Parser.c"
    break;

  case 93: /* Stmt: VarDef _SEMI  */
#line 542 "grammar.y"
                 { (yyval.stmt_) = make_SDecl((yyvsp[-1].vardef_)); }
#line 2284 "Parser.c"
    break;

  case 94: /* Stmt: _KW_return _SEMI  */
#line 543 "grammar.y"
                     { (yyval.stmt_) = make_SRetNil(); }
#line 2290 "Parser.c"
    break;

  case 95: /* Stmt: _KW_return Exp _SEMI  */
#line 544 "grammar.y"
                         { (yyval.stmt_) = make_SRet((yyvsp[-1].exp_)); }
#line 2296 "Parser.c"
    break;

  case 96: /* Stmt: _KW_break _SEMI  */
#line 545 "grammar.y"
                    { (yyval.stmt_) = make_SBreak(); }
#line 2302 "Parser.c"
    break;

  case 97: /* Stmt: _KW_continue _SEMI  */
#line 546 "grammar.y"
                       { (yyval.stmt_) = make_SCont(); }
#line 2308 "Parser.c"
    break;

  case 98: /* Stmt: AliasIf  */
#line 547 "grammar.y"
            { (yyval.stmt_) = make_SIf((yyvsp[0].aliasif_)); }
#line 2314 "Parser.c"
    break;

  case 99: /* Stmt: _KW_for T_Iden _KW_in Exp StmtBlock  */
#line 548 "grammar.y"
                                        { (yyval.stmt_) = make_SFor((yyvsp[-3]._string), (yyvsp[-1].exp_), (yyvsp[0].stmtblock_)); }
#line 2320 "Parser.c"
    break;

  case 100: /* Stmt: _KW_while Exp StmtBlock  */
#line 549 "grammar.y"
                            { (yyval.stmt_) = make_SWhile((yyvsp[-1].exp_), (yyvsp[0].stmtblock_)); }
#line 2326 "Parser.c"
    break;

  case 101: /* Else: %empty  */
#line 551 "grammar.y"
                   { (yyval.else_) = make_EEmpty(); }
#line 2332 "Parser.c"
    break;

  case 102: /* Else: _KW_else StmtBlock  */
#line 552 "grammar.y"
                       { (yyval.else_) = make_EElse((yyvsp[0].stmtblock_)); }
#line 2338 "Parser.c"
    break;

  case 103: /* Else: _KW_else AliasIf  */
#line 553 "grammar.y"
                     { (yyval.else_) = make_EElif((yyvsp[0].aliasif_)); }
#line 2344 "Parser.c"
    break;

  case 104: /* AliasIf: _KW_if Exp StmtBlock Else  */
#line 555 "grammar.y"
                                    { (yyval.aliasif_) = make_AIf((yyvsp[-2].exp_), (yyvsp[-1].stmtblock_), (yyvsp[0].else_)); }
#line 2350 "Parser.c"
    break;

  case 105: /* ListStmt: %empty  */
#line 557 "grammar.y"
                       { (yyval.liststmt_) = 0; }
#line 2356 "Parser.c"
    break;

  case 106: /* ListStmt: ListStmt Stmt  */
#line 558 "grammar.y"
                  { (yyval.liststmt_) = make_ListStmt((yyvsp[0].stmt_), (yyvsp[-1].liststmt_)); }
#line 2362 "Parser.c"
    break;

  case 107: /* StmtBlock: _LBRACE ListStmt _RBRACE  */
#line 560 "grammar.y"
                                     { (yyval.stmtblock_) = make_SStmt(reverseListStmt((yyvsp[-1].liststmt_))); }
#line 2368 "Parser.c"
    break;

  case 108: /* Exp1: Exp1 Op Exp2  */
#line 562 "grammar.y"
                    { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2374 "Parser.c"
    break;

  case 109: /* Exp1: Exp2  */
#line 563 "grammar.y"
         { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2380 "Parser.c"
    break;

  case 110: /* Exp2: Exp2 Op1 Exp3  */
#line 565 "grammar.y"
                     { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2386 "Parser.c"
    break;

  case 111: /* Exp2: Exp3  */
#line 566 "grammar.y"
         { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2392 "Parser.c"
    break;

  case 112: /* Exp3: Exp3 Op2 Exp4  */
#line 568 "grammar.y"
                     { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2398 "Parser.c"
    break;

  case 113: /* Exp3: Exp4  */
#line 569 "grammar.y"
         { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2404 "Parser.c"
    break;

  case 114: /* Exp4: Exp4 Op3 Exp5  */
#line 571 "grammar.y"
                     { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2410 "Parser.c"
    break;

  case 115: /* Exp4: Exp5  */
#line 572 "grammar.y"
         { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2416 "Parser.c"
    break;

  case 116: /* Exp5: Exp5 Op4 Exp6  */
#line 574 "grammar.y"
                     { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2422 "Parser.c"
    break;

  case 117: /* Exp5: Exp6  */
#line 575 "grammar.y"
         { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2428 "Parser.c"
    break;

  case 118: /* Exp6: Exp6 Op5 Exp7  */
#line 577 "grammar.y"
                     { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2434 "Parser.c"
    break;

  case 119: /* Exp6: Exp7  */
#line 578 "grammar.y"
         { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2440 "Parser.c"
    break;

  case 120: /* Exp7: Exp7 Op6 Exp8  */
#line 580 "grammar.y"
                     { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2446 "Parser.c"
    break;

  case 121: /* Exp7: Exp8  */
#line 581 "grammar.y"
         { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2452 "Parser.c"
    break;

  case 122: /* Exp8: Exp8 Op7 Exp9  */
#line 583 "grammar.y"
                     { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2458 "Parser.c"
    break;

  case 123: /* Exp8: Exp9  */
#line 584 "grammar.y"
         { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2464 "Parser.c"
    break;

  case 124: /* Exp9: Exp9 Op8 Exp10  */
#line 586 "grammar.y"
                      { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2470 "Parser.c"
    break;

  case 125: /* Exp9: Exp10  */
#line 587 "grammar.y"
          { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2476 "Parser.c"
    break;

  case 126: /* Exp10: Exp10 Op9 Exp11  */
#line 589 "grammar.y"
                        { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2482 "Parser.c"
    break;

  case 127: /* Exp10: Exp11  */
#line 590 "grammar.y"
          { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2488 "Parser.c"
    break;

  case 128: /* Exp11: Exp11 Op10 Exp12  */
#line 592 "grammar.y"
                         { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2494 "Parser.c"
    break;

  case 129: /* Exp11: Exp12  */
#line 593 "grammar.y"
          { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2500 "Parser.c"
    break;

  case 130: /* Exp12: Exp13 Op11 Exp12  */
#line 595 "grammar.y"
                         { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2506 "Parser.c"
    break;

  case 131: /* Exp12: Exp13  */
#line 596 "grammar.y"
          { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2512 "Parser.c"
    break;

  case 132: /* Exp13: Exp14 Op13 Exp15  */
#line 598 "grammar.y"
                         { (yyval.exp_) = make_opf((yyvsp[-2].exp_), (yyvsp[-1].op_), (yyvsp[0].exp_)); }
#line 2518 "Parser.c"
    break;

  case 133: /* Exp13: _DPLUS Exp13  */
#line 599 "grammar.y"
                 { (yyval.exp_) = make_PreInc((yyvsp[0].exp_)); }
#line 2524 "Parser.c"
    break;

  case 134: /* Exp13: _DMINUS Exp13  */
#line 600 "grammar.y"
                  { (yyval.exp_) = make_PreDec((yyvsp[0].exp_)); }
#line 2530 "Parser.c"
    break;

  case 135: /* Exp13: _PLUS Exp13  */
#line 601 "grammar.y"
                { (yyval.exp_) = make_Pos((yyvsp[0].exp_)); }
#line 2536 "Parser.c"
    break;

  case 136: /* Exp13: _MINUS Exp13  */
#line 602 "grammar.y"
                 { (yyval.exp_) = make_Neg((yyvsp[0].exp_)); }
#line 2542 "Parser.c"
    break;

  case 137: /* Exp13: _BANG Exp13  */
#line 603 "grammar.y"
                { (yyval.exp_) = make_LogNot((yyvsp[0].exp_)); }
#line 2548 "Parser.c"
    break;

  case 138: /* Exp13: _TILDE Exp13  */
#line 604 "grammar.y"
                 { (yyval.exp_) = make_BitNot((yyvsp[0].exp_)); }
#line 2554 "Parser.c"
    break;

  case 139: /* Exp13: Exp14  */
#line 605 "grammar.y"
          { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2560 "Parser.c"
    break;

  case 140: /* Exp14: Exp14 _DPLUS  */
#line 607 "grammar.y"
                     { (yyval.exp_) = make_SufInc((yyvsp[-1].exp_)); }
#line 2566 "Parser.c"
    break;

  case 141: /* Exp14: Exp14 _DMINUS  */
#line 608 "grammar.y"
                  { (yyval.exp_) = make_SufDec((yyvsp[-1].exp_)); }
#line 2572 "Parser.c"
    break;

  case 142: /* Exp14: Exp14 _LBRACK Exp _RBRACK  */
#line 609 "grammar.y"
                              { (yyval.exp_) = make_ArrIdx((yyvsp[-3].exp_), (yyvsp[-1].exp_)); }
#line 2578 "Parser.c"
    break;

  case 143: /* Exp14: Exp14 TArgsPass _LPAREN ListExp _RPAREN  */
#line 610 "grammar.y"
                                            { (yyval.exp_) = make_FuncCall((yyvsp[-4].exp_), (yyvsp[-3].targspass_), (yyvsp[-1].listexp_)); }
#line 2584 "Parser.c"
    break;

  case 144: /* Exp14: Exp15  */
#line 611 "grammar.y"
          { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2590 "Parser.c"
    break;

  case 145: /* TArgsPass: %empty  */
#line 613 "grammar.y"
                        { (yyval.targspass_) = make_TPNil(); }
#line 2596 "Parser.c"
    break;

  case 146: /* TArgsPass: _AT ListType _AT  */
#line 614 "grammar.y"
                     { (yyval.targspass_) = make_TPass((yyvsp[-1].listtype_)); }
#line 2602 "Parser.c"
    break;

  case 147: /* Exp15: Lit  */
#line 616 "grammar.y"
            { (yyval.exp_) = make_ELit((yyvsp[0].lit_)); }
#line 2608 "Parser.c"
    break;

  case 148: /* Exp15: T_Iden  */
#line 617 "grammar.y"
           { (yyval.exp_) = make_EIde((yyvsp[0]._string)); }
#line 2614 "Parser.c"
    break;

  case 149: /* Exp15: _KW_null  */
#line 618 "grammar.y"
             { (yyval.exp_) = make_ENil(); }
#line 2620 "Parser.c"
    break;

  case 150: /* Exp15: _LPAREN Exp _RPAREN  */
#line 619 "grammar.y"
                        { (yyval.exp_) = (yyvsp[-1].exp_); }
#line 2626 "Parser.c"
    break;

  case 151: /* Exp: Exp1  */
#line 621 "grammar.y"
           { (yyval.exp_) = (yyvsp[0].exp_); }
#line 2632 "Parser.c"
    break;

  case 152: /* Exp: T_Iden _RARROW LamBody  */
#line 622 "grammar.y"
                           { (yyval.exp_) = make_ESing((yyvsp[-2]._string), (yyvsp[0].lambody_)); }
#line 2638 "Parser.c"
    break;

  case 153: /* Exp: _BACKSLASH _LPAREN ListIden _RPAREN _RARROW LamBody  */
#line 623 "grammar.y"
                                                        { (yyval.exp_) = make_EMore((yyvsp[-3].listiden_), (yyvsp[0].lambody_)); }
#line 2644 "Parser.c"
    break;

  case 154: /* Exp: _LPAREN Exp _COMMA _RPAREN  */
#line 624 "grammar.y"
                               { (yyval.exp_) = make_ETupOne((yyvsp[-2].exp_)); }
#line 2650 "Parser.c"
    break;

  case 155: /* Exp: _LPAREN Exp _COMMA Exp OptionExp _RPAREN  */
#line 625 "grammar.y"
                                             { (yyval.exp_) = make_ETupTwo((yyvsp[-4].exp_), (yyvsp[-2].exp_), (yyvsp[-1].optionexp_)); }
#line 2656 "Parser.c"
    break;

  case 156: /* Exp: _LBRACK ListExp _RBRACK  */
#line 626 "grammar.y"
                            { (yyval.exp_) = make_EList((yyvsp[-1].listexp_)); }
#line 2662 "Parser.c"
    break;

  case 157: /* ListExp: %empty  */
#line 628 "grammar.y"
                      { (yyval.listexp_) = 0; }
#line 2668 "Parser.c"
    break;

  case 158: /* ListExp: Exp  */
#line 629 "grammar.y"
        { (yyval.listexp_) = make_ListExp((yyvsp[0].exp_), 0); }
#line 2674 "Parser.c"
    break;

  case 159: /* ListExp: Exp _COMMA ListExp  */
#line 630 "grammar.y"
                       { (yyval.listexp_) = make_ListExp((yyvsp[-2].exp_), (yyvsp[0].listexp_)); }
#line 2680 "Parser.c"
    break;

  case 160: /* OptionExp: %empty  */
#line 632 "grammar.y"
                        { (yyval.optionexp_) = make_ONil(); }
#line 2686 "Parser.c"
    break;

  case 161: /* OptionExp: _COMMA ListExp  */
#line 633 "grammar.y"
                   { (yyval.optionexp_) = make_OExp((yyvsp[0].listexp_)); }
#line 2692 "Parser.c"
    break;

  case 162: /* LamBody: Exp  */
#line 635 "grammar.y"
              { (yyval.lambody_) = make_LExp((yyvsp[0].exp_)); }
#line 2698 "Parser.c"
    break;

  case 163: /* LamBody: StmtBlock  */
#line 636 "grammar.y"
              { (yyval.lambody_) = make_LStm((yyvsp[0].stmtblock_)); }
#line 2704 "Parser.c"
    break;


#line 2708 "Parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, scanner, result);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 639 "grammar.y"



/* Entrypoint: parse Program from file. */
Program pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = grammar__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  grammar_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Program from string. */
Program psProgram(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = grammar__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = grammar__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  grammar__delete_buffer(buf, scanner);
  grammar_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}



