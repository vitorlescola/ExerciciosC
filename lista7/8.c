#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char lista[100];
	
	printf("Escreva a lista: ");
	fgets(lista,sizeof(lista),stdin);
	lista[strcspn(lista,"\n")]='\0';
	
	return 0;
}
