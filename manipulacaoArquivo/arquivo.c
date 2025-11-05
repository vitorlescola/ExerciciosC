#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("teste.txt","r");
	
	if(pArquivo==NULL){
		printf("O arquivo não existe");
		
		return 1;
	}else{
		printf("O arquivo existe");
	}
	
	char texto[100];
	
	while(fgets(texto,sizeof(texto),pArquivo)!=NULL){
		printf("\n\n%s",texto);
	}
	
	fclose(pArquivo);
	
	return 0;
}
