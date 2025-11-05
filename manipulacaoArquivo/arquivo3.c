#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("C:\\Users\\Vitor\\Documents\\devC++\\lista12\\meuarquivo2.txt","r");
	
	if(pArquivo==NULL){
		printf("Erro ao criar arquivo!");
		
		return 1;
	}
	
	char palavra[100];
	int quant=0;
	
	while(fscanf(pArquivo,"%s",palavra)!=EOF){  //EOF end of file
		quant++;
	}
	
	printf("O arquivo tem %d palavras",quant);
	
	fclose(pArquivo);
	
	return 0;
}
