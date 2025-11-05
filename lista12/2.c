#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("meuarquivo2.txt","r");
	
	char texto[100];
	
	if(pArquivo==NULL){
		printf("Erro ao ler arquivo!");
	}else{
		while(fgets(texto,sizeof(texto),pArquivo)!=NULL){
			printf("%s",texto);
		}
	}
	
	fclose(pArquivo);
	
	return 0;
}
