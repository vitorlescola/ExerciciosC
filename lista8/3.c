#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	char sobrenome[50];
	
	printf("Escreva o nome do autor: ");
	fgets(nome,sizeof(nome),stdin);
	nome[strcspn(nome,"\n")]='\0';
	
	printf("Escreva o sobrenome do autor: ");
	fgets(sobrenome,sizeof(sobrenome),stdin);
	sobrenome[strcspn(sobrenome,"\n")]='\0';
	
	strcat(nome," ");
	strcat(nome,sobrenome);
	
	printf("\n%s\n",nome);
	
	return 0;
}
