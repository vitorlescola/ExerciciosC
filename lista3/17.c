#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	if(numero%7==3){
		printf("\nA divis�o de %d por 7 tem resto 3\n",numero);
	}else{
		printf("\nA divis�o de %d por 7 n�o tem resto 3\n",numero);
	}
}
