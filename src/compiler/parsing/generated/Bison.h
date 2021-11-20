/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_GRAMMAR_BISON_H_INCLUDED
# define YY_GRAMMAR_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int grammar_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _BANG = 259,                   /* _BANG  */
    _BANGEQ = 260,                 /* _BANGEQ  */
    _PERCENT = 261,                /* _PERCENT  */
    _PERCENTEQ = 262,              /* _PERCENTEQ  */
    _AMP = 263,                    /* _AMP  */
    _DAMP = 264,                   /* _DAMP  */
    _AMPEQ = 265,                  /* _AMPEQ  */
    _LPAREN = 266,                 /* _LPAREN  */
    _RPAREN = 267,                 /* _RPAREN  */
    _STAR = 268,                   /* _STAR  */
    _DSTAR = 269,                  /* _DSTAR  */
    _STAREQ = 270,                 /* _STAREQ  */
    _PLUS = 271,                   /* _PLUS  */
    _DPLUS = 272,                  /* _DPLUS  */
    _PLUSEQ = 273,                 /* _PLUSEQ  */
    _COMMA = 274,                  /* _COMMA  */
    _MINUS = 275,                  /* _MINUS  */
    _DMINUS = 276,                 /* _DMINUS  */
    _MINUSEQ = 277,                /* _MINUSEQ  */
    _RARROW = 278,                 /* _RARROW  */
    _DOT = 279,                    /* _DOT  */
    _SLASH = 280,                  /* _SLASH  */
    _SLASHEQ = 281,                /* _SLASHEQ  */
    _COLON = 282,                  /* _COLON  */
    _SEMI = 283,                   /* _SEMI  */
    _LT = 284,                     /* _LT  */
    _DLT = 285,                    /* _DLT  */
    _DLTEQ = 286,                  /* _DLTEQ  */
    _LDARROW = 287,                /* _LDARROW  */
    _EQ = 288,                     /* _EQ  */
    _DEQ = 289,                    /* _DEQ  */
    _GT = 290,                     /* _GT  */
    _GTEQ = 291,                   /* _GTEQ  */
    _DGT = 292,                    /* _DGT  */
    _DGTEQ = 293,                  /* _DGTEQ  */
    _QUESTION = 294,               /* _QUESTION  */
    _AT = 295,                     /* _AT  */
    _LBRACK = 296,                 /* _LBRACK  */
    _BACKSLASH = 297,              /* _BACKSLASH  */
    _RBRACK = 298,                 /* _RBRACK  */
    _CARET = 299,                  /* _CARET  */
    _CARETEQ = 300,                /* _CARETEQ  */
    _KW_break = 301,               /* _KW_break  */
    _KW_class = 302,               /* _KW_class  */
    _KW_continue = 303,            /* _KW_continue  */
    _KW_contra = 304,              /* _KW_contra  */
    _KW_else = 305,                /* _KW_else  */
    _KW_for = 306,                 /* _KW_for  */
    _KW_if = 307,                  /* _KW_if  */
    _KW_import = 308,              /* _KW_import  */
    _KW_in = 309,                  /* _KW_in  */
    _KW_interface = 310,           /* _KW_interface  */
    _KW_null = 311,                /* _KW_null  */
    _KW_return = 312,              /* _KW_return  */
    _KW_while = 313,               /* _KW_while  */
    _LBRACE = 314,                 /* _LBRACE  */
    _BAR = 315,                    /* _BAR  */
    _BAREQ = 316,                  /* _BAREQ  */
    _DBAR = 317,                   /* _DBAR  */
    _RBRACE = 318,                 /* _RBRACE  */
    _TILDE = 319,                  /* _TILDE  */
    T_Iden = 320,                  /* T_Iden  */
    _STRING_ = 321,                /* _STRING_  */
    _CHAR_ = 322,                  /* _CHAR_  */
    _INTEGER_ = 323,               /* _INTEGER_  */
    _DOUBLE_ = 324                 /* _DOUBLE_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 207 "grammar.y"

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
  AliasIf aliasif_;
  ListStmt liststmt_;
  StmtBlock stmtblock_;
  Exp exp_;
  TArgsPass targspass_;
  ListExp listexp_;
  OptionExp optionexp_;
  LamBody lambody_;

#line 181 "Bison.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int grammar_parse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_GRAMMAR_BISON_H_INCLUDED  */
