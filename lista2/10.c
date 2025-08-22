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
	float notaMinima;
	
	do{
		printf("Escreva a nota minima para ser aprovado: ");
	    scanf("%f",&notaMinima);
	}while(notaMinima<=0||notaMinima>10);
	
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
	
	if(media<notaMinima){
		printf("\nA sala estaria em recuperação\n");
	}else{
		printf("\nA sala estaria aprovada\n");
	}
}
