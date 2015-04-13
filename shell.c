#include "shell.h"

int interactive;

int main(void){
   	int bytes_read;
        int nbytes = 100;
        char *my_string;


	my_string = (char *) malloc (nbytes + 1);
	init(MaxEnvVariables);
        //read in?
/*
	int i = 0;
        while(i < 10){
                bytes_read = getline (&my_string, &nbytes, stdin);

                if (bytes_read == -1){
                        break;
                        puts ("ERROR!");
                }
                else {
                        puts ("You typed:");
                        puts (my_string);
                }
                i++;
        }

	int j = 0;
*/

	interactive = isatty(fileno(stdin)) && isatty(fileno(stdout));

	if(interactive){

		while(4){
			printf("NG38: ");
			yyparse();
			printf("\n");
		}

	}

	else{
		while(4){
			yyparse();
		}
	}
  
      return 0;
}

int yyerror(char *s){
        fprintf(stderr, "line: %d: %s\n", yylineno, s);
        return 0;
}

int yywrap(){
        return 1;
}

