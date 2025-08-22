#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float preco;
	float precoDescontado;
	
	printf("Escreva o preço do produto: ");
	scanf("%f",&preco);
	
	if(preco<=100){
		precoDescontado=preco;
		}else{ if(preco>100&&preco<=500)
			precoDescontado=(preco*0.90);
			else{ if(preco>500)
				precoDescontado=(preco*0.80);
			}
		}
	
	
	printf("\nO preço descontado do produto é %f",precoDescontado);
}
