#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char livro[]="Nome do livro";
	char nome[]="Nome do autor";
	int i;
	int p=0;
		
	for(i=0;i<strlen(nome);i++){
		if(nome[i]==32&&p==0){
			p=i;
		}
	}
	
	strcat(livro,"-");
	strncat(livro,nome,p);
	
	printf("%s",livro);
	
	return 0;
}
