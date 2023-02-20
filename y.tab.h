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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    TIP = 258,                     /* TIP  */
    VOID = 259,                    /* VOID  */
    ID = 260,                      /* ID  */
    STRING = 261,                  /* STRING  */
    CHARACTER = 262,               /* CHARACTER  */
    VERIFY = 263,                  /* VERIFY  */
    BOOL_OP = 264,                 /* BOOL_OP  */
    PLUS = 265,                    /* PLUS  */
    MINUS = 266,                   /* MINUS  */
    MUL = 267,                     /* MUL  */
    DIV = 268,                     /* DIV  */
    IF = 269,                      /* IF  */
    ELSE = 270,                    /* ELSE  */
    ELIF = 271,                    /* ELIF  */
    TYPE = 272,                    /* TYPE  */
    CLS = 273,                     /* CLS  */
    FCT = 274,                     /* FCT  */
    BOOLTNK = 275,                 /* BOOLTNK  */
    NR = 276,                      /* NR  */
    FLOAT_NR = 277,                /* FLOAT_NR  */
    BGIN_GLOBAL = 281,             /* BGIN_GLOBAL  */
    END_GLOBAL = 282,              /* END_GLOBAL  */
    BGIN_DEF = 283,                /* BGIN_DEF  */
    END_DEF = 284,                 /* END_DEF  */
    BGIN_FCT = 285,                /* BGIN_FCT  */
    END_FCT = 286,                 /* END_FCT  */
    BGIN_CLS = 287,                /* BGIN_CLS  */
    END_CLS = 288,                 /* END_CLS  */
    BGIN_MAIN = 289,               /* BGIN_MAIN  */
    END_MAIN = 290,                /* END_MAIN  */
    ASSIGN = 291,                  /* ASSIGN  */
    WHILE = 292,                   /* WHILE  */
    FOR = 293,                     /* FOR  */
    EVAL = 294,                    /* EVAL  */
    TYPEOF = 295                   /* TYPEOF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TIP 258
#define VOID 259
#define ID 260
#define STRING 261
#define CHARACTER 262
#define VERIFY 263
#define BOOL_OP 264
#define PLUS 265
#define MINUS 266
#define MUL 267
#define DIV 268
#define IF 269
#define ELSE 270
#define ELIF 271
#define TYPE 272
#define CLS 273
#define FCT 274
#define BOOLTNK 275
#define NR 276
#define FLOAT_NR 277
#define BGIN_GLOBAL 281
#define END_GLOBAL 282
#define BGIN_DEF 283
#define END_DEF 284
#define BGIN_FCT 285
#define END_FCT 286
#define BGIN_CLS 287
#define END_CLS 288
#define BGIN_MAIN 289
#define END_MAIN 290
#define ASSIGN 291
#define WHILE 292
#define FOR 293
#define EVAL 294
#define TYPEOF 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "limbaj.y"

int intval;
char* strval;
float floatval;
struct node* node;

#line 148 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
