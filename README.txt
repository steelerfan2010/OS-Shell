Team Name: SYSERROR
Team Members: Will Livesey, Neil Garg

In order to compile copy all files into one directory, type "make" 
To run the shell type "./ng38"
To test the shell with a file of commands (such as test.txt) type "./ng38 < test.txt
To get the output of this type: "./ng38 < test.txt > outputFile.txt"

IMPORTANT NOTE: WC and the output operator '>' end our shell, so if you have them in the list of 
commands it will terminate early because of this.

NOT completed:
	-Some of the input/output operators (&, 2>, >>) SEE PARTIALLY DONE section
	-Pipeling
	-Wildcards (*,?)

Completed:
	-setenv
	-printenv
	-unsetenv
	-pwd
	-ls (with parameters [~, ../, etc]
	-cd (with parameters [~, ../, etc]
	-bye
	-unalias

Partially Done:
	-WC will display the stats correctly, but it will end out shell
	-The output operator '>' will make a new file, but will also end our shell
	-The input operator '<' won't work inside the shell. You can do ./ng38 < someInputFile.txt though
	-Aliasing, you can alias commands but they have to be in quotes
		ex: alias abc "ls -al"
		when you type abc it will execute ls -al
		If it's not in quotes it won't work.
	-alias will overwrite anything in there
	-typing just "alias" will display the aliases"


Side Note:
	Just realized glob() was how to do wildcard operators. Given more time we would have implemented it


Have a good day. 
