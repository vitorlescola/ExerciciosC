#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>

  typedef struct{
  	char nome[50];
  	float nota1;
  	float nota2;
  	float nota3;
  	float media;
  	bool situacao;
  }fichaAluno;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	fichaAluno aluno[6];
	int i;
	
	for(i=0;i<6;i++){                                       
		
		printf("Escreva a primeira nota do aluno %d: ",i+1);
		scanf("%f",&aluno[i].nota1);
		
		printf("Escreva a segunda nota do aluno %d: ",i+1);
		scanf("%f",&aluno[i].nota2);
		
		printf("Escreva a terceira nota do aluno %d: ",i+1);
		scanf("%f",&aluno[i].nota3);
		
		printf("Escreva o nome do aluno %d: ",i+1);
		scanf(" %s",&aluno[i].nome);                        /*printf("Escreva o nome do aluno %d: ",i+1);
		                                                    fgets(aluno[i].nome,sizeof(aluno[i].nome),stdin);*/
		
		aluno[i].media=(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
		
		if(aluno[i].media>=60){
			aluno[i].situacao=true;
		}else{
			aluno[i].situacao=false;
		}
		
		printf("\n");
	}
	
	system("cls");
	
	for(i=0;i<6;i++){
		printf("\n\nNome do aluno %d: %s",i+1,aluno[i].nome);
		printf("\nNota 1 do aluno %d: %.2f",i+1,aluno[i].nota1);
		printf("\nNota 2 do aluno %d: %.2f",i+1,aluno[i].nota2);
		printf("\nNota 3 do aluno %d: %.2f",i+1,aluno[i].nota3);
		printf("\nMedia do aluno %d: %.2f",i+1,aluno[i].media);
		printf("\nSituação do aluno %d: %s", i+1,(aluno[i].situacao)?"Aprovado":"Reprovado");
	}
	
	return 0;
}
