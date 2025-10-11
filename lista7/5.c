#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	char sufixo[10];
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strcspn(frase,"\n")]='\0';
	
	printf("Escreva o sufixo: ");
	fgets(sufixo,sizeof(sufixo),stdin);
	sufixo[strcspn(sufixo,"\n")]='\0';
	
	strcat(frase,sufixo);
	
	printf("\n%s\n",frase);
	
	return 0;
}
