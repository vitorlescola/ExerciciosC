#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	if(numero%4==0&&numero%6!=0){
		printf("\nO numero %d � multiplo de 4 e n�o � divisivel por 6\n",numero);
	}else{
		printf("\nO numero %d n�o � multiplo de 4 ou � divisivel por 6\n",numero);
	}
}
