#include "envFile.h"
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>

extern char **environ;


void printFunction(){
	printf("IT WORKS");
}

void init(){
	int i;
	for(i = 0; i < MaxAliasNumber; i++){
		aliasTable[i] = "@F`";
		aliasCommands[i] = "@F`";
	}
}


void setEnv(const char *var, const char *val){
	setenv(var, val, 1);	
}

void unsetEnv(const char *var){
	unsetenv(var);
}

void printEnv(){
	int i = 0; 
	while(environ[i]){
		printf("%s\n", environ[i++]);
	}
}

void pwd(){
	printf("%s", get_current_dir_name());
}

void pwdReDir(char *destination){
	printf("dest: %s\n", destination);
	
}

void wc(char *wcPath){
	pid_t pid;
//	int fd = open("/cise/homes/ngarg/OS/ng38-s-bathroom/shell/action.y", O_RDONLY);
	int fd = open(wcPath, O_RDONLY);
	close(0);
        dup(fd);
	close(fd);
	char *program = "/usr/bin/wc";
	char *param[] = {program,NULL};
	
	execv(program, param);
}

void checkAlias(char *shortcut){
	int i;
	for(i = 0; i < MaxAliasNumber;i++){
		if(strcmp(aliasTable[i], shortcut) == 0){
			/*if(strcmp("ls", aliasCommands[i]) == 0){
				printf("we got ls\n");
			}*/
//			printf("The command associated with %s is !%s!", aliasTable[i], aliasCommands[i]);
				//run the command
	
			if(strcmp(aliasCommands[i] ,"pwd") == 0){
				printf("%s", get_current_dir_name());
				return;
			}
			if(strcmp(aliasCommands[i], "ls") == 0){
				ls();
				return;
			}
			if(strcmp(aliasCommands[i], "ls -al") == 0){
				ls_one_opt("-al");
				return;
			}
			if(strcmp(aliasCommands[i], "ls -la") == 0){
				ls_one_opt("-al");
				return;
			}
			if(strcmp(aliasCommands[i], "cd") == 0){
				cd();
				return;
			}
		}	
	}
}

void printAlias(){
	int i;
	for(i = 0; i < MaxAliasNumber; i++){
		if(aliasTable[i] == "@F`"){
			continue;
		}
		else{
			printf("%s=%s\n",aliasTable[i],aliasCommands[i]);
		}
	}
}

void storeAlias(char *shortcut, char *command){
	int i;
	//alias name already in table previously
	for(i = 0; i < MaxAliasNumber; i++){
		if(strcmp(aliasTable[i], shortcut) == 0){
			aliasCommands[i] = command;
			return;
		}
	}

	for(i = 0; i < MaxAliasNumber; i++){
		if(aliasTable[i] == "@F`"){
			aliasTable[i] = shortcut;
			aliasCommands[i] = command;
			return;
		}
	}
	printf("Sorry, alias table is full");
}

void removeAlias(char *remove){
	int i;
	for(i = 0; i < MaxAliasNumber; i++){
		if(strcmp(aliasTable[i], remove) == 0){
			aliasTable[i] = "@F`";
		}
	}
}








