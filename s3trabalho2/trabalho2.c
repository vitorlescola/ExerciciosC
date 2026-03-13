#include <stdio.h>

int main(){
	char nome[]={"Moreno"};
	int idade=45;
	char *p=nome;
	int *i=&idade;
	char **pp=&p;
	int **ii=&i;
	
	printf("Variavel nome: %s",nome);
	printf("\nUsando ponteiro: %s",p);
	printf("\nUsando ponteiro de ponteiro: %s",*pp);
	printf("\n");
	
	printf("\n2o. caractere usando pp com []: %c",(*pp)[1]);
	printf("\n3o. caractere usando aritimetica de pp: %c",*(*pp+2));
	printf("\nVariavel idade: %d",idade);
	printf("\nUsando ponteiro: %d",*i);
	printf("\nUsando ponteiro de ponteiro: %d",**ii);
	printf("\n");
	
	printf("\nEnd. de nome: %p",&nome);
	printf("\nEnd. ponteiro de nome: %p",&p);
	printf("\nEnd. ponteiro de ponteiro de nome: %p",&pp);
	printf("\n");
	
	printf("\nEnd. de idade: %p",&idade);
	printf("\nEnd. ponteiro de idade: %p",&i);
	printf("\nEnd. ponteiro de ponteiro de idade: %p",&ii);
	printf("\n");
	
	printf("\nEnd. onde ponteiro de nome aponta: %p",*&p);
	printf("\nEnd. ponteiro de ponteiro de nome aponta: %p",**&pp);
	printf("\n");
	
	return 0;
}
