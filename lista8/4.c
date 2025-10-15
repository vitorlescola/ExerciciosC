#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50];
	char nome2[50];
	
	printf("Escreva o nome do primeiro autor: ");
	fgets(nome1,sizeof(nome1),stdin);
	nome1[strcspn(nome1,"\n")]='\0';
	
	printf("Escreva o nome do segundo autor: ");
	fgets(nome2,sizeof(nome2),stdin);
	nome2[strcspn(nome2,"\n")]='\0';
	
	if(stricmp(nome1,nome2)==0){
		printf("\n\nOs nomes são iguais\n");
	}else if(stricmp(nome1,nome2)<0){
		printf("\n\nO %s vem primeiro no alfabeto\n",nome1);
	}else{
		printf("\n\nO %s vem primeiro no alfabeto\n",nome2);
	}
	
	return 0;
}
