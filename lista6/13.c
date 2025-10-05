#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase1[50];
	char frase2[50];
	
	printf("Escreva uma frase com prefixo: ");
	fgets(frase1,sizeof(frase1),stdin);
	frase1[strlen(frase1)-1]='\0';
	
	printf("Escreva outra frase com prefixo: ");
	fgets(frase2,sizeof(frase2),stdin);
	frase2[strlen(frase2)-1]='\0';
	
	return 0;
}
