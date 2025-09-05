#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nota;
	int para;
	int quant=0;
	float media=0.0;
	int reprovados=0;
	int baixa=0; //6-7
	int mediana=0; //7-8
	int alta=0; //8-9
	int maxima=0; //9-10
	
	for(para=1;para>0;para++){
		printf("Escreva a nota do %d° alunos: ",para);
		scanf("%d",&nota);
		
		if(nota==0){
			para=-1;
			
			quant--;
		}
		
		quant++;
		media+=nota;
		
		if(nota<60&&nota>0){
			reprovados++;
		}else if(nota>=60&&nota<=70){
			baixa++;
		}else if(nota>70&&nota<=80){
			mediana++;
		}else if(nota>80&&nota<=90){
			alta++;
		}else{
			maxima++;
		}
	}
	
	if(media!=0){
		media=media/quant;
	}else{
		media=0;
	}
	
	printf("\nA media das notas é %.2f e a quantidade de reprovados é %d\n",media,reprovados);
	printf("Dos aprovados %d estão entre 6-7, %d estão entre 7-8, %d estão entre 8-9 e %d estão entre 9-10\n",baixa,mediana,alta,maxima);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	para=1;
	quant=0;
	media=0.0;
	reprovados=0;
	baixa=0;
	mediana=0;
	alta=0;
	maxima=0;
	
	while(para!=0){
		printf("Escreva a nota do %d° alunos: ",para);
		scanf("%d",&nota);
		
		para++;
		
		if(nota==0){
			para=0;
			
			quant--;
		}
		
		quant++;
		media+=nota;
		
		if(nota<60&&nota>0){
			reprovados++;
		}else if(nota>=60&&nota<=70){
			baixa++;
		}else if(nota>70&&nota<=80){
			mediana++;
		}else if(nota>80&&nota<=90){
			alta++;
		}else{
			maxima++;
		}
	}
	
	if(media!=0){
		media=media/quant;
	}else{
		media=0;
	}
	
	printf("\nA media das notas é %.2f e a quantidade de reprovados é %d\n",media,reprovados);
	printf("Dos aprovados %d estão entre 6-7, %d estão entre 7-8, %d estão entre 8-9 e %d estão entre 9-10\n",baixa,mediana,alta,maxima);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	para=1;
	quant=0;
	media=0.0;
	reprovados=0;
	baixa=0;
	mediana=0;
	alta=0;
	maxima=0;
	
	do{
		printf("Escreva a nota do %d° alunos: ",para);
		scanf("%d",&nota);
		
		para++;
		
		if(nota==0){
			para=0;
			
			quant--;
		}
		
		quant++;
		media+=nota;
		
		if(nota<60&&nota>0){
			reprovados++;
		}else if(nota>=60&&nota<=70){
			baixa++;
		}else if(nota>70&&nota<=80){
			mediana++;
		}else if(nota>80&&nota<=90){
			alta++;
		}else{
			maxima++;
		}
	}while(para!=0);
	
	if(media!=0){
		media=media/quant;
	}else{
		media=0;
	}
	
	printf("\nA media das notas é %.2f e a quantidade de reprovados é %d\n",media,reprovados);
	printf("Dos aprovados %d estão entre 6-7, %d estão entre 7-8, %d estão entre 8-9 e %d estão entre 9-10\n",baixa,mediana,alta,maxima);
	
	return 0;
}
