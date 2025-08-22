#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float custoTotal;
	float distancia;
	float consumo;
	float precoGasolina;
	
	printf("Escreva a distancia da viagem (km): ");
	scanf("%f", &distancia);
	
	printf("Escreva o consumo medio de combustivel do veiculo (por km): ");
	scanf("%f", &consumo);
	
	printf("Escreva o preço da gasolina: ");
	scanf("%f", &precoGasolina);
	
	custoTotal=(precoGasolina*consumo+distancia);
	
	printf("O custo total da viagem é %f",custoTotal);
}
