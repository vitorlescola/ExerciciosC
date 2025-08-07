#include <stdio.h>
#include <locale.h>

main(){
	float valorHora, horas, salario;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    
    printf("Escreva o valor da hora: ");
    scanf("%f", &valorHora);
    
    salario=valorHora*horas;
    
    printf("O valor do salario é: %f", salario);
}
