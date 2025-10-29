#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[4][4];
	int i;
	int j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Escreva o elemento na posição (%d,%d): ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		printf("%d ",m[i][i]);
	}
	
	return 0;
}
