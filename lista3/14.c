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
		printf("\nO numero %f � positivo ou sua raiz quadrada � maior que 5\n",numero);
	}else{
		printf("\nO numero %f � negativo e sua raiz quadrada � menor ou igual a 5\n",numero);
	}
}
