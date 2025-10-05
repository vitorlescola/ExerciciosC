#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	char palavras[50][50];
	int quant=0;
	int i;
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strlen(frase)-1]='\0';
	
	return 0;
}
