#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[3][3];
	int i;
	int j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Escreva o elemento na posição (%d,%d): ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d ",m[j][i]);
        }
        printf("\n");
    }
	
	return 0;
}
