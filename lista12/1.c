#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("meuarquivo1.txt","w");
	
	if(pArquivo==NULL){
		printf("Erro ao criar arquivo!");
	}else{
		fprintf(pArquivo,"Hello,Mundo!");
	}
	
	fclose(pArquivo);
	
	return 0;
}
