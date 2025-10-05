#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	
	printf("Escreva seu nome: ");
	fgets(nome,sizeof(nome),stdin);
	nome[strlen(nome)-1]='\0';
	
	strrev(nome);
	
	printf("\n%s",nome);
	
	return 0;
}
