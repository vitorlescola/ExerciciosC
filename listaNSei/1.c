#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[5][50];
	int idades[5];
	int maior;
	int i;
	int j;
	
	for(i=0;i<5;i++){
		printf("Escreva o %d nome: ",i+1);
		gets(nomes[i]);
		
		printf("Escreva a %d idade: ",i+1);
		scanf("%d",&idades[i]);
		
		fflush(stdin);  //limpa o buffer
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(idades[i]>idades[j]){
				maior=i;
			}
		}
	}
	
	for(i=0;i<5;i++){
		printf("\nnome %d: %s",i+1,nomes[i]);
		
		printf("\nidade %d: %d",i+1,idades[i]);
	}
	
	printf("\n\nA maior idade é %d de %s, na posição %d\n",idades[maior],nomes[maior],maior);
	
	return 0;
}
