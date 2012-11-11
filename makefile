CC=gcc
CFLAGS= -Wall

main : lex.yy.o y.tab.c Table_lexico.o Table_des_type.o buffer.o Pile_regions.o Table_declarations.o
	$(CC) $(CFLAGS) -o projet $^ -ly -ll

lex.yy.o : lex.yy.c y.tab.c
	$(CC) -c lex.yy.c

lex.yy.c :
	lex projet.l

y.tab.c :
	yacc -d -v projet.y

Table_lexico.o : Table_lexico.c Table_lexico.h
	$(CC) $(CFLAGS) -c $^

Table_des_type.o: Table_des_type.h Table_des_type.c
	$(CC) $(CFLAGS) -c $^

Table_declarations.o : Table_declarations.c Table_declarations.h
	$(CC) $(CFLAGS) -c $^

buffer.o : buffer.c buffer.h
	$(CC) $(CFLAGS) -c $^

Pile_regions.o : Pile_regions.h Pile_regions.c
	$(CC) $(CFLAGS) -c $^

# Nettoie, compile et exécute
all : clean main clear exec

clear :
	clear

# Execution
exec :
	@./projet < test.txt

# Pour les tests
test : test.c Table_declarations.c Table_declarations.h
	$(CC) $(CFLAGS) -o test $^

clean :
	@rm *.o lex.yy.c y.tab.c y.tab.h projet y.output test ;echo "\nRépertoire néttoyé !\n"
