#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char string[50];
	char substring[10];
	int inicio;
	int tamanho;
	int i;
	int j;
	
	printf("Escreva uma string: ");
	fgets(string,sizeof(string),stdin);
	string[strlen(string)-1]='\0';
	
	printf("Escreva a posição inicial da substring: ");
	scanf("%d",&inicio);
	
	printf("Escreva o tamanho da substring: ");
	scanf("%d",&tamanho);
	
	for(i=inicio,j=0;j<=tamanho;i++,j++){
		substring[j]=string[i];
	}
	
	printf("\n%s",substring);
	
	return 0;
}
