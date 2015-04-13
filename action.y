%{#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cd.h"
#include "ls.h"
#include "envFile.h"
#include "shell.h"

//#define MaxEnvVariables 15
	
//	char *variable[MaxEnvVariables];
//	char *value[MaxEnvVariables];
%}

%union {
	char *str;
	double bigNum;
	int num;
}


%token HELLO BYE SETENV UNSETENV PRINTENV CD LS PWD ALPHANUMERIC PATH VALUE VARIABLE OPTION WC IOTOKEN QUOTES
%token ALIAS UNALIAS


%%

commands: /* empty */
	| commands command;

command: 
	hello_case|bye_case|setenv|unsetenv|printenv|cd|ls|pwd|wc|alias|unalias;

hello_case:
	HELLO	{ printf("\t hello back!\n");
			
		 };

bye_case:
	BYE	{ printf("\t Exiting shell. \n");
			exit(0);
		 };

setenv:	
	| SETENV ALPHANUMERIC ALPHANUMERIC { setEnv($<str>2, $<str>3);}
	| SETENV ALPHANUMERIC PATH { setEnv($<str>2, $<str>3);}
	| SETENV ALPHANUMERIC VARIABLE { setEnv($<str>2, $<str>3);}
	| SETENV ALPHANUMERIC VALUE { setEnv($<str>2, $<str>3);}
	| SETENV ALPHANUMERIC OPTION { setEnv($<str>2, $<str>3);}
	| SETENV VARIABLE VALUE { setEnv($<str>2, $<str>3);}
	| SETENV VARIABLE VARIABLE { setEnv($<str>2, $<str>3);}
	| SETENV VARIABLE ALPHANUMERIC { setEnv($<str>2, $<str>3);}	
	| SETENV VARIABLE PATH { setEnv($<str>2, $<str>3);}
	| SETENV VARIABLE OPTION { setEnv($<str>2, $<str>3);}
	;



unsetenv:
	| UNSETENV ALPHANUMERIC   { unsetEnv($<str>2); }
	| UNSETENV VARIABLE { unsetEnv($<str>2); }	
	;

printenv:
	PRINTENV   { 
			printEnv();
			printf("\n");
		   };

cd:
	|  CD	{ cd(); }
	|  CD ALPHANUMERIC  { cdPath($<str>2);  }
	|  CD PATH	{ cdPath($<str>2); };


alias:
	| ALIAS	{ printAlias(); }
	

	| ALIAS ALPHANUMERIC SETENV { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC UNSETENV { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC PRINTENV { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC CD { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC LS { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC PWD { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC WC { storeAlias($<str>2,$<str>3);   }
	


	| ALIAS ALPHANUMERIC ALPHANUMERIC { storeAlias($<str>2,$<str>3);}
	| ALIAS ALPHANUMERIC VARIABLE { storeAlias($<str>2,$<str>3);}
	| ALIAS ALPHANUMERIC PATH { storeAlias($<str>2,$<str>3);}
  	| ALIAS ALPHANUMERIC VALUE { storeAlias($<str>2,$<str>3);}
	| ALIAS ALPHANUMERIC QUOTES { storeAlias($<str>2,$<str>3);}
	
	
	
	
	| ALPHANUMERIC {checkAlias($<str>1);}
	| VARIABLE {checkAlias($<str>1);}
	| PATH {checkAlias($<str>1);}
	| OPTION {checkAlias($<str>1);}
	| VALUE {checkAlias($<str>1);}
	;



ls: /*ANYTHING WITH IOTOKEN IN IT REPRESENTS I/O*/
	/* ls by itself*/
	| LS	{ ls(); }	
	
	| LS IOTOKEN ALPHANUMERIC { ls_reDirect($<str>3); }
	| LS IOTOKEN VARIABLE { ls_reDirect($<str>3);}
	| LS IOTOKEN PATH { ls_reDirect($<str>3); }
	
	/* ls with one option*/
	| LS OPTION { ls_one_opt($<str>2); }	
	
	| LS OPTION IOTOKEN ALPHANUMERIC { ls_one_opt_redirect($<str>4, $<str>2);}
	| LS OPTION IOTOKEN VARIABLE { ls_one_opt_redirect($<str>4, $<str>2);  }
	| LS OPTION IOTOKEN PATH { ls_one_opt_redirect($<str>4, $<str>2);}
	
	/* ls with 2 options*/
	| LS OPTION OPTION { ls_two_opt($<str>2, $<str>3);  }	
	
	| LS OPTION OPTION IOTOKEN ALPHANUMERIC { printf("ls option option > alpha"); }
	| LS OPTION OPTION IOTOKEN VARIABLE { printf("ls option option > variable"); }
	| LS OPTION OPTION IOTOKEN PATH { printf("ls option option > path"); }
	
	/* ls with 1 path */
	| LS ALPHANUMERIC { ls_path($<str>2); }
	| LS VARIABLE { ls_path($<str>2); }
	| LS PATH {   ls_path($<str>2);	  }
	
	| LS ALPHANUMERIC IOTOKEN ALPHANUMERIC { printf("ls path > alpha"); }
	| LS ALPHANUMERIC IOTOKEN VARIABLE	{ printf("ls path > variable"); }
	| LS ALPHANUMERIC IOTOKEN PATH	{ printf("ls path > path"); }
	| LS VARIABLE IOTOKEN ALPHANUMERIC { printf("ls path2 > alpha"); }
	| LS VARIABLE IOTOKEN VARIABLE	{ printf("ls path2 > variable"); }
	| LS VARIABLE IOTOKEN PATH	{ printf("ls path2 > path"); }
	| LS PATH IOTOKEN ALPHANUMERIC { printf("ls path3 > alpha"); }
	| LS PATH IOTOKEN VARIABLE { printf("ls path3 > variable"); }
	| LS PATH IOTOKEN PATH	{ printf("ls path3 > path"); }
	
	/*ls with 1 option and 1 path*/
	| LS OPTION ALPHANUMERIC { ls_one_opt_one_path($<str>2, $<str>3); }
	| LS OPTION VARIABLE { ls_one_opt_one_path($<str>2, $<str>3); }
	| LS OPTION PATH { ls_one_opt_one_path($<str>2, $<str>3); }
	
	| LS OPTION ALPHANUMERIC IOTOKEN ALPHANUMERIC { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); }
	| LS OPTION ALPHANUMERIC IOTOKEN VARIABLE { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); } 
	| LS OPTION ALPHANUMERIC IOTOKEN PATH { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); }
	| LS OPTION VARIABLE IOTOKEN ALPHANUMERIC { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); }
	| LS OPTION VARIABLE IOTOKEN VARIABLE { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); }
	| LS OPTION VARIABLE IOTOKEN PATH { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); }
	| LS OPTION PATH IOTOKEN ALPHANUMERIC { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); }
	| LS OPTION PATH IOTOKEN VARIABLE { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); }
	| LS OPTION PATH IOTOKEN PATH { ls_one_opt_one_path_redirect($<str>5, $<str>2, $<str>3); }
	
	/*ls with 1 path and 1 option*/
	| LS ALPHANUMERIC OPTION { ls_one_path_one_opt($<str>2,$<str>3); }
	| LS VARIABLE OPTION	{ ls_one_path_one_opt($<str>2,$<str>3); }
	| LS PATH OPTION	{ ls_one_path_one_opt($<str>2,$<str>3); }
	
	| LS ALPHANUMERIC OPTION IOTOKEN ALPHANUMERIC { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	| LS ALPHANUMERIC OPTION IOTOKEN VARIABLE { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	| LS ALPHANUMERIC OPTION IOTOKEN PATH { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	| LS VARIABLE OPTION IOTOKEN ALPHANUMERIC { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	| LS VARIABLE OPTION IOTOKEN VARIABLE { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	| LS VARIABLE OPTION IOTOKEN PATH { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	| LS PATH OPTION IOTOKEN ALPHANUMERIC { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	| LS PATH OPTION IOTOKEN VARIABLE { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	| LS PATH OPTION IOTOKEN PATH { ls_one_opt_one_path_redirect($<str>5, $<str>3, $<str>2); }
	
	/*ls with 2 paths*/
	| LS ALPHANUMERIC ALPHANUMERIC { ls_two_path($<str>2, $<str>3); }
	| LS ALPHANUMERIC ALPHANUMERIC IOTOKEN ALPHANUMERIC { printf("ls path path > alpha"); }
	| LS ALPHANUMERIC ALPHANUMERIC IOTOKEN VARIABLE { printf("ls path path > variable"); }
	| LS ALPHANUMERIC ALPHANUMERIC IOTOKEN PATH { printf("ls path path > path"); }
	
	| LS ALPHANUMERIC VARIABLE	{ ls_two_path($<str>2, $<str>3); }
	| LS ALPHANUMERIC VARIABLE IOTOKEN ALPHANUMERIC { printf("ls path path1 > alpha"); }
	| LS ALPHANUMERIC VARIABLE IOTOKEN VARIABLE { printf("ls path path1 > variable"); }
	| LS ALPHANUMERIC VARIABLE IOTOKEN PATH { printf("ls path path1 > path"); }
	
	| LS ALPHANUMERIC PATH	{ ls_two_path($<str>2, $<str>3); }
	| LS ALPHANUMERIC PATH IOTOKEN ALPHANUMERIC { printf("ls path path2 > alpha"); }
	| LS ALPHANUMERIC PATH IOTOKEN VARIABLE { printf("ls path path2 > variable"); }
	| LS ALPHANUMERIC PATH IOTOKEN PATH { printf("ls path path2 > path"); }
	
	| LS VARIABLE ALPHANUMERIC	{ ls_two_path($<str>2, $<str>3);}
	| LS VARIABLE ALPHANUMERIC IOTOKEN ALPHANUMERIC { printf("ls path path3 > alpha"); }
	| LS VARIABLE ALPHANUMERIC IOTOKEN VARIABLE { printf("ls path path3 > variable"); }
	| LS VARIABLE ALPHANUMERIC IOTOKEN PATH { printf("ls path path3 > path"); }
	
	| LS VARIABLE VARIABLE	{ ls_two_path($<str>2, $<str>3); }
	| LS VARIABLE VARIABLE IOTOKEN ALPHANUMERIC { printf("ls path path4 > alpha"); }
	| LS VARIABLE VARIABLE IOTOKEN VARIABLE { printf("ls path path4 > variable"); }
	| LS VARIABLE VARIABLE IOTOKEN PATH { printf("ls path path4 > path"); }
	
	| LS VARIABLE PATH	{ ls_two_path($<str>2, $<str>3); }
	| LS VARIABLE PATH IOTOKEN ALPHANUMERIC { printf("ls path path5 > alpha"); }
	| LS VARIABLE PATH IOTOKEN VARIABLE { printf("ls path path5 > variable"); }
	| LS VARIABLE PATH IOTOKEN PATH { printf("ls path path5 > path"); }
	
	| LS PATH ALPHANUMERIC	{ ls_two_path($<str>2, $<str>3); }
	| LS PATH ALPHANUMERIC IOTOKEN ALPHANUMERIC { printf("ls path path6 > alpha"); }
	| LS PATH ALPHANUMERIC IOTOKEN VARIABLE { printf("ls path path6 > variable"); }
	| LS PATH ALPHANUMERIC IOTOKEN PATH { printf("ls path path6 > path"); }
	
	| LS PATH VARIABLE	{ ls_two_path($<str>2, $<str>3); }
	| LS PATH VARIABLE IOTOKEN ALPHANUMERIC { printf("ls path path7 > alpha"); }
	| LS PATH VARIABLE IOTOKEN VARIABLE { printf("ls path path7 > variable"); }
	| LS PATH VARIABLE IOTOKEN PATH { printf("ls path path7 > path"); }
	
	| LS PATH PATH	{ ls_two_path($<str>2, $<str>3); }
	| LS PATH PATH IOTOKEN ALPHANUMERIC { printf("ls path path8 > alpha"); }
	| LS PATH PATH IOTOKEN VARIABLE { printf("ls path path8 > variable"); }
	| LS PATH PATH IOTOKEN PATH { printf("ls path path8 > path"); }
	
	;

pwd:
	| PWD
		{ pwd(); }
	| PWD IOTOKEN ALPHANUMERIC	{ pwdReDir($<str>3); }
	| PWD IOTOKEN VARIABLE	{printf("pwd > variable");}
	| PWD IOTOKEN PATH	{printf("pwd > path");}
	;
wc:
	/*wc by itself */
	| WC	{ printf("WC needs params"); }
	| WC IOTOKEN ALPHANUMERIC	{ printf("wc needs params"); }
	| WC IOTOKEN VARIABLE	{ printf("wc needs params"); }
	| WC IOTOKEN PATH	{ printf("wc needs params"); }
	
	/* wc with 1 parameter*/
	| WC ALPHANUMERIC  {wc($<str>2); }
	| WC ALPHANUMERIC IOTOKEN ALPHANUMERIC	{	printf("wc 1 param > alpha");}
	| WC ALPHANUMERIC IOTOKEN VARIABLE	{	printf("wc 1 param > variable");}
	| WC ALPHANUMERIC IOTOKEN PATH	{	printf("wc 1 param > path");}
	| WC PATH  { wc($<str>2); }	
	| WC PATH IOTOKEN ALPHANUMERIC	{	printf("wc 1 param1 > alpha");}
	| WC PATH IOTOKEN VARIABLE	{	printf("wc 1 param1 > variable");}
	| WC PATH IOTOKEN PATH	{	printf("wc 1 param1 > path");}
	
	/* wc with 2 parameters */
	| WC ALPHANUMERIC ALPHANUMERIC {printf("wc alpha alpha");}
	| WC ALPHANUMERIC ALPHANUMERIC IOTOKEN ALPHANUMERIC	{printf("wc 2 params > alpha");}
	| WC ALPHANUMERIC ALPHANUMERIC IOTOKEN VARIABLE	{printf("wc 2 params > variable");}
	| WC ALPHANUMERIC ALPHANUMERIC IOTOKEN PATH	{printf("wc 2 params > path");}
	
	| WC ALPHANUMERIC PATH	{printf("wc alpha path");}
	| WC ALPHANUMERIC PATH IOTOKEN ALPHANUMERIC	{printf("wc 2 params1 > alpha");}
	| WC ALPHANUMERIC PATH IOTOKEN VARIABLE	{printf("wc 2 params1 > variable");}
	| WC ALPHANUMERIC PATH IOTOKEN PATH	{printf("wc 2 params1 > path");}
	
	| WC PATH ALPHANUMERIC	{printf("wc path alpha");}
	| WC PATH ALPHANUMERIC IOTOKEN ALPHANUMERIC	{printf("wc 2 params2 > alpha");}
	| WC PATH ALPHANUMERIC IOTOKEN VARIABLE	{printf("wc 2 params2 > variable");}
	| WC PATH ALPHANUMERIC IOTOKEN PATH	{printf("wc 2 params2 > path");}
	
	| WC PATH PATH	{printf("wc path path");}
	| WC PATH PATH IOTOKEN ALPHANUMERIC	{printf("wc 2 params3 > alpha");}
	| WC PATH PATH IOTOKEN VARIABLE	{printf("wc 2 params3 > variable");}
	| WC PATH PATH IOTOKEN PATH	{printf("wc 2 params3 > path");}
	;


alias:
	| ALIAS	{ printAlias(); }
	/*
	| ALIAS ALPHANUMERIC SETENV { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC UNSETENV { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC PRINTENV { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC CD { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC LS { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC PWD { storeAlias($<str>2,$<str>3);   }
	| ALIAS ALPHANUMERIC WC { storeAlias($<str>2,$<str>3);   }
	*/
	
	| ALIAS ALPHANUMERIC ALPHANUMERIC { storeAlias($<str>2,$<str>3);}
	| ALIAS ALPHANUMERIC VARIABLE { storeAlias($<str>2,$<str>3);}
	| ALIAS ALPHANUMERIC PATH { storeAlias($<str>2,$<str>3);}
  	| ALIAS ALPHANUMERIC VALUE { storeAlias($<str>2,$<str>3);}
	
	
	
	
	| ALPHANUMERIC {checkAlias($<str>1);}
	| VARIABLE {checkAlias($<str>1);}
	| PATH {checkAlias($<str>1);}
	| OPTION {checkAlias($<str>1);}
	| VALUE {checkAlias($<str>1);}
	;


unalias:
	UNALIAS	ALPHANUMERIC{ removeAlias($<str>2); };
