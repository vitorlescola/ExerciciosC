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
		printf("\nO numero %f é maior que 5 e menor que 15, ou é maior que 30\n",numero);
	}else{
		printf("\nO numero %f não é maior que 5 e menor que 15, e não é maior que 30\n",numero);
	}
}
