#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int **v,i,j;
	srand(time(NULL));
	
	v=malloc(5*sizeof(int *));
	
	for(i=0;i<5;i++){
		v[i]=malloc(7*sizeof(int));
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			v[i][j]=(rand()%50)+10;
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			printf("4%d ",v[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<5;i++){
		free(v[i]);
	}
	
	free(v);
	
	return 0;
}
