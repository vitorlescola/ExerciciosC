#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	int quant=1;
	int i;
	
	printf("Escreva um frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strlen(frase)-1]='\0';
	
	for(i=0;i<strlen(frase);i++){
		if(frase[i]==32 && frase[i+1]!=32){
			quant++;
		}
	}
	
	printf("\nA frase tem %d palavras",quant);
	
	return 0;
}
