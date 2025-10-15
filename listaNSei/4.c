#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[5][50];
	int idades[5];
	int notas[5];
	//char situacao[5][11];
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
		
		/*if(notas[i]>=7){
			situacao[i]="Aprovado";
		}else{
			situacao[i]="Reprovado";
		}*/
		
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
	
	for(i=0;i<5;i++){
		printf("\nnome %d: %s",i+1,nomes[i]);
		
		printf("\nidade %d: %d",i+1,idades[i]);
		
		printf("\nnota %d: %d",i+1,notas[i]);
		
		if(notas[i]>=7){
			printf("\nsituação: Aprovado");
		}else{
			printf("\nsituação: Reprovado");
		}
	}
	
	printf("\n\nA media das idades é %f e das notas é %f\n",mediaI,mediaN);
	printf("\n\nA maior idade é %d de %s, na posição %d\n",idades[maiorI],nomes[maiorI],maiorI);
	printf("\n\nA maior nota é %d de %s, na posição %d\n",idades[maiorN],nomes[maiorN],maiorN);
	
	return 0;
}
