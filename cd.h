#ifndef cd_H_
#define cd_H_
#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char whatever[50];

void cd();
void cdPath(const char *path);
void backTrack(char *pointer, int amount);


#endif
