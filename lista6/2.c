#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	char sobrenome[50];
	
	printf("Escreva o seu nome: ");
	fgets(nome,sizeof(nome),stdin);
	nome[strlen(nome)-1]='\0';
	
	printf("Escreva o seu sobrenome: ");
	fgets(sobrenome,sizeof(sobrenome),stdin);
	sobrenome[strlen(sobrenome)-1]='\0';
	
	strcat(nome," ");
	strcat(nome,sobrenome);
	
	printf("\n%s",nome);
	
	return 0;
}
