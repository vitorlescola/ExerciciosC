#include <stdio.h>
#include <locale.h>

main(){
	float comprimento, largura, altura, volume;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva o comprimento do retangulo: ");
    scanf("%f", &comprimento);
    
    printf("Escreva a largura do retangulo: ");
    scanf("%f", &largura);
    
	printf("Escreva a altura do retangulo: ");
    scanf("%f", &altura);
    
    volume=comprimento*largura*altura;
    
    printf("O volume do retangulo é: %f", volume);
}
