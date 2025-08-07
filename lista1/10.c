#include <stdio.h>
#include <locale.h>

main(){
	int num1, qua1, num2, qua2, soma;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Escreva o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    qua1=num1*num1;
    
    printf("Escreva o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    qua2=num2*num2;
    
    soma=qua1+qua2;
    
    printf("O valor da soma dos quadrados é: %d", soma);
	
}
