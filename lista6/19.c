#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase1[50];
	char frase2[50];
	char frase3[100];
	int tamanho;
	int i;
	
	printf("Escreva uma frase: ");
	fgets(frase1,sizeof(frase1),stdin);
	frase1[strlen(frase1)-1]='\0';
	
	printf("Escreva outra frase: ");
	fgets(frase2,sizeof(frase2),stdin);
	frase2[strlen(frase2)-1]='\0';
	
	if(strlen(frase1)>strlen(frase2)){
		tamanho=strlen(frase1);
	}else{
		tamanho=strlen(frase2);
	}
	
	for(i=0;i<=tamanho;i++){
		if(i%2==0){
			frase3[i]=frase1[i];
		}else{
			frase3[i]=frase2[i];
		}
	}
	
	printf("\n%s",frase3);
	
	return 0;
}
