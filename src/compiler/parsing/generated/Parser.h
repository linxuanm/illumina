#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include "Absyn.h"

typedef union
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
  AliasIf aliasif_;
  ListStmt liststmt_;
  StmtBlock stmtblock_;
  Exp exp_;
  TArgsPass targspass_;
  ListExp listexp_;
  OptionExp optionexp_;
  LamBody lambody_;
} YYSTYPE;

typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;

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
#define _SYMB_46 278
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
#define _SYMB_45 295
#define _SYMB_10 296
#define _SYMB_47 297
#define _SYMB_11 298
#define _SYMB_27 299
#define _SYMB_20 300
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
#define _SYMB_59 312
#define _SYMB_60 313
#define _SYMB_8 314
#define _SYMB_26 315
#define _SYMB_21 316
#define _SYMB_24 317
#define _SYMB_9 318
#define _SYMB_44 319
#define _SYMB_61 320
#define _STRING_ 321
#define _CHAR_ 322
#define _INTEGER_ 323
#define _DOUBLE_ 324


extern YYLTYPE yylloc;
extern YYSTYPE yylval;

Program  pProgram(FILE *inp);
Program psProgram(const char *str);

#endif
