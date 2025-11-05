#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("texto.txt","r");
	
	if(pArquivo==NULL){
		printf("Erro ao ler arquivo");
		
		return 1;
	}
	
	char palavra[10];
	char texto[100];
	int quant=0;
	
	printf("Escreva qual palavra sera contada: ");
	scanf("%s",&palavra);
	
	while(fscanf(pArquivo,"%s",texto)!=EOF){
		if(strcmp(palavra,texto)==0){
			quant++;
		}
	}
	
	printf("\nA palavra aparece %d no arquivo",quant);
	
	return 0;
}
