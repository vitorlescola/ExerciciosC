#include <stdio.h>
#include <locale.h>

main() {
    int n1, n2, n3;
    float media;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Escreva o segundo numero: ");
    scanf("%d", &n2);
    
    printf("Escreva o terceiro numero: ");
    scanf("%d", &n3);
    
    media=(n1+n2+n3)/3;
    
    printf("O valor da media dos numeros é: %f", media);
    
}
