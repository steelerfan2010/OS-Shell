#ifndef envFile_H_
#define envFile_H_
#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *aliasTable[MaxAliasNumber];
char *aliasCommands[MaxAliasNumber];

void printFunction();

//void init(char *variable[], char *value[], int maxSize);
void init();

void setEnv(const char *var, const char *val);
void unsetEnv(const char *var);
void printEnv();
void pwd(); 
void pwdReDir(char *destination);
void wc(char *wcPath);
void checkAlias(char *shortcut);
void printAlias();
void storeAlias(char *shortcut, char *command);
void removeAlias(char *remove);

#endif
