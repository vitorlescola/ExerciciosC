#include <stdio.h>
#include <locale.h>

main(){
	int numero;
	
    setlocale(LC_ALL, "Portuguese");
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &numero);
	
	printf("O antecessor de %d é %d e o sucessor é %d", numero, numero-1, numero+1);
}
