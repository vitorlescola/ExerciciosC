#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool verificar(int n, int linha, int coluna, int **v);
void sort(int *v,int tam);

int main(){
	int linha,coluna;
	int **mat,*vet;
	int i,j,n;
	bool r;
	
	srand(time(NULL));
	
	do{
		printf("Escreva a quantidade de linhas da matriz(3-6): ");
		scanf("%d",&linha);
	}while(linha<3||linha>6);
	
	do{
		printf("Escreva a quantidade de colunas da matriz(4-8): ");
		scanf("%d",&coluna);
	}while(coluna<4||coluna>8);
	
	mat=malloc(linha*sizeof(int *));
	if(mat==NULL){
		printf("Erro ao alocar memoria");
		
		return 1;
	}else{
		for(i=0;i<linha;i++){
			mat[i]=malloc(coluna*sizeof(int));
		}
		
		for(i=0;i<linha;i++){
			for(j=0;j<coluna;j++){
				do{
					n=rand()%(100-10+1)+10;
					r=verificar(n,linha,coluna,mat);
				}while(r==false);
				mat[i][j]=n;
			}
		}
		
		printf("\n");
		for(i=0;i<linha;i++){
			for(j=0;j<coluna;j++){
				printf("%4d ",mat[i][j]);
			}
			printf("\n");
		}
		
		vet=malloc((linha*coluna)*sizeof(int));
		n=0;
		for(i=0;i<linha;i++){
			for(j=0;j<coluna;j++){
				vet[n]=mat[i][j];
				n++;
			}
		}
		
		sort(vet,linha*coluna);
		
		printf("\nOrdem:\n");
		for(i=0;i<linha*coluna;i++){
			printf("%d ",vet[i]);
		}
		
		printf("\n\nMenor valor: %d, Maior valor: %d",vet[0],vet[linha*coluna-1]);
	}
	
	for(i=0;i<linha;i++){
		free(mat[i]);
	}
	free(mat);
	
	free(vet);
	
	return 0;
}

bool verificar(int n, int linha, int coluna, int **v){
	int i,j;
	bool r=true;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			if(n==v[i][j]){
				r=false;
			}	
		}
	}
	
	return r;
}

void sort(int *v,int tam){
	int tmp,i,j;
	
    for(i=0;i<tam-1;i++){
        for(j=0;j<tam-1-i;j++){
            if(v[j]>v[j+1]){
                tmp=v[j];
                v[j]=v[j+1];
                v[j+1]=tmp;
            }
        }
    }
}
