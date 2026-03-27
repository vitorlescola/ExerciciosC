#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int *v,i=0,quant=0;
	bool c=true;
	
	v=malloc(5*sizeof(int));
	
	do{
		printf("\nEscreva o elemento %d: ",i+1);
		scanf("%d",*(v+i));
		i++;
		quant+=4;
		
		if(v[i]<0){
			c=false;
		}
		
		if(quant>sizeof(v)){
			v=realloc(v,(sizeof(v)*2)*sizeof(int));
		}
	}while(c);
	
	free(v);
	
	return 0;
}
