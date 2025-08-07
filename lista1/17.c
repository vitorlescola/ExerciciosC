#include <stdio.h>
#include <locale.h>

int main() {
    float peso;
    float altura;
    float IMC;

    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva o seu peso: ");
    scanf("%f", &peso);
    
    printf("Escreva a sua altura: ");
    scanf("%f", &altura);
    
    IMC=peso/(altura*altura);
    
    printf("\nO seu IMC é: %f", IMC);
}
