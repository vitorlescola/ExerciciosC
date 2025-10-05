#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	char copia[50];
	
	printf("Escreva o seu nome: ");
	fgets(nome,sizeof(nome),stdin);
	nome[strlen(nome)-1]='\0';
	
	strcpy(copia,nome);
	
	printf("\n%s",copia);
	
	return 0;
}
