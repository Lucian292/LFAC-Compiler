#!/bin/bash
rm lex.yy.c
rm limbaj
rm y.tab.c
rm y.tab.h
yacc -d limbaj.y
lex limbaj.l
gcc lex.yy.c y.tab.c -o limbaj
./limbaj file.txt
