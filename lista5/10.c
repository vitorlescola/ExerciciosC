#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nota;
	float media1=0.0;
	float media2=0.0;
	int alunos;
	int i;
	
	printf("Escreva a quantidade de alunos: ");
	scanf("%d",&alunos);
	
	printf("\n");
	
	for(i=1;i<=alunos;i++){
		printf("Escreva a nota do aluno %d da materia 1: ",i);
		scanf("%d",&nota);
		
		media1+=nota;
		
		printf("Escreva a nota do aluno %d da materia 2: ",i);
		scanf("%d",&nota);
		
		printf("\n");
		
		media2+=nota;
	}
	
	media1/=alunos;
	media2/=alunos;
	
	printf("\nA media dos alunos na materia 1 é %.2f e na materia 2 é %.2f\n",media1,media2);
	
	return 0;
}
