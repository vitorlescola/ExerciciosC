#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int *v, i;
	srand(time(NULL));
	
	v=malloc((10*sizeof(int)));
	
	for(i=0;i<10;i++){
		v[i]=rand()%100;
	}
	
	for(i=0;i<10;i++){
		printf("\nElemento na posicao %d: %d",i+1,*(v+i));
	}
	
	free(v);
	
	return 0;
}
