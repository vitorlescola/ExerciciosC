#include <stdio.h>
#include <locale.h>

int main() {
    int horas, minutos, segundos;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Escreva o tempo em horas (desconsidere minutos): ");
    scanf("%d", &horas);
    
    printf("Escreva os minutos (desconsidere a hora): ");
    scanf("%d", &minutos);
    
    segundos=(horas*3600)+(minutos*60);

    printf("\nSão %d segundos\n",segundos);

}
