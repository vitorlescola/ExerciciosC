#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float lado1;
	float lado2;
	float lado3;
	
	printf("Escreva o primeiro lado do triangulo: ");
	scanf("%f",&lado1);
	
	printf("Escreva o segundo lado do triangulo: ");
	scanf("%f",&lado2);
	
	printf("Escreva o terceiro lado do triangulo: ");
	scanf("%f",&lado3);
	
	if(lado1+lado2>lado3){
		printf("\n… um triangulo valido\n");
	}else{
		printf("\nN„o È um triangulo valido\n");
	}
}
