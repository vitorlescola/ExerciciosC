#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	float media=0.0;
	int par=0;
	int impar=0;
	int i;
	
	for(i=0;i<10;i++){  //for sem pre é lido <-
		printf("Escreva o %d° numero: ",i+1);
		scanf("%d",&numero);
		
		if(numero%2==0){
			printf("PAR\n");
			par++;
		}else if(numero%2!=0){
			printf("IMPAR\n");
			impar++;
			media+=numero;
		}
	}
	if(impar!=0){
		media=media/impar;
	}else{
		media=0;
	}
	
	printf("A media dos numeros impares é %.2f e a quantidade de pares é %d",media,par);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	media=0;
	par=0;
	impar=0;
	i=0;
	
	while(i<10){
		printf("Escreva o %d° numero: ",i+1);
		scanf("%d",&numero);
		
		if(numero%2==0){
			printf("PAR\n");
			par++;
		}else if(numero%2!=0){
			printf("IMPAR\n");
			impar++;
			media+=numero;
		}
		
		i++;
	}
	if(impar!=0){
		media=media/impar;
	}else{
		media=0;
	}
	
	printf("A media dos numeros impares é %.2f e a quantidade de pares é %d",media,par);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	media=0;
    par=0;
    impar=0;
    i=0;

    do {
      printf("Escreva o %d° numero: ", i+1);
      scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("PAR\n");
        par++;
    }else{
        printf("IMPAR\n");
        impar++;
        media += numero;
    }

    i++;
   }while (i < 10);

  if(impar!=0){
    media=media/impar;
  }else{
    media=0;
}

  printf("A media dos numeros impares é %.2f e a quantidade de pares é %d", media, par);

}
