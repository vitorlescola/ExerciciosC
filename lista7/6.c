#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	char iniciais[10];
	int i;
	int j=1;
	
	printf("Escreva seu nome: ");
	fgets(nome,sizeof(nome),stdin);
	nome[strcspn(nome,"\n")]='\0';
	
    iniciais[0]=nome[0];
	for(i=1;i<strlen(nome);i++){
		if(nome[i]==32){
			iniciais[j]=nome[i+1];
			j++;
		}
	}
	
	printf("\n%s\n",iniciais);
	
	return 0;
}
