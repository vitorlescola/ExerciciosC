#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[]="Nome da Silva";
	char sobrenome[30];
	char *espaco=strchr(nome,' ');
	
	strcpy(sobrenome,espaco+1);  //+1 para tirar o espaço
	
	printf("%s",sobrenome);
	
	return 0;
}
