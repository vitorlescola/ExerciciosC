#include <stdio.h>
#include <locale.h>

main(){
	float c, f;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escreva a temperarura em Celsius: ");
	scanf("%f", &c);
	
	f=(c*9/5)+32;
	
	printf("A temperatura em Fahrenheit é: %f", f);
	
}
