#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float c;
	float f;
	char escolha;
	
	do{
		printf("Aperter C para converter Celsius para Fahrenheit e F para converter Fahrenheit para Celsius: ");
	    scanf(" %c",&escolha);
	}while(escolha!='C'&&escolha!='F');
	
	if(escolha=='C'){
		printf("\nEscreva a temperatura em Celsius: ");
		scanf("%f",&c);
		
		f=(c*1.8)+32;
		
		printf("\nA temperatura em Fahrenheit é %f",f);
	}else if(escolha=='F'){
		printf("\nEscreva a temperatura em Fahrenheit: ");
		scanf("%f",&f);
		
		c=(f-32)*5/9;
		
		printf("\nA temperatura em CelsiusC é %f",c);
	}
}
