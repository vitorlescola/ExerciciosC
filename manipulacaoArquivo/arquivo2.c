#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("teste.txt","w");
	
	if(pArquivo==NULL){
		printf("O arquivo não existe");
		
		return 1;
	}else{
		printf("O arquivo existe");
	}
	
    fprintf(pArquivo,"hello world!");
	
	fclose(pArquivo);
	
	return 0;
}
