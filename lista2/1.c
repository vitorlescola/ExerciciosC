#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float preco;
	float precoDescontado;
	
	printf("Escreva o pre�o do produto: ");
	scanf("%f",&preco);
	
	if(preco<=100){
		precoDescontado=preco;
		}else{ if(preco>100&&preco<=500)
			precoDescontado=(preco*0.90);
			else{ if(preco>500)
				precoDescontado=(preco*0.80);
			}
		}
	
	
	printf("\nO pre�o descontado do produto � %f",precoDescontado);
}
