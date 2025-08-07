#include <stdio.h>
#include <locale.h>

int main() {
    float c;
    float f;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva uma temperatura em Fahrenheit: ");
    scanf("%f", &f);
    
    c=(f-32)*5/9;
    
    printf("\nA temperatura em Celsius é: %f", c);
}
