#include <stdio.h>
#include <stdlib.h>

int main(){
	int *v1,*v2,i,quant,par=0,j;
	
	printf("Escreva a quantidade de elementos para o vetor: ");
	scanf("%d",&quant);
	
	v1=malloc((quant*sizeof(int)));
	
	printf("\n");
	
	for(i=0;i<quant;i++){
		printf("Escreva o %d elemento: ",i+1);
		scanf("%d",&v1[i]);
		
		if(v1[i]%2==0){
			par++;
		}
	}
	
	v2=malloc((par*sizeof(int *)));
	
	for(i=0;i<quant;i++){
		if(v1[i]%2==0){
			v2[j]=v1[i];
			j++;
		}
	}
	
	for(i=0;i<quant;i++){
		printf("\nElemento no endereco %p: %d",&v1[i],v1[i]);
	}
	
	printf("\n");
	
	for(i=0;i<par;i++){
		printf("\nElemento no endereco %p: %d",&v2[i],v2[i]);
	}
	
	free(v1);
	free(v2);
	
	return 0;
}
