#include <stdio.h>
#include <locale.h>

int main() {
    float preco;
    float porcentagem;
    float precoDesconto;

    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva o pre�o do produto: ");
    scanf("%f", &preco);
    
    printf("Escreva a procentagem de desconto: ");
    scanf("%f", &porcentagem);
    
    precoDesconto=preco-(preco*porcentagem/100);

    
    printf("O pre�o com desconto �: %f", precoDesconto);

}
