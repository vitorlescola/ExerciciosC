#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	int vidas;
	int tentativa;
	
	numero=rand(100);
	
	for (vidas=10;vidas>0;vidas--){
	  printf("Escolha um numero de 1 a 100: ");
	  scanf("%d",&tentativa);
	  
	  if(tentativa>numero){
	  	printf("\nO numero � menor que %d\n\n",tentativa);
	  }else if(tentativa<numero){
	  	printf("\nO numero � maior que %d\n\n",tentativa);
	  }else if(tentativa=numero){
	  	printf("\nVoc� ganhou!\n");
	  	break;
	  }
	}
	if(vidas==0){
		printf("Voc� perdeu, o numero era %d",numero);
	}
}
