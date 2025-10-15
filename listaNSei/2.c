#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[5][50];
	int notas[5];
	int maior;
	int menor;
	float media=0.0;
	int i;
	int j;
	
	for(i=0;i<5;i++){
		printf("Escreva o %d nome: ",i+1);
		gets(nomes[i]);
		
		printf("Escreva a %d nota: ",i+1);
		scanf("%d",&notas[i]);
		
		fflush(stdin);  //limpa o buffer
		
		media=+notas[i];
	}
	
	media=media/5;
	
	menor=notas[0];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(notas[i]>notas[j]){
				maior=i;
			}
			
			if(notas[i]<notas[j]){
				menor=i;
			}
		}
	}
	
	printf("\nA media das notas é %f\n",media);
	printf("\nA maior nota é %d de %s, na posição %d\n",notas[maior],nomes[maior],maior);
	printf("\nA menor nota é %d de %s, na posição %d\n",notas[menor],nomes[menor],menor);
	
	return 0;
}
