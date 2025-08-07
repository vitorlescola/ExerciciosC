#include <stdio.h>
#include <locale.h>

main(){
	int numero;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva um valor inteiro: ");
    scanf("%d", &numero);
    
    printf("O dobro de %d é %d e o triplo é %d", numero, numero*2, numero*3);
	
}
