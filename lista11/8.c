#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[3][3];
	int s=0;
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
            if(m[j][i]!=m[i][j]){
            	s++;
			}
        }
    }
	
	if(s>0){
		printf("\nA matriz não é simetrica\n");
	}else{
		printf("\nA matriz é simetrica\n");
	}
	
	return 0;
}
