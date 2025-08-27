#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	if(numero<0||numero>=10&&numero<=20){
		printf("\nO numero %d é negativo ou esta no intervalo de 10 a 20\n",numero);
	}else{
		printf("\nO numero %d é positivo ou não esta no intervalo de 10 a 20\n",numero);
	}
}
