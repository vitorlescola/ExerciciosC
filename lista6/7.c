#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	int i;
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strlen(frase)-1]='\0';
	
	for(i=0;i<strlen(frase);i++){
		if(frase[i]=='A'||frase[i]=='a'){
			frase[i]='@';
		}
	}
	
	printf("\n%s",frase);
	
	return 0;
}
