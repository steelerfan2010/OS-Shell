%{#include <stdio.h>
#include "y.tab.h"

%}
%%


hello		return HELLO;
bye		return BYE;
setenv	        return SETENV;
unsetenv	return UNSETENV;
printenv	return PRINTENV;
cd		return CD;
ls		return LS;
pwd		return PWD;
wc		return WC;
alias		return ALIAS;
unalias		return UNALIAS;

<<EOF>>	{
	printf("\n");
	exit(0);
	}

[><&!|]+			return IOTOKEN;

[A-Za-z0-9]+ 	{
				yylval.str = strdup(yytext);
				return ALPHANUMERIC;
		}
-[A-Za-z0-9]+	{
				yylval.str = strdup(yytext);
				return OPTION;
		}

		
[-A-Za-z0-9_]+ {
				yylval.str = strdup(yytext);
				return VARIABLE;
	       }
				
[-A-Za-z0-9_/~.:]+ {
			yylval.str = strdup(yytext);
			return PATH;
		   }



[-A-Za-z0-9_/:.|]+ {
				yylval.str = strdup(yytext);
				return VALUE;
		   }
		   
"\""[-*? _,<>|&\"@!#%'=~.:/:A-Za-z0-9]+"\"" { yylval.str = strdup(yytext); 
											char *str;
											char *strPlusOne;
											str = yylval.str;
											strPlusOne = yylval.str;
											
											while(*str != '\0') str++;
											str--;
											*str = '\0';
											
											str = yylval.str;
											strPlusOne++;
											while(*strPlusOne != '\0'){
												*str = *strPlusOne;
												str++;
												strPlusOne++;											
											}
											
											str = yylval.str;
											while(*str!='\0') str++;
											str--;
											*str = '\0';
											
											return QUOTES;
											}


\n		return -1;
.		;
%%
