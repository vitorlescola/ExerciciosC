#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	float salarioFinal;
	char avaliacao;
	
	printf("Escreva o salario do funcionario: ");
	scanf("%f",&salario);
	
	  printf("Escreva a avalia��o do funcionario: ");
	  scanf(" %c", &avaliacao);
	
	if(avaliacao="A"){
		salarioFinal=salario*1.15;
	}else if(avaliacao="B"){
		salarioFinal=salario*1.10;
	}else if(avaliacao="C"){
		salarioFinal=salario*1.05;
	}else{
		printf("Avalia��o invalida");
	}
	
	printf("\nO salario final do funcionario � %f",salarioFinal);
}
