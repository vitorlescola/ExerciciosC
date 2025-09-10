#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[5];
	int i;
	float media=0.0;
	
	do{
		printf("Escreva o valor do %dº numero: ",i+1);
		scanf("%d",&numeros[i]);
		
		media+=numeros[i];
		
		i++;
	}while(i<5);
	
	media/=5;
	
	printf("\nA media dos numeros é %f\n",media);
	
	return 0;
}
