#include <stdio.h>
#include <string.h>
#include <stdlib.h>


extern FILE* yyin;
extern char* yytext;
extern int yylineno; 

union valueF{
    int intVal;
    float floatVal;
    char strVal[101]; //const char
    char* charVal; // character
};

struct function{
     char name[50];
     char type[50];
     union valueF valoare;
     char params[100];
     char numeparametru[100];
     char scope[100];
}funct[100];

int noFunct=0;

void paramsTypeVerify(char* name, char* typeDecl){ 
     int i=0;
     char typeDef[100];
     for( i = 0; i < noFunct; i++){ // caut functia ca sa ii iau parametrii definiti
          if(strcmp(funct[i].name, name)==0){
               strcpy(typeDef, funct[i].params);
               break;
          }          
     }

     if(typeDecl[0]==' ')
     strcpy(typeDecl, typeDecl+1);
     printf("toti parametrii declarati: %s.\n", typeDecl);
     if(typeDef[0]==' ')
     strcpy(typeDef, typeDef+1);
     printf("toti parametrii definiti: %s.\n", typeDef);
     
     char typeDef_modified[100];
     char *p=strtok(typeDef, " ");

     int k=3;
     strcpy(typeDef_modified, "");
     while(p!=NULL){
          if(k%2==1){
               strcat(typeDef_modified,p);
               strcat(typeDef_modified, " ");
          }
          k++;
          p=strtok(NULL, " ");
     }
     char typeDecl_copy[100];
     strcpy(typeDecl_copy, typeDecl);
     
     if(typeDecl == NULL)
         printf("parametrii nu sunt la fel\n");
     else{
          if(strcmp(typeDef_modified, typeDecl_copy) == 0) // string null
               printf("parametrii sunt la fel\n");
          else{ printf("parametrii nu sunt la fel\n");
          }
     }     
}

int insertFunct(char* name, char* type, char* params, char *scope){ // insereaza variabila in tabel
    int i=0;
    for(i = 0; i < noFunct; i++){
        if(strcmp(funct[i].name, name)==0)
            return -1; //  o variabila a fost deja declarata
    }
     
     strcpy(funct[noFunct].name, name);
     strcpy(funct[noFunct].type, type);
     strcpy(funct[noFunct].params, params);
     strcpy(funct[noFunct].scope, scope);
     noFunct++;
     return 0; // variabila nu a fost declarata anterior si s-a scris acum in tabel

}

int existsFunct(char *s){
    int i = 0;
    for(i = 0; i < noFunct; i++){
        if(strcmp(s, funct[i].name) == 0){
             return i; // pozitia la care o gasesc
        }
            
    }
    return -1;
}

int FunctScope(char *s){
     int i = 0;
     for(i = 0; i < noFunct; i++){
        if(strcmp(s, funct[i].name) == 0 ){
             if(strcmp(funct[i].scope, "clase") == 0){
                   return i; 
             }
             else return -1; // cazul global, local, main
        }   
    }
    return -1;
}

void tabelFunct(){
     printf("\nTabel functii:\n");
     int i=0;
     for(i = 0; i < noFunct; i++){
         printf("name: %s, ", funct[i].name);
         printf("type: %s, ", funct[i].type);
         printf("params: %s ", funct[i].params);
         printf("scope: %s", funct[i].scope);
         printf("\n");
    }
    
}

void fisier_functions()
{
     FILE *fptr;
     fptr = fopen("symbol_table_functions.txt", "w");

     if(fptr == NULL)
     {
          printf("Error!");   
          exit(1);             
     }

     int i = 0;

     for(i = 0; i < noFunct; i++){

          fprintf(fptr, "name: %s , ", funct[i].name);
          fprintf(fptr, "type: %s , ", funct[i].type);
          fprintf(fptr, "params: %s ", funct[i].params);
          fprintf(fptr, "scope: %s ", funct[i].scope);
          fprintf(fptr, "\n");

    }
     fclose(fptr);

}

