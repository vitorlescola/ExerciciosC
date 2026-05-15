#include <stdio.h>
#include <stdlib.h>

void enqueue(int item);
void dequeue(int f);
void imprimir();
int entrada();

typedef struct apNo{
	int dado;
	struct apNo *prox;
}no;

no *ini=NULL;
no *fim=NULL;

int main(){
	int n,op;
	
	do{
		system("cls");
		
		printf("Menu\n1-Enfileirar\n2-Desenfileirar\n3-Imprimir\n4-Sair\nOpcao(1-4): ");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				n=entrada();
				enqueue(n);
				break;
			case 2:
				dequeue(0);
				break;
			case 3:
				imprimir();
				break;	
		}
	}while(op!=4);
	
	while(ini!=NULL){
		dequeue(1);;
	}
	
	printf("Obrigado por usar o sistema!");
	
	return 0;
}

void enqueue(int item){
	no *novo=malloc(sizeof(no));
	
	if(novo==NULL){
		printf("Erro ao enfilerar dado!\n");
	}else{
		novo->dado=item;
		novo->prox=NULL;
		
		if(fim==NULL){
			ini=novo;
			fim=novo;
		}else{
			fim->prox=novo;
			fim=novo;
		}
		
		printf("\nValor %d enfilerado com sucesso!\n",novo->dado);
		
		system("pause");
	}
}

void dequeue(int f){
	if(ini==NULL){
		printf("A fila esta vazia!");
	}else{
		no *tmp=ini;
		ini=ini->prox;
		
		if(ini==NULL){
			fim=NULL;
	    }
			
		if(f==0){
			printf("\n%d desenfileirado com sucesso!\n",tmp->dado);
			system("pause");
		}
			
		free(tmp);
	}
}

void imprimir(){
	no *tmp=ini;
	
	while(tmp!=NULL){
		printf("%d\n",tmp->dado);
		tmp=tmp->prox;
	}
	
	system("pause");
}

int entrada(){
	int valor;
	
	printf("\nInsira o valor a ser enfileirado: ");
	scanf("%d",&valor);
	
	return valor;
}
