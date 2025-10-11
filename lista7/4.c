#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	char letra;
	int quant=0;
	int i;
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strcspn(frase,"\n")]='\0';
	
	printf("Escreva a letra a ser contada: ");
	scanf("%c",&letra);
	
	for(i=0;i<strlen(frase);i++){
		if(frase[i]==letra){
			quant++;
		}
	}
	
	printf("\nA letra \"%c\" aparece %d vezes na frase\n",letra,quant);
	
	return 0;
}
