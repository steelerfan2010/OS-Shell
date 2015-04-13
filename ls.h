#ifndef ls_H_
#define ls_H_
#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char lsUse[100];

void ls();
void ls_reDirect(char *outFile);
void ls_one_opt_redirect(char *outFile, char *opt);
void ls_one_opt_one_path_redirect(char *outFile, char *opt, char *path);
void ls_one_opt(const char *option);
void ls_two_opt(char *option1, char *option2);
void ls_path(char *lsPath);
void ls_one_opt_one_path(char *option, char *path);
void ls_one_path_one_opt(char *path, char *option);
void ls_two_path(char *lsPath1, char *lsPath2);
void backTrackLS(char *pointer, int amount);

#endif
