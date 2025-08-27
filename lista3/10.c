#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero1;
	float numero2;
	float numero3;
	
	printf("Escreva o primeiro numero: ");
	scanf("%f",&numero1);
	
	printf("Escreva o segundo numero: ");
	scanf("%f",&numero2);
	
	printf("Escreva o terceiro numero: ");
	scanf("%f",&numero3);
	
	if(numero1+numero2+numero3>=50){
		printf("\nA soma dos numeros %f, %f e %f é maior ou igual a 50\n",numero1,numero2,numero3);
	}else{
		printf("\nA soma dos numeros %f, %f e %f é menor que 50\n",numero1,numero2,numero3);
	}
}
