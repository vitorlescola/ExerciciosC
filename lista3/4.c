#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero1;
	int numero2;
	
	printf("Escreva o primeiro numero: ");
	scanf("%d",&numero1);
	
	printf("Escreva o segundo numero: ");
	scanf("%d",&numero2);
	
	if(numero1-numero2>20){
		printf("\nA diferen�a entre os numeros � maior que 20\n");
	}else{
		printf("\nA diferen�a entre os numeros n�o � maior que 20\n");
	}
}
