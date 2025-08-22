#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nota;
	int alunos;
	float media=0;
	int i=1;
	
	do{
	  printf("Escreva a quantidade de alunos na sala: ");
	  scanf("%d", &alunos);
	}while(alunos<=0);
	
	printf("\n");
	
	do{
		do{
			printf("Escreva a nota do aluno %d: ",i);
	        scanf("%d", &nota);
	    }while(nota<0||nota>10);
	
	       media=media+nota;
	
	       i++;
	}while(i<=alunos);
	
	  if(media>0){
	  	media=media/alunos;
	  }else{
	  	media=0;
	  }
	
	printf("\nA media da sala é %f",media);
}
