#ifndef shell_H_
#define shell_H_
#include <stdio.h>

#define MaxEnvVariables 15
#define MaxPathLength 50
#define MaxAliasNumber 5

extern int yylineno;


int yyerror(char *s);
int yywrap();
char *variable[15];
char *value[15];


#endif
