#include <stdio.h>

int main(){
  	int bytes_read;
  	int nbytes = 100;
  	char *my_string;

  	puts ("Please enter a line of text.");

  	my_string = (char *) malloc (nbytes + 1);
	int i = 0;
	while(4){
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
  return 0;
}
