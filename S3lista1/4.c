#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

  typedef struct{
  	char nome[50];
  	int idade;
  	char telefone[12];
  }dados;

  void entrada(dados* pessoas);
  
  void saida(dados* pessoas);
  
  void classificarNome(dados* pessoas);
  
  void classificarIdade(dados* pessoas);
  
  void classificarFone(dados* pessoas);

  int i;
  int j;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	dados pessoas[5];
	int escolha;
	
	entrada(pessoas);
	
	system("cls");
	
	saida(pessoas);
	
	do{
		printf("\n\nOrganizar os dados: \n1-Por Nome\n2-Por Idade\n3-Por Telefone\n   escolha: ");
	    scanf("%d",&escolha);
	}while(escolha<1||escolha>4);
	
	switch(escolha){
		case 1:
			system("cls");
			classificarNome(pessoas);
			saida(pessoas);
			break;
		case 2:
			system("cls");
		    classificarIdade(pessoas);
		    saida(pessoas);
			break;
		case 3:
			system("cls");
		    classificarFone(pessoas);
		    saida(pessoas);
			break;	
		default:
			system("cls");
		    printf("Valor invalido");	
	}
	
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
  
  void classificarNome(dados* pessoas){
  	dados tmp;
  		
  	for(i=0;i<4;i++){
  		for(j=i+1;j<5;j++){
  			if(strcmp(pessoas[j].nome,pessoas[i].nome)==-1){
  				tmp=pessoas[j];
  				pessoas[j]=pessoas[i];
  				pessoas[i]=tmp;
			  }
		  }
	  }
  }
  
  void classificarIdade(dados* pessoas){
  	dados tmp;
  	
  	for(i=0;i<4;i++){
  		for(j=i+1;j<5;j++){
  			if(pessoas[j].idade<pessoas[i].idade){
  				tmp=pessoas[j];
  				pessoas[j]=pessoas[i];
  				pessoas[i]=tmp;
			  }
		  }
	  }
  }
  
  void classificarFone(dados* pessoas){
  	dados tmp;
  	
  	for(i=0;i<4;i++){
  		for(j=i+1;j<5;j++){
  			if(strcmp(pessoas[j].telefone,pessoas[i].telefone)==-1){
  				tmp=pessoas[j];
  				pessoas[j]=pessoas[i];
  				pessoas[i]=tmp;
			  }
		  }
	  }
  }
