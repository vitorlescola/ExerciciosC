#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nAlunos;
	float altura;
	float media=0.0;
	int i;
	
	printf("Escreva quantos alunos tem na sala: ");
	scanf("%d",&nAlunos);
	
	printf("\n");
	
	for(i=0;i<nAlunos;i++){
		printf("Escreva a altura do aluno %d�: ",i+1);
		scanf("%f",&altura);
		
		media+=altura;
	}
	
	media/=nAlunos;
	
	printf("\nA media da altura dos alunos � %.2f\n",media);
	
	return 0;
}
