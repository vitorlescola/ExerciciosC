#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char livro[50];
	
	printf("Escreva o titulo do livro: ");
	fgets(livro,sizeof(livro),stdin);
	livro[strcspn(livro,"\n")]='\0';
	
	char pLivro=strstr(livro,"The");
	
	if(pLivro){
		printf("Posição de \"The\" na memoria: %p",pLivro);
	}
	return 0;
}
