#ifndef TABLELEXICO_H
#define TABLELEXICO_H

#define MAX 500
#define H_LEN 30

typedef struct lgnTblLex_s{
	int longeur;
	char * lexeme;
	int suivant;
}lgnTblLex;

lgnTblLex tblLex[MAX];
int TableHcode[H_LEN];
int insererLexeme(char * l);
//char * getlexeme(int numlexico);
void afficheTableLexico();
void initTblLexeme();
int chercherLexeme(char* lexeme);


#endif
