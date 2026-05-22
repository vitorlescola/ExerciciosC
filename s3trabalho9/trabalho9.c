#include <stdio.h>
#include <stdlib.h>

void enqueue(int item);
void dequeue(int n, int f);
void imprimir();
int entrada();
void redistribuir();

typedef struct apNo{
	int dado;
	struct apNo *prox;
}no;

no *ini=NULL;
no *fim=NULL;
no *ini2=NULL;
no *fim2=NULL;
no *ini3=NULL;
no *fim3=NULL;
int count=0;

int main(){
	int n,op;
	
	do{
		system("cls");
		
		printf("Menu\n1-Enfileirar\n2-Desenfileirar\n3-Imprimir\n4-Redistribuir\n5-Sair\nOpcao(1-5): ");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				printf("\nInsira o valor a ser enfileirado: ");
				enqueue(entrada());
				break;
			case 2:
				do{
					printf("\nInsira a fila a ser desenfileirada: ");
					n=entrada();
				}while(n<1||n>3);
				
				dequeue(n,0);
				break;
			case 3:
				imprimir();
				break;
			case 4:
				redistribuir();
				break;		
		}
	}while(op!=5);
	
	while(ini!=NULL){
		dequeue(1,1);;
	}
	
	while(ini2!=NULL){
		dequeue(2,1);;
	}
	
	while(ini3!=NULL){
		dequeue(3,1);;
	}
	
	printf("Obrigado por usar o sistema!");
	
	return 0;
}

void enqueue(int item){
	no *novo=malloc(sizeof(no));
	count++;
	
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

void dequeue(int n, int f){
	if(n=1){
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
	
	}else if(n=2){
		if(ini2==NULL){
		printf("A fila esta vazia!");
		
		}else{
			no *tmp=ini2;
			ini2=ini2->prox;
				
			if(ini2==NULL){
				fim2=NULL;
			}
					
			if(f==0){
				printf("\n%d desenfileirado com sucesso!\n",tmp->dado);
				system("pause");
			}
					
			free(tmp);
	}
	}else{
		if(ini3==NULL){
		printf("A fila esta vazia!");
		
		}else{
			no *tmp=ini3;
			ini3=ini3->prox;
				
			if(ini3==NULL){
				fim3=NULL;
			}
					
			if(f==0){
				printf("\n%d desenfileirado com sucesso!\n",tmp->dado);
				system("pause");
			}
			free(tmp);
	}
}
}

void imprimir(){
	no *tmp1=ini;
	no *tmp2=ini2;
	no *tmp3=ini3;
	
	printf("Fila 1:");
	
	while(tmp1!=NULL){
		printf("%d ",tmp1->dado);
		
		tmp1=tmp1->prox;
	}
	
	printf("\nFila 2:");
	
	while(tmp2!=NULL){
		printf("%d ",tmp2->dado);
		
		tmp2=tmp2->prox;
	}
	
	printf("\nFila 3:");
	
	while(tmp3!=NULL){
		printf("%d ",tmp3->dado);
		
		tmp3=tmp3->prox;
	}
	
	printf("\n");
	
	system("pause");
}

int entrada(){
	int valor;
	
	scanf("%d",&valor);
	
	return valor;
}

void redistribuir(){
	no *tmp=ini;
	int i=0;
	ini2=fim2=NULL;
    ini3=fim3=NULL;
	
	while(tmp!=NULL){
        no *prox=tmp->prox;
        tmp->prox=NULL;
        
        if(i%2==0){
            if(ini2==NULL){
                ini2=fim2=tmp;
            }else{
                fim2->prox=tmp;
                fim2=tmp;
            }
        }else{
            if(ini3==NULL){
                ini3=fim3=tmp;
            }else{
                fim3->prox=tmp;
                fim3=tmp;
            }
        }
        tmp=prox;
        i++;
    }
	
	ini=NULL;
    fim=NULL;
    count=0;
	
	free(tmp);
	
	system("pause");
}
