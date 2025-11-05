#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("numeros.txt","r");
	
	if(pArquivo==NULL){
		printf("Erro ao ler arquivo");
		
		return 1;
	}
	
	int numero;
	int maior=0;
	int menor=9999;
	
	while(fscanf(pArquivo,"%d",&numero)!=EOF){
		if(maior<numero){
			maior=numero;
		}
		
		if(menor>numero){
			menor=numero;
		}
	}
	
	printf("O maior numero é %d e o menor é %d",maior,menor);
	
	fclose(pArquivo);
	
	return 0;
}
