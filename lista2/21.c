#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float prestacaoMensal;
	float valorEmprestimo;
	float taxaJuros;
	int parcelas;
	float emprestimo;
	
	do{
		printf("Escreva o valor do emprestimo: ");
	    scanf("%f",&emprestimo);
	}while(emprestimo<=0);
	
	do{
		printf("Escreva o valor da taxa de juros (em numero, exe: 5%=5): ");
	    scanf("%f",&taxaJuros);
	}while(taxaJuros<=0);
	
	taxaJuros=taxaJuros/100;
	
	do{
		printf("Escreva o numero de parcelas: ");
	    scanf("%d",&parcelas);
	}while(parcelas<=0);
	
	prestacaoMensal=emprestimo*(taxaJuros*pow(1+taxaJuros,parcelas))/(pow(1+taxaJuros,parcelas)-1);
	
	printf("\nA prestação mensal é %.2f R$\n",prestacaoMensal);
	
}
