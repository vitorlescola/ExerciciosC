#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	if(numero>0&&numero%2==0){
		printf("\nO numero %d é positivo e par\n",numero);
	}else if(numero>0&&numero%2!=0){
		printf("\nO numero %d é positivo e impar\n",numero);
	}else if(numero<0&&numero%2==0){
		printf("\nO numero %d é negativo e par\n",numero);
	}else{
		printf("\nO numero %d é negativo e impar\n",numero);
	}
}
