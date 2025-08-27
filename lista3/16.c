#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	if(numero%2!=0&&numero%3!=0){
		printf("\nO numero %d é impar e não é multiplo de 3\n",numero);
	}else{
		printf("\nO numero %d não é impar ou é multiplo de 3\n",numero);
	}
}
