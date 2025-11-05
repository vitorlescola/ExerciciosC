#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo1=fopen("original.txt","r");
	FILE *pArquivo2=fopen("copia.txt","w");
	
	if(pArquivo1==NULL||pArquivo2==NULL){
		printf("Erro ao criar arquivo!");
		
		return 1;
	}
	
	char texto;
	
	while((texto=fgetc(pArquivo1))!=EOF){
		fputc(texto,pArquivo2);
	}
	
	fclose(pArquivo1);
	fclose(pArquivo2);
	
	return 0;
}
