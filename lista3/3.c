#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	if(numero%7==0){
        printf("\nO numero %d � multiplo de 7\n", numero);
    }else{
        printf("\nO numero %d n�o � multiplo de 7\n", numero);
    }
}
