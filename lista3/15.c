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
	
	do{
		printf("Escreva o segundo numero (deve ser diferente do primeiro): ");
	    scanf("%d",&numero2);
	}while(numero2==numero1);
	
	int soma=numero1+numero2;
	
	if(soma%2==0){
		printf("\nA soma dos numeros %d e %d é par\n",numero1,numero2);
	}else{
		printf("\nA soma dos numeros %d e %d é impar\n",numero1,numero2);
	}
}
