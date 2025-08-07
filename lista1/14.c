#include <stdio.h>
#include <locale.h>

main(){
	int ano, dias;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva sua idade (anos): ");
    scanf("%d", &ano);
    
    dias=ano*365;
    
    printf("Voce viveu aproximadamente %d dias", dias);
	
}
