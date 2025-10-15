#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[5][50];
	int idades[5];
	int notas[5];
	int maiorI;
	int maiorN;
	float mediaI=0.0;
	float mediaN=0.0;
	int i;
	int j;
	
	for(i=0;i<5;i++){
		printf("Escreva o %d nome: ",i+1);
		gets(nomes[i]);
		
		printf("Escreva a %d idade: ",i+1);
		scanf("%d",&idades[i]);
		
		mediaI+=idades[i];
		
		printf("Escreva a %d nota: ",i+1);
		scanf("%d",&notas[i]);
		
		mediaN+=notas[i];
		
		fflush(stdin);  //limpa o buffer
	}
	
	mediaI=mediaI/5;
	mediaN=mediaN/5;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(idades[i]>idades[j]){
				maiorI=i;
			}
			
			if(notas[i]>notas[j]){
				maiorN=i;
			}
		}
	}
	printf("\n\nA media das idades é %f e das notas é %f\n",mediaI,mediaN);
	printf("\n\nA maior idade é %d de %s, na posição %d\n",idades[maiorI],nomes[maiorI],maiorI);
	printf("\n\nA maior nota é %d de %s, na posição %d\n",idades[maiorN],nomes[maiorN],maiorN);
	
	return 0;
}
