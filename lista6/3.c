#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[50];
	
	printf("Escreva uma palavra: ");
	fgets(palavra,sizeof(palavra),stdin);
	palavra[strlen(palavra)-1]='\0';
	
	if(strcmp(strrev(palavra),palavra)==0){
		printf("\n%s é um palindromo",palavra);
	}else{
		printf("\n%s não é um palindromo",palavra);
	}
	
	return 0;
}
