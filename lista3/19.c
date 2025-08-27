#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Escreva um numero: ");
	scanf("%f",&numero);
	
	if(numero<0||numero>100){
		printf("\nO numero %f é negativo ou maior que 100\n",numero);
	}else{
		printf("\nO numero %f é positivo e menor que 100\n",numero);
	}
}
