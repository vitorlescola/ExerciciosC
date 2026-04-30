#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void imprimir();

typedef struct no{
	int dado;
	struct no *prox;
}No;

No *top=NULL;

int main(){
	int op;
	
	do{
		system("cls");
		printf("Menu\n1.Empilhar\n2.Desimpilhar\n3.Imprimir\n4.Sair\n\nEscolha uma opcao (1-4): ");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				imprimir();
				break;
			case 4:
				printf("\nObrigado por usar o sistema!");	
				break;
			default:
				printf("\nOpcao invalida");
				break;			
		}
	}while(op!=4);
	
	return 0;
}

void push(){
	int item;
	
	printf("\nInsira o valor a ser empilhado: ");
	scanf("%d",&item);
	
	No *novo=malloc(sizeof(No));
	
	if(novo!=NULL){
		novo->dado=item;
		novo->prox=top;
		top=novo;
		
		printf("Valor %d empilhado com sucesso!\n\n",novo->dado);
	}else{
		printf("Falha ao alocar memoria!");
	}
	
	
	system("pause");
}

void pop(){
	if(top==NULL){
		printf("A pilha esta vazia\n\n");
	}else{
		No *tmp=top;
		
		top=top->prox;
		
		printf("\n%d desempilhado com sucesso!\n\n",tmp->dado);
		
		free(tmp);
	}
	
	system("pause");
}

void imprimir(){
	No *tmp=top;
	
	while(tmp!=NULL){
		printf("%d\n",tmp->dado);
		tmp=tmp->prox;
	}
	
	system("pause");
}
