#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	int i=1;
	int divisores=0;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d",&numero);
	
	do{
		if(numero%i==0){
			divisores++;
		}
		i++;
	}while(i<=numero);
	
	if(divisores==2||divisores==1){
		printf("\nO numero %d é primo",numero);
	}else{
		printf("\nO numero %d não é primo",numero);
	}
}
