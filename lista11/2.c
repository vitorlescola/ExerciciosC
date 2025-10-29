#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10][50];
	int i;
	
	for(i=0;i<10;i++){
		printf("Escreva o %dº nome: ",i+1);
		fgets(nome[i],sizeof(nome),stdin);
		nome[i][strcspn(nome[i],"\n")]='\0';
	}
	
	printf("\n");
	
	for(i=0;i<10;i++){
		printf("%s\n",nome[i]);
	}
	
	return 0;
}
