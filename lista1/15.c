#include <stdio.h>
#include <locale.h>

int main() {
    int numero1, numero2;
    int produto, diferenca;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Escreva o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Escreva o segundo numero inteiro: ");
    scanf("%d", &numero2);

    produto=numero1*numero2;
    diferenca=numero1-numero2;

    printf("\nProduto: %d", produto);
    printf("\nDiferença: %d", diferenca);

    return 0;
}
