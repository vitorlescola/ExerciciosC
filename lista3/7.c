#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Escreva um numero: ");
	scanf("%f",&numero);
	
	if(numero>=30&&numero<=50){
		printf("\nO numero %f está no intervalo de 30 a 50\n",numero);
	}else{
		printf("\nO numero %f não está no intervalo de 30 a 50\n",numero);
	}
}
