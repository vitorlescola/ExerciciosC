#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	float media=0.0;
	int i;
	
	for(i=0;i<15;i++){
		do{
			printf("Escreva o %d° numero (entre 10 e 50): ",i+1);
			scanf("%d",&numero);
		}while(numero<=10||numero>=50);
		media+=numero;
	}
	
	media=media/15;
	printf("\nA media dos numeros é %.2f\n",media);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	i=0;
	numero=0;
	media=0.0;
	
	while(i<15){
		do{
			printf("Escreva o %d° numero (entre 10 e 50): ",i+1);
			scanf("%d",&numero);
		}while(numero<=10||numero>=50);
		media+=numero;
		
		i++;
	}
	
	media=media/15;
	printf("\nA media dos numeros é %.2f\n",media);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	i=0;
	numero=0;
	media=0.0;
	
	do{
		do{
			printf("Escreva o %d° numero (entre 10 e 50): ",i+1);
			scanf("%d",&numero);
		}while(numero<=10||numero>=50);
		media+=numero;
		i++;
	}while(i<15);
	
	media=media/15;
	printf("\nA media dos numeros é %.2f\n",media);
}
