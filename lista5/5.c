#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	int aleatorio=rand()%10;
	int chute;
	
	do{
		printf("Adivinhe um numero de 1 a 10: ");
		scanf("%d",&chute);
		
		if(aleatorio==chute){
			printf("\nVocê acertou!\n");
		}else{
			printf("\nVocê errou, tente novamente\n");
		}
	}while(aleatorio!=chute);
	
	return 0;
}
