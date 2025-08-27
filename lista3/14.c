#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Escreva um numero: ");
	scanf("%f",&numero);
	
	if(numero>=0||sqrt(numero)>5){
		printf("\nO numero %f é positivo ou sua raiz quadrada é maior que 5\n",numero);
	}else{
		printf("\nO numero %f é negativo e sua raiz quadrada é menor ou igual a 5\n",numero);
	}
}
