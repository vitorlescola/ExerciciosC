#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[5][50];
	int notas[5];
	float media=0.0;
	int maior=0;
	int menor=0;
	int i;
	
	for(i=0;i<5;i++){
		printf("Escreva o nome do %d aluno: ",i+1);
		fgets(nomes[i],sizeof(nomes),stdin);
		nomes[i][strcspn(nomes[i],"\n")]='\0';
		
		printf("Escreva o nota do %d aluno: ",i+1);
		scanf("%d",&notas[i]);
		getchar();
		
		media+=notas[i];
		
		if(notas[maior]<notas[i]){
			maior=i;
		}
		
		if(notas[menor]>notas[i]){
			menor=i;
		}
	}
	
	media/=5;
	
	printf("\nA media das notas é %f\nA maior nota é %d de %s\nA menor nota é %d de %s",media,notas[maior],nomes[maior],notas[menor],nomes[menor]);
	
	return 0;
}
