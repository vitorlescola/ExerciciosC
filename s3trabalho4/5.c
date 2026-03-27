#include <stdio.h>
#include <stdlib.h>

int main(){
	float *v,media;
	int n,i,maior=0,menor=99999999;
	
	printf("Escreva a quantidade de elementos do vetor: ");
	scanf("%d",&n);
	
	v=malloc((n*sizeof(float)));
	
	for(i=0;i<n;i++){
		printf("Escreva o valor N %d: " ,i+1);
		scanf("%f",&*(v+i));
		
		if(*(v+i)>maior){
			maior=*(v+i);
		}
		
		if(*(v+i)<menor){
			menor=*(v+i);
		}
		
		media+=*(v+i);
	}
	media/=n;
	
	printf("\nMedia: %f",media);
	printf("\nMaior: %d",maior);
	printf("\nMenor: %d",menor);
	
	free(v);
	
	return 0;
}
