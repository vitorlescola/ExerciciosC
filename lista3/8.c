#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	float divisao;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	divisao=numero/5;
	
	if(divisao>10){
		printf("\nA divisão de %d por 5 resulta em %f, que é maior que 10\n",numero,divisao);
	}else{
		printf("\nA divisão de %d por 5 resulta em %f, que não é maior que 10\n",numero,divisao);
	}
}
