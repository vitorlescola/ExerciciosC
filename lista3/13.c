#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Escreva um numero: ");
	scanf("%f",&numero);
	
	if(numero>5&&numero<15||numero>30){
		printf("\nO numero %f � maior que 5 e menor que 15, ou � maior que 30\n",numero);
	}else{
		printf("\nO numero %f n�o � maior que 5 e menor que 15, e n�o � maior que 30\n",numero);
	}
}
