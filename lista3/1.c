#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero1;
	float numero2;
	
	printf("Escreva o primeiro numero: ");
	scanf("%f",&numero1);
	
	printf("Escreva o segundo numero: ");
	scanf("%f",&numero2);
	
	if(numero1+numero2>100){
		printf("\nA soma dos numeros %.2f e %.2f é maior que 100\n",numero1,numero2);
	}else{
		printf("\nA soma dos numeros %.2f e %.2f não é maior que 100\n",numero1,numero2);
	}
}
