#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase1[50];
	char frase2[50];
	
	printf("Escreva uma frase: ");
	fgets(frase1,sizeof(frase1),stdin);
	frase1[strlen(frase1)-1]='\0';
	
	printf("Escreva outra frase: ");
	fgets(frase2,sizeof(frase2),stdin);
	frase2[strlen(frase2)-1]='\0';
	
	if(strcmp(frase1,frase2)==0){
		printf("\nAs duas frases são iguais");
	}else{
		printf("\nAs duas frases são diferentes");
	}
	
	return 0;
}
