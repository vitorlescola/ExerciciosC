#include <stdio.h>
#include <locale.h>

main(){
	float distancia, tempo, velocidade;
	
    setlocale(LC_ALL, "Portuguese");
    
	printf("Escreva a distancia percorrida: ");
	scanf("%f", &distancia);
	
	printf("Escreva o tempo gasto: ");
	scanf("%f", &tempo);
	
	velocidade=distancia/tempo;
	
	printf("A velocidade media é: %f", velocidade);
}
