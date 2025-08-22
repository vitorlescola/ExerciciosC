#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	float raiz;
	
	do{
	  printf("Escreva um numero inteiro: ");
	  scanf("%d", &numero);
	}while(numero<=0);
		
	raiz=sqrt(numero);
	
	if(raiz*raiz==numero){
      printf("\n%d é um quadrado perfeito\n",numero);
    }else{
      printf("%d não é um quadrado perfeito.\n",numero);
    }
}
