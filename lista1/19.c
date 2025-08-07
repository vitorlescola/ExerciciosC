#include <stdio.h>
#include <locale.h>

int main() {
    int minutos, horas, minutosRestantes;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Escreva o tempo em minutos: ");
    scanf("%d", &minutos);

    horas=minutos/60;
    minutosRestantes=minutos%60; //divide por 60 e pega o que sobrou

    printf("\n%d hora(s) e %d minuto(s).\n",horas, minutosRestantes);

}
