#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo1=fopen("origem.txt","r");
	FILE *pArquivo2=fopen("destino.txt","w");
	
	if(pArquivo1==NULL||pArquivo2==NULL){
		printf("Erro ao criar arquivo!");
		
		return 1;
	}
	
	//fprintf(pArquivo1,"Texto incrivel wow");
	
	char texto;
	
	while((texto=fgetc(pArquivo1))!=EOF){  //file get char, igual fgets só que caracter
		fputc(texto,pArquivo2);
	}
	
	fclose(pArquivo1);
	fclose(pArquivo2);
	
	return 0;
}
