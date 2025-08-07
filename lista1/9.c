#include <stdio.h>
#include <locale.h>

main(){
	int anoN, anoA, idade;
	
    setlocale(LC_ALL, "Portuguese");
	
	printf("Escreva seu ano de nascimento: ");
	scanf("%d", &anoN);
	
	printf("Escreva o ano atual: ");
	scanf("%d", &anoA);
	
	idade=anoA-anoN;
	
	printf("A sua idade atual é: %d", idade);
}
