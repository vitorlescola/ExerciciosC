#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char livro[50];
	char nova[6];
	
	printf("Escreva o nome do livro: ");
	fgets(livro,sizeof(livro),stdin);
	livro[strcspn(livro,"\n")]='\0';
	
	strncpy(nova,livro,5);
	
	printf("\n%s\n",nova);
	
	return 0;
}
