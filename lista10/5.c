#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quant;
	
	printf("Escreva quantos numeros serão somados: ");
	scanf("%d",&quant);
	
	int n[quant-1];
	int i;
	int soma=0;
	
	for(i=0;i<=quant-1;i++){
		printf("Escreva o %dº numero: ",i+1);
		scanf("%d",&n[i]);
		
		soma+=n[i];
	}
	
	printf("\nO valor da soma dos numeros é %d\n",soma);
	
	return 0;
}
