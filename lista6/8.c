#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char string[50];
	char substring[50];
	int quant=0;
	int i;
	
	printf("Escreva uma string: ");
	fgets(string,sizeof(string),stdin);
	string[strlen(string)-1]='\0';
	
	printf("Escreva uma substring: ");
	fgets(substring,sizeof(substring),stdin);
	substring[strlen(substring)-1]='\0';
	
	int tamStr=strlen(string);
    int tamSub=strlen(substring);
	
	for(i=0;i<=tamStr-tamSub;i++){
		if (strncmp(&string[i], substring, tamSub) == 0) { //O operador & pega o endere�o de mem�ria de string[i], ou seja, ele d� um ponteiro para o in�cio dessa posi��o na string principal
            quant++;
        }
	}
	
	printf("\nA quantidade de vezes que a substring apare�e � %d",quant);
	
	return 0;
}
