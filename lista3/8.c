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
		printf("\nA divis�o de %d por 5 resulta em %f, que � maior que 10\n",numero,divisao);
	}else{
		printf("\nA divis�o de %d por 5 resulta em %f, que n�o � maior que 10\n",numero,divisao);
	}
}
