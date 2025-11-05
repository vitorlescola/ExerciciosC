#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("meuarquivo2.txt","r");
	
	if(pArquivo==NULL){
		printf("Erro ao ler arquivo!");
		
		return 1;
	}
	
	char palavra[100];
	int quant=0;
	
	while(fscanf(pArquivo,"%s",palavra)!=EOF){
		quant++;
	}
	
	printf("O arquivo tem %d palavras",quant);
	
	fclose(pArquivo);
	
	return 0;
}
