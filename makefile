CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

ng38.exe: y.tab.c lex.yy.c y.tab.h
	$(CC) $(LFLAGS) -o ng38 shell.c y.tab.c lex.yy.c envFile.c cd.c ls.c -w -I. 

y.tab.c y.tab.h: action.y
	bison -dy action.y

lex.yy.c: states.lex
	flex states.lex

clean:
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h
	rm -f NG38.exe
