#include <stdio.h>
#include <locale.h>

int main() {
    int n1, n2, soma;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Escreva o segundo numero: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    
    printf("O valor da soma é: %d\n", soma);
    
}
