#include "ls.h"
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

void ls(){
	pid_t pid;
	char *lsPath = get_current_dir_name();
	char *parmList[] = { "/bin/ls", "--color=auto", lsPath, NULL};

	if((pid = fork()) == -1){
		perror("fork error");
	}
	else if(pid == 0){
		execv("/bin/ls", parmList);
		printf("return not expected");
	}
}

void ls_reDirect(char *outFile){
	int fd = open(outFile, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

        dup2(fd, 1);   // make stdout go to file

        char *lsRePath = get_current_dir_name();
        char *params[] =  { "/bin/ls", NULL, lsRePath, NULL};

        execv("/bin/ls", params);
//            close(fd);
	
}

void ls_one_opt_redirect(char *outFile, char *option){
	int fd = open(outFile, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

        dup2(fd, 1);   // make stdout go to file

        char *lsRePath = get_current_dir_name();
        char *params[] =  { "/bin/ls", option, lsRePath, NULL};

        execv("/bin/ls", params);

}

void ls_one_opt_one_path_redirect(char *outFile, char *option, char *path){
	 int fd = open(outFile, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

        dup2(fd, 1);   // make stdout go to file

        char *lsRePath = get_current_dir_name();
        char *params[] =  { "/bin/ls", option, path, NULL};

        execv("/bin/ls", params);

}

void ls_one_opt(const char *option){
	pid_t pid;
        char *lsPath = get_current_dir_name();
        char *parmList[] = { "/bin/ls", option, lsPath, NULL};

        if((pid = fork()) == -1){
                perror("fork error");
        }
        else if(pid == 0){
                execv("/bin/ls", parmList);
                printf("return not expected");
        }
}

void ls_two_path_redirect(char *outFile, char *path1, char *path2){
	 int fd = open(outFile, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

        dup2(fd, 1);   // make stdout go to file

        char *lsRePath = get_current_dir_name();
        char *params[] =  { "/bin/ls", NULL, path1, NULL};

        execv("/bin/ls", params);

	 int fd2 = open(outFile, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

        dup2(fd2, 1);   // make stdout go to file

        char *lsRePath2 = get_current_dir_name();
        char *params2[] =  { "/bin/ls", NULL, path2, NULL};

        execv("/bin/ls", params2);

	
}

void ls_two_opt(char *option1, char *option2){
	
	int i =0;
	option1++; //now at first character after the '-'
	option2++; //now at first char after the '-'
	
	while (i<100){ //initialize the array to all nulls in case it was used elsewhere
		lsUse[i] = '\0';
		i++;
	}
	
	lsUse[0] = '-'; //in the case of 2 options being used the beginning is always a dash
	
	i=1; 
	while(*option1 != '\0'){
		lsUse[i] = *option1;
		option1++;
		i++;		
	}
	while(*option2 != '\0'){
		lsUse[i] = *option2;
		option2++;
		i++;
	}
	option1 = lsUse;
	ls_one_opt(option1);
}

void ls_path(char *lsPath){
	/*
	ls ~/abc	home + abc
	ls ../abc	back1 + abc
	ls ./asb	(current direct + asb
	ls abc/		curr _ abc
*/
//	pid_t pid;
	
//	char goHere[MaxPathLength];
//	char *home = getenv("HOME");
	char *current = get_current_dir_name();
//	int currLength = strlen(current);
//	int homeLength = strlen(home);

//	char *oldAddress = lsPath;

	cdPath(lsPath);
	ls();
	chdir(current);
}

//garbage case needs to be handled
void ls_one_opt_one_path(char *option, char *path){
	char *current = get_current_dir_name();
	cdPath(path);
	ls_one_opt(option);
	chdir(current);
}


void ls_one_path_one_opt(char *path, char *option){
	ls_one_opt_one_path(option, path);
}

void ls_two_path(char *lsPath1, char *lsPath2){
	char *current = get_current_dir_name();

	cdPath(lsPath1);
	ls();
	printf("\n");
	cdPath(lsPath2);
	chdir(current);
}

//ls
void backTrackLS(char *pointer, int amount){
		int abc = 0;
		while(abc<100){
			lsUse[abc] = '\0';
			abc++;
		}
        char *temp;
        temp = pointer;

        int counter = 0;

        while(*pointer != '\0') {
                if(*pointer == '/') { //keep track of the number of /'s in the path
                        counter++;
                }
                pointer++;
        }

        if(counter < amount) {
                        printf("Too many /'s to delete\n");
                        return;
        }
        pointer--;

        while(amount>0){
                if(*pointer == '/'){
                        amount--;
                }
                pointer--;
        }
        pointer++;

        int i = 0;
        while(temp!=pointer){
                lsUse[i] = *temp;
                i++;
                temp++;
        }
}
