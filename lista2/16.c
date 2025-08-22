#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float preco;
	int pessoas;
	float precoFinal;
	int pacote;
	float desconto;
	
	printf("Escreva o preço base: ");
	scanf("%f",&preco);
	
	printf("Escreva a quantidade de pessoas minimas para ter um pacote de desconto: ");
	scanf("%d",&pacote);
	
	do{
		printf("Escreva o desconto do pacote (exe: 1%=0,01): ");
	    scanf("%f",&desconto);
	}while(desconto<0);
	
	
	printf("Escreva a quantidade de pessoas: ");
	scanf("%d",&pessoas);
	
	if(pessoas>=pacote){
		precoFinal=preco*(1-desconto);
	}else{
		precoFinal=preco;
	}
	
	printf("\nO preço final da viagem é %.2f R$\n",precoFinal);
}
