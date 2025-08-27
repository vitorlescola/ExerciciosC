#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero1;
	float numero2;
	float numero3;
	float soma;
	
	printf("Escreva o primeiro numero: ");
	scanf("%f",&numero1);
	
	printf("Escreva o segundo numero: ");
	scanf("%f",&numero2);
	
	printf("Escreva o terceiro numero: ");
	scanf("%f",&numero3);
	
	soma=numero1+numero2+numero3;
	
	if(soma==150){
		printf("\nA soma de %f, %f e %f é igual a 150\n",numero1,numero2,numero3);
	}else{
		printf("\nA soma de %f, %f e %f não é igual a 150\n",numero1,numero2,numero3);
	}
}
