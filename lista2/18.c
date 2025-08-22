#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float montanteAcumulado;
	float taxaJuros;
	float nPeriodos;
	float inicial;
	
	printf("Escreva o valor investido: ");
	scanf("%f",&inicial);
	
	do{
		printf("Escreva o valor da taxa de juros (em decimal, exe: 10%=0,10): ");
	    scanf("%f",&taxaJuros);
	}while(taxaJuros<0);
	
	
	printf("Escreva o numero de periodos: ");
	scanf("%f",&nPeriodos);
	
	montanteAcumulado=inicial*pow(1+taxaJuros,nPeriodos);
	
	printf("\nO montante acumulado foi de %.2f R$\n",montanteAcumulado);
}
