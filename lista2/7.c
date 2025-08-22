#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[100];
	char senha[100];
	char nomeA[100];
	char senhaA[100];
	
	printf("Escreva um nome: ");
	scanf(" %100s", &nome);
	
	printf("Escreva uma senha: ");
	scanf(" %100s", &senha);
	
	printf("\nEscreva a sua nome: ");
	scanf(" %100s", &nomeA);
	
	printf("Escreva a sua senha: ");
	scanf(" %100s", &senhaA);
	
	if(strcmp(nome, nomeA)==0&&strcmp(senha, senhaA)==0){
		printf("\nAcesso concedido");
	}else{
	      printf("\nAcesso negado");	
	} 
}
