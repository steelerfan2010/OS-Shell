#include "cd.h"
#include <unistd.h>
#include <sys/types.h>

void cd(){
	chdir(getenv("HOME"));
}

void cdPath(const char *path){
	char goHere[MaxPathLength];
	char *home = getenv("HOME");

	char *current = get_current_dir_name();	
	int currLength = strlen(current);
	int homeLength = strlen(home);

	int length = strlen(path);
	int i;

	if(strlen(path) == 1){
		if(path[0] == '~'){
			chdir(home);
			return;
		}
		else if(path[0] == '/'){
			chdir("/");
			return;
		}
	}

	if(strlen(path) == 2){
		if(path[0] == '~' && path[1] == '/'){
			chdir(home);
			return;
		}
		if(path[0] == '.' && path[1] == '.'){
			backTrack(current, 1);
			chdir(whatever);
			return;
		}
	}

	if(path[0] == '/'){
		char changeHere[length];
		for(i = 0; i < length; i++){
			changeHere[i] = path[i];
		}
		chdir(changeHere);
		return;
	}

	if(path[0] == '~' && path[1] == '/'){
		if(length > 3){
			if(path[2] == '.' && path[3] == '.'){
				//backtrack
				// ~/../abc
				backTrack(home,1);
				printf("!%s!", whatever);
//				printf(strlen(whatever));
				int counter = 0;
				

				while(whatever[counter] != '\0'){
					counter++;
				}
	
				char changeHere0[counter+2];

				for(i = 0; i < counter; i++){
					changeHere0[i] = whatever[i];
					printf("i: %d\n", i);
					printf("VALUE: %c\n", changeHere0[i]);
					printf("NG val: %c\n", whatever[i]);
				}
//				printf("count: %d", counter);
				
//				for(i = 0; i < length-4; i++){
//					changeHere0[counter+i] = path[4+i];
//				}
				printf("count: %d", counter);
				printf("HEREERERE: %s!", changeHere0);
				printf("AFTER");
			}
			else{
				char changeHere2[length-1+homeLength];
				for(i = 0; i < homeLength; i++){
					changeHere2[i] = current[i];
				}
				for(i = 0; i < length; i++){
					changeHere2[i+homeLength] = path[i+1];
				}
				chdir(changeHere2);
				return;
			}
		}
	}		

	if(path[0] == '.' && path[1] == '/'){
		char changeHere3[length-1+currLength];
		for(i = 0; i < currLength; i++){
			changeHere3[i] = current[i];
		}
		for(i = 0; i < length; i++){
			changeHere3[i+currLength] = path[i+1];
		}
		chdir(changeHere3);
		return;	
	}

	//../../abc
	if(path[0] == '.' && path[1] == '.' && path[2] == '/'){
		if(strlen(path) > 4){
			if(path[3] == '.' && path[4] == '.'){
				backTrack(current, 2);

				if(strlen(path) < 7){
					chdir(whatever);
					return;
				}
				else{
					// ../../abc
					int counts = 0;
					while(whatever[counts] != '\0'){
						counts++;
					}
					char changeHere6[counts+length];
					for(i = 0; i < counts; i++){
						changeHere6[i] = whatever[i];
					}
					for(i = 0; i < length; i++){
						changeHere6[i+counts] = path[5+i];
					}
					chdir(changeHere6);		
					return;
				}	
			}
		}

		backTrack(current, 1);
		int count = 0;
		while(whatever[count] != '\0'){
			count++;
		}

		char changeHere5[length+count];
		for(i = 0; i < count; i++){
			changeHere5[i] = whatever[i];
		}

		for(i = 0; i < length; i++){
			changeHere5[i+count] = path[2+i];
		}

		chdir(changeHere5);
	}

	if(path[0] != '/' && path[0] != '~' && path[0] != '.'){
		char changeHere4[length+currLength];
		for(i = 0; i < currLength; i++){
				changeHere4[i] = current[i];
		}
		changeHere4[currLength] = '/';
		for(i = 0; i < length; i++){
			changeHere4[i+currLength+1] = path[i];
		} 
		chdir(changeHere4);
		return;
	}
}

//cd
void backTrack(char *pointer, int amount){
		//might need to initalize whatever to all nulls.
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
                whatever[i] = *temp;
                i++;
                temp++;
        }
}
