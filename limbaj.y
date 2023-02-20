%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "import.h"
#include "importFunct.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno; 

char params[100];
char params_clase[100];
char arr_values[100];
char typeDecl[100];
int return_value;
char scope[100] = "global";
%}


%union {
int intval;
char* strval;
float floatval;
struct node* node;
}

%token <strval>TIP VOID ID STRING CHARACTER VERIFY BOOL_OP PLUS MINUS MUL DIV IF ELSE ELIF TYPE CLS FCT BOOLTNK
%type <strval>declaratie statement list if

%type <intval>condition

%type <node>exp value

%token <intval>NR

%token <floatval>FLOAT_NR

%left '<' '>' '=' "!=" "<=" ">="
%left PLUS MINUS
%left DIV MUL
%left BOOL_OP

%token BGIN_GLOBAL END_GLOBAL BGIN_DEF END_DEF BGIN_FCT END_FCT BGIN_CLS END_CLS BGIN_MAIN END_MAIN
%token ASSIGN WHILE FOR EVAL TYPEOF
%start progr
%%

progr: global definitions clase bloc {
     tabel();
     tabelFunct();
     }
;

global: BGIN_GLOBAL declaratii END_GLOBAL{
          strcpy(scope, "local"); // se asigneaza pentru urmatorul bloc
}
;

declaratii : declaratie ';' 
	      | declaratii declaratie ';'
;

definitions: BGIN_DEF funct  END_DEF{
     strcpy(scope, "clase");
}
;

clase: BGIN_CLS classes END_CLS {
     strcpy(scope, "main");}
;

bloc : BGIN_MAIN other END_MAIN{
     }
     //modificat
;


declaratie : TIP ID{ 
               if( insertVar($2, $1, scope) == 0){ // variabila nu a fost deja declarata 
                    //printf("variabila %s s-a declarat\n", $2); 
               }
               else {printf("[error, linia %d]variabila exista\n", yylineno);
               return -1;}
                    
          }
              
          | TIP ID ASSIGN ID {
               if( insertVar($2, $1, scope) == 0){  //daca exista prima variabila. daca nu, o inseram in tabel
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(existsVar($4, scope)!=-1 && typeVerify($2, $4) == 1) // daca exista si variabila 2 si au acelasi tip
                    { 
                         insertValVar($2,$4); // a = b
                         //printf("am inserat in variabila %s valoarea variabilei %s\n", $2, $4);
                    }
                    else {printf("[error, linia %d]nu se poate face asignarea\n", yylineno);
                    return -1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return -1;}
          }
         | TIP ID ASSIGN NR{ 
               if( insertVar($2, $1, scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp($1, "int")==0){
                         insertValInt($2, $4);
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);  return -1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }  
         | TIP ID ASSIGN FLOAT_NR{ 
               if( insertVar($2, $1, scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp($1, "float")==0){
                         insertValFloat($2, $4);
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: float. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
         | TIP ID ASSIGN CHARACTER {
               if( insertVar($2, $1, scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp($1, "char")==0){
                         insertValChar($2, $4);
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
         | TIP ID ASSIGN STRING{
               if( insertVar($2, $1, scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp($1, "string")==0){
                         insertValString($2, $4);
                    }
                    else { printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
          | TIP ID ASSIGN BOOLTNK{
               if( insertVar($2, $1, scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp($1, "bool")==0){
                         if(strcmp($4, "true")==0){
                              insertValString($2, $4);
                         }
                         else if(strcmp($4, "false")==0){
                              insertValString($2, $4);
                         }
                         else {printf("[error,linia %d]nu ati introdus o valoare corecta.\n", yylineno); return-1;}
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
         | TIP ID ASSIGN '(' exp ')'{
               if( insertVar($2, $1, scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp($1, "int")==0){
                         int value = evalAST((struct node*)$5);
                         insertValInt($2, value);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}

         } 
          | TIP ID '[' NR ']' ASSIGN '~' list_val '~' { // int arr[3] = ~8,2,3~
               char nr_to_str[33] , name_arr[33];
               sprintf(nr_to_str, "%d", $4);

               strcpy(name_arr, "");
               strcat(name_arr, $2);
               strcat(name_arr, "[");
               strcat(name_arr, nr_to_str);
               strcat(name_arr, "]");

               if(existArr($2) == 0) // daca nu exista array cu numele dat
               {
                    if( insertVar(name_arr, $1, scope) == 0){ 
                         //printf("vectorul %s s-a declarat\n", name_arr); 
                         strcat(arr_values, "~ ");

                         insertValString(name_arr, arr_values); 
                    } 
               }
               else {printf("[error, linia %d]vectorul exista\n", yylineno); return-1;}

               strcpy(arr_values, " ");
               arr_values[0] = '\0';
          }
          | TIP ID '[' NR ']'{
               char nr_to_str[33] , name_arr[33];
               sprintf(nr_to_str, "%d", $4);

               strcpy(name_arr, "");
               strcat(name_arr, $2);
               strcat(name_arr, "[");
               strcat(name_arr, nr_to_str);
               strcat(name_arr, "]");

               if(existArr($2) == 0) // daca nu exista array cu numele dat
               {
                    if( insertVar(name_arr, $1, scope) == 0){ 
                         //printf("vectorul %s s-a declarat\n", name_arr); 
                    } 
               }
               else {printf("[error, linia %d]vectorul exista\n", yylineno); return-1;}
          }
           ;

list_val: val ',' list_val
        | val
        ;
        //schimbat ordinea recursie

val:  NR  { 
          char buffer[33];
          sprintf(buffer, "%d", $1);
          if(arr_values[0] != '~')
          strcat(arr_values, "~ ");
          strcat(arr_values, buffer); 
          strcat(arr_values, " "); 
     }
     ;



funct_decl: FCT TIP ID '(' lista_param ')' {
               strcat(numeClaseFunctii, $3);
               strcat(numeClaseFunctii,"\0");
               UpdateParams($3);
               strcpy(numeClaseFunctii,"\0");
               strcpy(numeParametru,"\0");
               if( insertFunct($3, $2, params, $3) == 0){
                    //printf("functia %s s-a declarat \n", $3);
               }
               else {printf("[error, linia %d]functia exista\n", yylineno); return-1;}
               strcpy(params, " ");
               //strcpy(scope, $3);
              }

           | FCT TIP ID '(' ')'{
                if( insertFunct($3, $2, " ", $3) == 0){
                    //printf("functia %s s-a declarat\n", $3);
               }
               else {printf("[error, linia %d]functia exista\n", yylineno); return-1;}
               strcpy(params, " ");
               //strcpy(bufferClsFnct, $3);
              } 
          | FCT VOID ID '(' lista_param ')'{
               strcat(numeClaseFunctii, $3);
               strcat(numeClaseFunctii,"\0");
               UpdateParams( $3);
               strcpy(numeClaseFunctii,"\0");
               strcpy(numeParametru,"\0");
               if( insertFunct($3, $2, params, $3) == 0){
                    //printf("functia %s s-a declarat \n", $3);
               }
               else {printf("[error, linia %d]functia exista\n", yylineno); return-1;}
               strcpy(params, " ");
               //strcpy(bufferClsFnct, $3);
          }
          | FCT VOID ID '(' ')'{
               if( insertFunct($3, $2, " ", $3) == 0){
                    //printf("functia %s s-a declarat\n", $3);
               }
               else {printf("[error, linia %d]functia exista\n", yylineno); return-1;}
               strcpy(params, " ");
               //strcpy(bufferClsFnct, $3);
          }
         ;

funct: funct_decl BGIN_FCT other END_FCT
     | funct funct_decl BGIN_FCT other END_FCT
     ;
other:  list;
     //modificat-era recursie in recursie

lista_param : param 
            | lista_param ','  param 
            ;
            
param : TIP ID {
          strcat(params, $1); 
          strcat(params, " "); 
          strcat(params, $2); 
          strcat(params, " ");
          
          strcat(numeParametru, $2);
          strcat(numeParametru, " ");

          if( insertVar($2, $1, scope) == 0){ // variabila nu a fost deja declarata 
               //printf("variabila %s s-a declarat\n", $2); 
          }
          else {printf("[error, linia %d]variabila exista\n", yylineno);  return-1;}      
          } 
      ; 

     
list :  statement ';' 
     | declaratie ';'
     | list statement ';'
     | list if
     | list declaratie ';'
     | list while
     | list for
     | list eval ';'
     | list funct 
     | funct 
     | eval ';'
     | TypeOf ';'
     | list TypeOf ';'
     |
     ;

lista_clase : declaratie ';'
     | statement ';'
     | classes
     | funct_decl ';'
     | lista_clase funct_decl ';'
     | lista_clase classes    
     | lista_clase declaratie ';'
     | lista_clase statement ';'
     | eval ';'
     |lista_clase eval ';'
     | TypeOf ';'
     | lista_clase TypeOf ';'
     |
     ;



classes: classes_declarations '{' lista_clase '}'
     | classes classes_declarations '{' lista_clase '}'
     |
     ;

classes_declarations: CLS TYPE ID '(' param_clase ')'{
               strcat(numeClaseFunctii, $3);
               strcat(numeClaseFunctii,"\0");
               UpdateParams($3);
               strcpy(numeClaseFunctii,"\0");
               strcpy(numeParametru,"\0");
               if( insertFunct($3, $2, params_clase, $3) == 0){
                    //printf("clasa %s s-a declarat \n", $3);
               }
               else {printf("[error, linia %d]clasa exista\n", yylineno); return-1;}
               strcpy(params_clase, " ");
               //strcpy(bufferClsFnct, $3);
               }
            | CLS TYPE ID '(' ')'{
               if( insertFunct($3, $2, " ", $3) == 0){
                    //printf("clasa %s s-a declarat\n", $3);
               }
               else {printf("[error, linia %d]clasa exista\n", yylineno); return-1;}
               strcpy(params_clase, " ");
               //strcpy(bufferClsFnct, $3);
               } 
         ;

param_clase:  ID{
          strcat(numeParametru, $1);
          strcat(numeParametru, " ");
          strcat(params_clase, $1); 
          strcat(params_clase, " ");  
          if( insertVar($1, " ", scope) == 0){ // variabila nu a fost deja declarata 
               //printf("variabila %s s-a declarat\n", $1); 
          }
          else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
     }
     | param_clase ',' ID{
          strcat(numeParametru, $3);
          strcat(numeParametru, " ");
          strcat(params_clase, $3); 
          strcat(params_clase, " "); 
          if( insertVar($3, " ", scope) == 0){ // variabila nu a fost deja declarata 
               //printf("variabila %s s-a declarat\n", $3); 
          }
          else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
     }
     ;

/* instructiune */
statement: ID ASSIGN ID '[' NR ']'{
          char buff[50];
          sprintf(buff,"%s[%d]",$3, $5);
          if(existsVar($1, scope)!=-1 && existsVar(buff, scope)!=-1 ){
               //printf("variabilele %s si %s exista. se poate face asignarea\n", $1, $3);
                    if(typeVerify($1, $3) == 1){ 
                         insertValVar($1,$3); 
                    }
                    else {printf("[error, linia %d]variabilele nu au acelasi tip. nu se poate face asignarea.\n", yylineno); return-1;}
               }
         }
          | ID ASSIGN ID {
               if(existsVar($1, scope)!=-1 && existsVar($3, scope)!=-1 ){
                    //printf("variabilele %s si %s exista. se poate face asignarea\n", $1, $3);
                    if(typeVerify($1, $3) == 1){ 
                         insertValVar($1,$3); 
                    }
                    else {printf("[error, linia %d]variabilele nu au acelasi tip. nu se poate face asignarea.\n", yylineno); return-1;}
               }
               else
                    {printf("[error, linia %d]variabilele nu exista \n", yylineno); return-1;}
          }
         | ID ASSIGN NR{ // a := 10
               if(existsVar($1,scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($1), "int")==0){
                         insertValInt($1, $3);
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);   return-1;}
              }                 
               else {printf("[error,linia %d]variabila nu exista \n", yylineno); return-1;}
         }  
         | ID ASSIGN FLOAT_NR{  
               if(existsVar($1,scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($1), "float")==0){
                         insertValFloat($1, $3);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: float. Nu se poate face asignarea.\n", yylineno);  return-1;} 
              }                 
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
         }
         | ID ASSIGN CHARACTER {
               if(existsVar($1, scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($1), "char")==0){
                         insertValChar($1, $3);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);  return-1;} 
              }                 
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
         }
         | ID ASSIGN STRING{
               if(existsVar($1, scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($1), "string")==0){
                         insertValString($1, $3);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);   return-1;}
              }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}
         }
          | ID ASSIGN BOOLTNK{
               if(existsVar($1, scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($1), "bool")==0){
                         insertValString($1, $3);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: bool. Nu se poate face asignarea.\n", yylineno);  return-1;} 
              }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}
         }
         | ID '(' lista_apel ')'{
               if(existsFunct($1)!=-1){
                    //printf("functia %s exista.se poate apela\n", $1);
                    paramsTypeVerify($1,typeDecl);
               }
               else {printf("[error,linia %d]functia nu exista\n", yylineno); return-1;}
               strcpy(typeDecl, " ");
         }
         | ID '(' ')'{
               if(existsFunct($1)!=-1){
                    //printf("functia %s exista. se poate apela\n", $1);
                    paramsTypeVerify($1,typeDecl);
               }
               else {printf("[error,linia %d]functia nu exista\n", yylineno);return-1;}
               strcpy(typeDecl, " ");
         }
         | ID ASSIGN '(' exp ')'{
               if(existsVar($1, scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($1), "int")==0){
                         int value = evalAST((struct node*)$4);
                         insertValInt($1, value);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno); return-1;}   
               }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}
         }
          |ID '.' ID ASSIGN ID {
               if(existsVar($1, scope)==-2){
               if(existsVar($3, "clase")!=-1 && existsVar($5, scope)!=-1 ){
                    //printf("variabilele %s si %s exista. se poate face asignarea\n", $1, $3);
                    if(typeVerify($3, $5) == 1){ 
                         insertValVar($3,$5); 
                    }
                    else {printf("[error, linia %d]variabilele nu au acelasi tip. nu se poate face asignarea.\n", yylineno); return-1;}
               }
               else
                    {printf("[error, linia %d]variabilele nu exista \n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
          }
         | ID '.' ID ASSIGN NR{
               if(existsVar($1, "clase")==-2){
               if(existsVar($3,"clase")!=-1){  
                   
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($3), "int")==0){
                         insertValInt($3, $5);
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);   return-1;}
              }                 
               else {printf("[error,linia %d]variabila nu exista \n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }  
         | ID '.' ID ASSIGN FLOAT_NR{  
               if(existsVar($1, "clase")==-2){
               if(existsVar($3,"clase")!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($3), "float")==0){
                         insertValFloat($3, $5);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: float. Nu se poate face asignarea.\n", yylineno); return-1;}  
              }                 
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }
         | ID '.' ID ASSIGN CHARACTER {
               if(existsVar($1, "clase")==-2){
               if(existsVar($3, "clase")!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($3), "char")==0){
                         insertValChar($3, $5);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);   return-1;}
               }               
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
               }
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }
         | ID '.' ID ASSIGN STRING{
               if(existsVar($1, "clase")==-2){
               if(existsVar($3, "clase")!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($3), "string")==0){
                         insertValString($3, $5);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);   return-1;}
              }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }

         | ID '.' ID '(' lista_apel ')'{
               if(existsVar($1, "clase")==-2){
               if(FunctScope($3)!=-1){
                    //printf("functia %s exista.se poate apela\n", $1);
                    paramsTypeVerify($3,typeDecl);
               }
               else {printf("[error,linia %d]functia nu exista\n", yylineno);return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
               strcpy(typeDecl, " ");
         }
         | ID '.' ID '(' ')'{
               if(existsVar($1, "clase")==-2){
               if(FunctScope($3)!=-1){
                    //printf("functia %s exista. se poate apela\n", $1);
                    paramsTypeVerify($3,typeDecl);
               }
               else {printf("[error,linia %d]functia nu exista\n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
               strcpy(typeDecl, " ");
         }
         | ID '.' ID ASSIGN '(' exp ')'{
               if(existsVar($1, "clase")==-2){
               if(existsVar($3, "clase")!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType($3), "int")==0){
                         int value = evalAST((struct node*)$6);
                         insertValInt($3, value);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);  return-1;}  
               }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }
         | ID '.' ID '[' NR ']' ASSIGN NR {
               if(existsVar($1, "clase")==-2){
               insertArrValue($3, $5, scope, $8);}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
           }
           | ID '[' NR ']' ASSIGN NR { // arr[0] := 8 
                    insertArrValue($1, $3, scope, $6);
         }
         ;


value: NR {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          node->value.number = $1;
          $$ = (struct node*)buildAST((struct node*)node, NULL, NULL, "int");
     }
     | ID '[' NR ']'{
          struct node* node = (struct node*)malloc(sizeof(struct node));
          node->value.number = 0;
          $$ = (struct node*)buildAST((struct node*)node, NULL, NULL, "vector");
     }
     | altceva {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          node->value.number = 0;
          $$ = (struct node*)buildAST((struct node*)node, NULL, NULL, "altceva");
     }
     | ID {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.identifier, $1);
          $$ = (struct node*)buildAST((struct node*)node, NULL, NULL, "id");
     }  
     ;

altceva: FLOAT_NR
          | CHARACTER
          | STRING
          | ID '(' lista_apel ')'
          | ID '('  ')'
          ;

exp:  exp PLUS exp{
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.op, $2);
          $$ = (struct node*)buildAST((struct node*)node, (struct node*)$1, (struct node*)$3, "op");
     }
     |exp MUL exp{
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.op, $2);
          $$ = (struct node*)buildAST((struct node*)node, (struct node*)$1, (struct node*)$3, "op");
     }
     | exp DIV exp{
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.op, $2);
          $$ = (struct node*)buildAST((struct node*)node, (struct node*)$1, (struct node*)$3, "op");
     }
     | exp MINUS exp{
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.op, $2);
          $$ = (struct node*)buildAST((struct node*)node, (struct node*)$1, (struct node*)$3, "op");
     }
     | '(' exp ')' {$$ = $2;}
     | value
     ;

eval:  EVAL '(' exp ')'{
          int value = evalAST((struct node*)$3);
          printf("Rezultatul calculului: %d\n", value);
     }
     ;

TypeOf: TYPEOF '(' exp ')'{
     if(typeofAST((struct node*)$3)!="eroare"){
     printf("Expresia are tipul %s", typeofAST((struct node*)$3));}
     else printf("[error, linia %d]argumentele nu au acelasi tip \n", yylineno);
     }
     ;

lista_apel : funct_param 
           | lista_apel ',' funct_param  
           | ID '(' lista_apel ')' {
                if(existsFunct($1)!=-1){  
                    strcat(typeDecl, returnType($1)); strcat(typeDecl, " "); 
               }                 
               else {printf("[error, linia %d]parametri inexistenti \n", yylineno); return-1;}
           }
           | ID '(' ')'
           | lista_apel ',' ID '(' lista_apel ')' {
               if(existsFunct($3)!=-1){  
                    strcat(typeDecl, returnType($3)); strcat(typeDecl, " "); 
               }                 
               else {printf("[error, linia %d]parametri inexistenti \n", yylineno); return-1;}
           } 
           |
           ;   

funct_param : NR {strcat(typeDecl, "int"); strcat(typeDecl, " "); }
           | STRING {strcat(typeDecl, "string"); strcat(typeDecl, " "); }
           | CHARACTER {strcat(typeDecl, "char"); strcat(typeDecl, " "); }
           | FLOAT_NR {strcat(typeDecl, "float"); strcat(typeDecl, " "); }
           | ID {
               if(existsVar($1, scope)!=-1){  
                    strcat(typeDecl, returnType($1)); strcat(typeDecl, " "); 
               }                 
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
           }
           ;


if : IF '(' condition ')' instr {
          switch(return_value) {
               case 1 :
                    printf("conditia este adevarata\n");
                    break;
               case 0:
                    printf("conditia este falsa\n");
                    break;
               default: printf("eroare la verificarea conditiei\n");
               break;
               
          }
     }
   | IF '(' condition ')' instr ELSE instr{
        switch(return_value) {
               case 1 :
                    printf("conditia este adevarata\n");
                    break;
               case 0:
                    printf("conditia este falsa\n");
                    break;
               default: printf("eroare la verificarea conditiei\n");
               break;

          }
   }
   | IF '(' condition ')' instr ELIF '(' condition ')' instr{
        int loc = return_value;
        switch(loc) {
               case 1 :
                    printf("conditia este adevarata\n");
                    break;
               case 0:
                    printf("conditia este falsa\n");
                    break;
               default: printf("eroare la verificarea conditiei\n");
               break;

          }
   }

   ;

instr: '{' '}'
     | '{'list'}'
     ;

while : WHILE '(' condition ')' instr{
     switch(return_value) {
          case 1 :
               printf("conditia este adevarata\n");
               break;
          case 0:
               printf("conditia este falsa\n");
               break;
          default: printf("eroare la verificarea conditiei\n");
          break;
          
     }
}
      ;

for : FOR '(' statement ';' condition ';' statement ')' instr // for(i=0; i<nr; i=i+1)
    ;


// operators

condition : condition BOOL_OP condition{
               return_condition_op_bool($1, $3, $2);
          }

          | ID VERIFY ID{  // if(@a==@b)
               if(existsVar($1, scope)!=-1 && existsVar($3, scope)!=-1 ){
                    //printf("variabilele %s si %s exista. se poate face verificarea de tip\n", $1, $3);
                    if(typeVerify($1, $3) == 1){ // verific tipul ambelor variabile
                         //printf("variabilele %s si %s au acelasi tip. se poate face verificarea conditiei\n", $1, $3);
                         if(strcmp(returnType($1), "int") == 0){  
                              return_value = return_condition_value_int(returnVal($1) , returnVal($3), $2);
                             $$ = return_value;

                         }
                         if(strcmp(returnType($1), "float") == 0){  
                              return_value = return_condition_value_float(returnVal($1) , returnVal($3), $2);
                              $$ = return_value;
                         }
                         
                    }
                    else {printf("[error, linia %d]variabilele nu au acelasi tip. nu se poate verifica conditia.\n", yylineno); return-1;}
               }
               else
                    {printf("[error, linia %d]variabilele nu exista \n", yylineno); return-1;}
          }
          | NR VERIFY NR {
               return_value = return_condition_value_int($1 , $3, $2);
               $$ = return_value;

          }
          | ID VERIFY NR { 
               if(existsVar($1, scope)!=-1 ){
                    //printf("variabila %s exista. se poate face verificarea de tip\n", $1);
                         if(strcmp(returnType($1), "int") == 0){  
                              return_value = return_condition_value_int(returnVal($1) ,$3, $2);
                              $$ = return_value;
                         }
                         else {printf("[error, linia %d]variabila %s nu are tipul int. nu se poate verifica conditia.\n", yylineno, $1); return-1;}
               }
               else
                    {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
          
          }
          | NR VERIFY ID  {
               if(existsVar($3, scope)!=-1 ){
                    //printf("variabila %s exista. se poate face verificarea de tip\n", $3);
                         if(strcmp(returnType($3), "int") == 0){  
                              return_value = return_condition_value_int($1, returnVal($3), $2);
                              $$ = return_value;
                         }
                         else {printf("[error, linia %d]variabila %s nu are tipul int. nu se poate verifica conditia.\n", yylineno, $3); return-1;}
               }
               else
                    {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
          }
          ;
                
%%
void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     fopen("symbol_table.txt", "w");
     fopen("symbol_table_functions.txt", "w");
     if(!yyparse()){
          printf("Program sintactic corect\n");
          fisier_variables();
          fisier_functions();
     }
} 