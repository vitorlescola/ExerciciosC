#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  typedef struct{
  	char nome[50];
  	int idade;
  	char telefone[12];
  }dados;

  void entrada(dados* pessoas);
  
  void saida(dados* pessoas);

  int i;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	dados pessoas[5];
	
	entrada(pessoas);
	
	system("cls");
	
	saida(pessoas);
	
	return 0;
}

  void entrada(dados* pessoas){
    for(i=0;i<5;i++){
		printf("Escreva o nome da pessoa %d: ",i+1);
		scanf(" %s",&pessoas[i].nome);
		
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%d",&pessoas[i].idade);
		
		printf("Escreva o telefone da pessoa %d: ",i+1);
		scanf(" %s",&pessoas[i].telefone);
		
		printf("\n");
	}
  }
  
  void saida(dados* pessoas){
  	for(i=0;i<5;i++){
		printf("\n\nNome da pessoa %d: %s",i+1,pessoas[i].nome);
		printf("\nIdade da pessoa %d: %d",i+1,pessoas[i].idade);
		printf("\nTelefone da pessoa %d: %s",i+1,pessoas[i].telefone);
	}
  }
