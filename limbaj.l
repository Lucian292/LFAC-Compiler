%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool" {yylval.strval=strdup(yytext);  return TIP;}
"=="|">"|"<"|"!="|">="|"<=" {yylval.strval=strdup(yytext);  return VERIFY;}
"&&"|"||" {yylval.strval=strdup(yytext);  return BOOL_OP;}
"+" {yylval.strval=strdup(yytext);  return PLUS;}
"-" {yylval.strval=strdup(yytext);  return MINUS;}
"*" {yylval.strval=strdup(yytext);  return MUL;}
"/" {yylval.strval=strdup(yytext);  return DIV;}
"if" {yylval.strval=strdup(yytext); return IF;}
"else" {return ELSE;}
"elif" {return ELIF;}
"while" {return WHILE;}
"for" {return FOR;}
"function" {return FCT;}
"begin_global" {return BGIN_GLOBAL;}
"end_global" {return END_GLOBAL;}
"begin_function" {return BGIN_FCT;}
"end_function" {return END_FCT;}
"begin_definitions" {return BGIN_DEF;}
"end_definitions" {return END_DEF;}
"begin_classes" {return BGIN_CLS;}
"end_classes" {return END_CLS;}
"begin_main" {return BGIN_MAIN;}
"end_main" {return END_MAIN;}
"eval" {return EVAL;} 
"TypeOf" {return TYPEOF;}
"class" {return CLS;}
"public"|"privat"|"protected" {yylval.strval=strdup(yytext); return TYPE;}
"void" {yylval.strval=strdup(yytext); return VOID;}
"true"|"false" {yylval.strval=strdup(yytext); return BOOLTNK;}

[_a-zA-Z][_a-zA-Z0-9]* {yylval.strval=strdup(yytext); return ID;}
":=" {return ASSIGN;}
["][a-zA-Z0-9 \t]*["]+ {yylval.strval=strdup(yytext); return STRING;} 
'[a-zA-Z]' {yylval.strval=strdup(yytext); return CHARACTER;}
0|([1-9][0-9]*) {yylval.intval = atoi(yytext); return NR; }
(0|([1-9][0-9]*))+"."[0-9]*	{ yylval.floatval = atof(yytext); return FLOAT_NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
