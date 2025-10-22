#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char livro1[50];
	char livro2[50];
	
	printf("Escreva o nome do primeiro livro: ");
	fgets(livro1,sizeof(livro1),stdin);
	livro1[strcspn(livro1,"\n")]='\0';
	
	printf("Escreva o nome do segundo livro: ");
	fgets(livro2,sizeof(livro2),stdin);
	livro2[strcspn(livro2,"\n")]='\0';
	
	if(strncmp(livro1,livro2,3)==0){
		printf("\nOs titulos são iguais ate o terceiro caracter\n");
	}else{
		printf("\nOs titulos são diferentes\n");
	}
	
	return 0;
}
