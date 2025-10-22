#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char biblioteca[50];
	
	printf("Escreva o nome da biblioteca: ");
	fgets(biblioteca,sizeof(biblioteca),stdin);
	biblioteca[strcspn(biblioteca,"\n")]='\0';
	
	if(strlen(biblioteca)>=10){
		printf("\nA biblioteca tem 10 ou mais caracteres\n");
	}else{
		printf("\nA biblioteca tem menos de 10 caracteres\n");
	}
	
	return 0;
}
