#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strcspn(frase,"\n")]='\0';
	
	char *ponteiro=strchr(frase,'a');  //* é ponteiro, strchr() encontra a primeira ocorrência de um caracter
	
	if(ponteiro){  //ve se não esta vazio
		printf("\n%c\n",*ponteiro);
	}else{
		printf("A frase não tem a letra \'a\'");
	}
	
	return 0;
}
