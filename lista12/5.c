#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("numeros.txt","r");
	
	if(pArquivo==NULL){
		printf("Erro ao ler arquivo!");
		
		return 1;
	}
	
	int numero;
	int soma=0;
	int i;
	
	while(fscanf(pArquivo,"%d",&numero)!=EOF){
		soma+=numero;
	}
	
	fclose(pArquivo);
	
	printf("A soma dos numeros é %d",soma);
	
	return 0;
}
