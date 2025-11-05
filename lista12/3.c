#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char arquivo[50];
	char cont;
	
	
	do{
		printf("Escreva o nome do arquivo (coloque .txt ao final): ");
	scanf("%s",&arquivo);
	
	FILE *pArquivo=fopen(arquivo,"r");
	
	if(pArquivo==NULL){
		printf("\nO arquivo não existe");
	}else{
		printf("\nO arquivo existe");
	}
	
	fclose(pArquivo);
	
	printf("\n\nContinuar? (S/N): ");
	scanf(" %c",&cont);
	
	}while(cont!='N');
	
	return 0;
}
