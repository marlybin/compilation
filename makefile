CC=gcc
CFLAGS= -Wall

# Nettoie, compile et exécute
<<<<<<< HEAD
all : clean main exec
=======
all : clean main clear exec
>>>>>>> 1eb6962c7f26755c779a8a421b48ea3e74592498


main : lex.yy.o y.tab.c TableLexico.o TableType.o buffer.o PileRegions.o TableDeclarations.o TableRegions.o Arbre.o 
	$(CC) $(CFLAGS) -o projet $^ -ly -ll

lex.yy.o : lex.yy.c y.tab.c
	$(CC) -c lex.yy.c

lex.yy.c :
	lex projet.l

y.tab.c :
	yacc -d -v projet.y

TableLexico.o : TableLexico.c TableLexico.h
	$(CC) $(CFLAGS) -c $^

TableType.o: TableType.h TableType.c
	$(CC) $(CFLAGS) -c $^

TableDeclarations.o : TableDeclarations.c TableDeclarations.h
	$(CC) $(CFLAGS) -c $^

buffer.o : buffer.c buffer.h
	$(CC) $(CFLAGS) -c $^

TableRegions.o : TableRegions.h TableRegions.c
	$(CC) $(CFLAGS) -c $^


PileRegions.o : PileRegions.h PileRegions.c
	$(CC) $(CFLAGS) -c $^

Arbre.o : Arbre.h Arbre.c
	$(CC) $(CFLAGS) -c $^

clear :
	clear

# Execution
exec :
<<<<<<< HEAD
	@./projet < ./tests/basic.cpyrr
=======
	@./projet < test.txt
>>>>>>> 1eb6962c7f26755c779a8a421b48ea3e74592498

# Pour les tests
test : test.c Arbre.h Arbre.c
	$(CC) $(CFLAGS) -o test $^

clean :
	@rm *.o lex.yy.c y.tab.c y.tab.h projet y.output test ;echo "\nRépertoire néttoyé !\n"
