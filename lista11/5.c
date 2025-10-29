#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m1[10][10];
	int m2[10][10];
	int m3[10][10];
	int i;
	int j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("Escreva o valor na posição (%d,%d) da primeira matriz: ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("Escreva o valor na posição (%d,%d) da segunda matriz: ",i,j);
			scanf("%d",&m2[i][j]);
			
			m3[i][j]=m1[i][j]*m2[i][j];
		}
	}
	
	printf("\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%3d ",m3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
