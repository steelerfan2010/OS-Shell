#include <stdio.h>
#include <string.h>

int main ()
{
   char command[50];

   strcpy( command, "ls -al > work.txt" );
   system(command);

   return(0);
} 
