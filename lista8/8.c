#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strcspn(frase,"\n")]='\0';
	
	char *ponteiro=strchr(frase,'a');  //* � ponteiro, strchr() encontra a primeira ocorr�ncia de um caracter
	
	if(ponteiro){  //ve se n�o esta vazio
		printf("\n%c\n",*ponteiro);
	}else{
		printf("A frase n�o tem a letra \'a\'");
	}
	
	return 0;
}
