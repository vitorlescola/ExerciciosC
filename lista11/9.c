#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[4][4];
	int maiorL=0;
	int maiorC=0;
	int i;
	int j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Escreva o valor na posição (%d,%d): ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(m[maiorL][maiorC]<m[i][j]){
				maiorL=i;
				maiorC=j;
			}
		}
	}
	
	printf("\nO maior valor é %d na posição (%d,%d)\n",m[maiorL][maiorC],maiorL,maiorC);
	
	return 0;
}
