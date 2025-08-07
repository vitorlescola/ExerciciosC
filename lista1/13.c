#include <stdio.h>
#include <locale.h>

main(){
	float numero, porcentagem, valor;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva um numero: ");
    scanf("%f", &numero);
    
    printf("Escreva uma porcentagem: ");
    scanf("%f", &porcentagem);
    
    valor=numero+(numero*porcentagem/100);
    
    printf("O valor é: %f", valor);
	
}
