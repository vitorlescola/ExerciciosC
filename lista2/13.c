#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int pontos;
	
	do{
		printf("Escreva os pontos do funcionario: ");
	    scanf("%d",&pontos);
	    if(pontos<0||pontos>10){
	    	printf("Valor invalido, pontos só vão de 0 a 10\n");
		}
		
	}while(pontos<0||pontos>10);
	
	if(pontos==0){
		printf("\nDemite esse ai kk");
	}else if(pontos<=5){
		printf("\nSem premiação");
	}else if(pontos<=7){
		printf("\nGanhou caneca da empresa! kk");
	}else if(pontos<=9){
		printf("\nGanhou 1%% de bonus no salario!");
	}else if(pontos==10){
		printf("\nGanhou 5%% de bonus no salario!!!");
	}else{
		printf("\nValor invalido");
	}
}
