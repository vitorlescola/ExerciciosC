#include <stdio.h>
#include <locale.h>

main(){
	float real, dolar, valor;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva o valor atual do dolar: ");
    scanf("%f", &dolar);
    
    printf("Escreva a quantidade de reais: ");
    scanf("%f", &real);
    
    valor=real/dolar;
    
    printf("O valor em dolar é: %f", valor);
	
}
