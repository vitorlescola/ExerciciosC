#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float taxaBase;
	float taxaPorKm;
	float kmRodado;
	float valorTotal;
	
	printf("Escreva a taxa base do aluguel: ");
	scanf("%f",&taxaBase);
	
	printf("Escreva a taxa por km do aluguel: ");
	scanf("%f",&taxaPorKm);
	
	printf("Escreva a quantidade de km rodados: ");
	scanf("%f",&kmRodado);
	
	valorTotal=taxaBase+(taxaPorKm*kmRodado);
	
	printf("\nO valor total do aluguel é %f",valorTotal);
}
