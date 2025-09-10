#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	int maior=0;
	
	do{
		printf("Escreva um numero positivo (negativo fecha): ");
		scanf("%d",&numero);
		
		if(numero>maior){
			maior=numero;
		}
	}while(numero>=0);
	
	printf("\nO maior numero é %d\n",maior);
	
	return 0;
}
