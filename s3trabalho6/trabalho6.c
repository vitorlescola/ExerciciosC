#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void push();
void pop();
void imprimir();
void gerar();
void acharMaior();

typedef struct no{
	int dado;
	struct no *prox;
}No;

No *top=NULL;
int maior,p=0;

int main(){
	int op;
	
	do{
		system("cls");
		printf("Menu\n1.Empilhar\n2.Desimpilhar\n3.Imprimir\n4.Gerar 5 valores\n5.Maior elemento\n6.Sair\n\nEscolha uma opcao (1-6): ");
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
				gerar();
				break;
			case 5:
				acharMaior();
				break;		
			case 6:
				printf("\nObrigado por usar o sistema!");	
				break;
			default:
				printf("\nOpcao invalida");
				break;			
		}
	}while(op!=6);
	
	return 0;
}

void push(){
	int item;
	
	printf("\nInsira o valor a ser empilhado: ");
	scanf("%d",&item);
	
	if(item>maior){
		maior=item;
	}
	
	No *novo=malloc(sizeof(No));
	
	if(novo!=NULL){
		novo->dado=item;
		novo->prox=top;
		top=novo;
		
		printf("Valor %d empilhado com sucesso!\n\n",novo->dado);
	}else{
		printf("Falha ao alocar memoria!");
	}
	
	p++;
	
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

void gerar(){
	srand(time(NULL));
	int item,i;
	
	do{
		item=(rand()%91)+10;
		
		if(item>maior){
			maior=item;
		}
	
		No *novo=malloc(sizeof(No));
		
		if(novo!=NULL){
			novo->dado=item;
			novo->prox=top;
			top=novo;
			
			p++;
		}else{
			printf("Falha ao alocar memoria\n\n!");
		}
		
		i++;
	}while(i<5);
	
	printf("Valores alocados com sucesso!\n\n");
	
	system("pause");
}

void acharMaior(){
	if(top==NULL){
		printf("A pilha esta vazia!\n\n");
	}else{
		printf("%d na posicao %d \n\n",maior,p);
	}
	
	system("pause");
}
