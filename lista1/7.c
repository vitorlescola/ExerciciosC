#include <stdio.h>
#include <locale.h>

main(){
	int numero;
	
    setlocale(LC_ALL, "Portuguese");
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &numero);
	
	printf("O antecessor de %d � %d e o sucessor � %d", numero, numero-1, numero+1);
}
