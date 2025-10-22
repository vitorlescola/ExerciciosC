#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[]="Nome Completo da Silva";
	char copia[50];
	
	strcpy(copia,nome);
	
	strcat(copia," Junior");
	
	printf("%s\n%s",nome,copia);
	
	return 0;
}
