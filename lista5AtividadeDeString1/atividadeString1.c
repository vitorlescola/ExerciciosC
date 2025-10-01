#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	char sobrenome[50];
	char completo[50];
	int quantA=0;
	int quantE=0;
	int i;
	
	printf("Escreva o seu nome: ");
	fgets(nome,sizeof(nome),stdin);
	nome[strlen(nome)-1]='\0';
	
	printf("Escreva o seu sobrenome: ");
	fgets(sobrenome,sizeof(sobrenome),stdin);
	sobrenome[strlen(sobrenome)-1]='\0';
	
	strcpy(completo,nome);
	strcat(completo," ");
	strcat(completo,sobrenome);
	
	for(i=0;i<strlen(completo);i++){
		if(completo[i]=='A'){
			quantA++;
		}
		
		if(completo[i]==32){
			quantE++;
		}
	}
	
	printf("\nQuantidade de A:%d",quantA);
	printf("\nQuantidade de espaço:%d",quantE);
	printf("\nNome:%s",nome);
	printf("\nSobrenome:%s",sobrenome);
	printf("\nNome completo:%s\n",completo);
	
	return 0;
}
