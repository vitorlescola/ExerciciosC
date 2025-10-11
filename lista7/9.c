#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	char sub[50];
	int quant=0;
	int i;
	int j;
	
	printf("Escreva uma string: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strcspn(frase,"\n")]='\0';
	
	printf("Escreva uma substring: ");
	fgets(sub,sizeof(sub),stdin);
	sub[strcspn(sub,"\n")]='\0';
	
	for(i=0;i<strlen(frase);i++){
		//if()
	}
	
	return 0;
}
