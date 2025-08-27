#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	if(numero%2!=0){
		printf("\nO numero %d é impar\n",numero);
	}else{
		printf("\nO numero %d não é impar\n",numero);
	}
}
