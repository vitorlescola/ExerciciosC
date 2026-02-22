#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  typedef struct{
  	char codigo[11];
  	char nome[50];
  	char endereco[70];
  	char telefone[12];
  }fichaPessoas;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	fichaPessoas pessoas[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Escreva o código da pessoa %d: ",i+1);
		scanf(" %s",&pessoas[i].codigo);
		
		printf("Escreva o nome da pessoa %d: ",i+1);
		scanf(" %s",&pessoas[i].nome);
		
		printf("Escreva o endereço da pessoa %d: ",i+1);
		scanf(" %s",&pessoas[i].endereco);
		
		printf("Escreva o telefone da pessoa %d: ",i+1);
		scanf(" %s",&pessoas[i].telefone);
		
		printf("\n");
	}
	
	system("cls");
	
	for(i=0;i<10;i++){
		printf("\n\nCódigo da pessoa %d: %s",i+1,pessoas[i].codigo);
		printf("\nNome da pessoa %d: %s",i+1,pessoas[i].nome);
		printf("\nEndereço da pessoa %d: %s",i+1,pessoas[i].endereco);
		printf("\nTelefone da pessoa %d: %s",i+1,pessoas[i].telefone);
	}
	
	return 0;
}
