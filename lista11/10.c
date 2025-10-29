#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[4][3];
	int i;
	int j;
	int soma;
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("Escreva o valor na posição (%d,%d): ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<4;i++){
		soma=0;
		for(j=0;j<3;j++){
			soma+=m[i][j];
		}
		printf("Soma da linha %d: %d\n",i,soma);
	}
	
	return 0;
}
