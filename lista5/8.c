#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	int i;
	int div=0;
	
	printf("Escreva um numero: ");
	scanf("%d",&numero);
	
	for(i=1;i<=numero;i++){
		if(numero%i==0){
			div++;
		}
	}
	
	if(div<=2){
		printf("\nO numero %d é primo\n",numero);
	}else{
		printf("\nO numero %d não é primo\n",numero);
	}
	
	return 0;
}
