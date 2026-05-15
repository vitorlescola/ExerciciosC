#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	float nota1;
	float nota2;
	float sub;
}dados;

typedef struct apelido{
	dados da;
	struct apelido *prox;
}no;

dados entradaDados();
void push(dados n);
void pop();
void imprimir();
//void inverter();

no *top=NULL;

int main(){
	int op;
	dados n;
	
	do{
		system("cls");
		
		printf("1-empilhar\n2-desempilha\n3-imprimir\n4-inverter\n5-sair\nopcao: ");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				n=entradaDados();
				push(n);
				
				break;
			case 2:
				pop();
				
				break;
			case 3:
				imprimir();
				
				break;
			case 4:
				//inverter();
				
				break;
		}
	}while(op!=5);
	
	while(top!=NULL){
		pop();
	}
	
	return 0;
}

dados entradaDados(){
	dados ri;
	
	system("cls");
	
	printf("nome: ");
	fflush(stdin);
	scanf("%s",&ri.nome);
	
	printf("nota1: ");
	fflush(stdin);
	scanf("%f",&ri.nota1);
	
	printf("nota2: ");
	fflush(stdin);
	scanf("%f",&ri.nota2);
	
	printf("sub: ");
	fflush(stdin);
	scanf("%f",&ri.sub);
	
	return ri;
}

void push(dados n){
	no *novo=malloc(sizeof(no));
	
	if(novo==NULL){
		printf("Erro ao alocar memoria!");
	}else{
		novo->da=n;
		novo->prox=top;
		top=novo;
	}
}

void pop(){
	if(top!=NULL){
		no *tmp=top;
		top=top->prox;
		free(tmp);
	}
}

void imprimir(){
	int i=1;
	no *pri=top;
	no *tmp=pri;
	
	while(tmp!=NULL){
		printf("%d: %20s %5.1f %5.1f %5.1f\n",i,tmp->da.nome,tmp->da.nota1,tmp->da.nota2,tmp->da.sub);
		tmp=tmp->prox;
		i++;
	}
	system("pause");
}

/*void inverter(){
		no *tmp=top;
		
		while(tmp->prox!=NULL){
		tmp=tmp->prox;
	}
	
	no *ult=tmp;
	free(tmp);
	no *pri=top;
	no *tmp2=top;
	
	pri->prox=NULL;
	ult->prox=top->prox;
	top=ult;
	//free(pri);
	
	//tmp2=top;
	//top=ult;
	//pri=ult;

	free(tmp2);
	
	printf("Pilha invertida com sucesso!\n");
	system("pause");
}*/
