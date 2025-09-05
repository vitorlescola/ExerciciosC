#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade[10];   //10 porque o exercicio não especifica um numero então é 10 pois é o exercicio 10
	float peso[10];
	float altura[10];
	float imc[10];
	int i;
	int baixoPeso=0;
	int normal=0;
	int sobrePeso=0;
	int obesidade=0;
	
	for(i=0;i<10;i++){
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%f",&idade[i]);
		
		printf("Escreva o peso da pessoa %d: ",i+1);
		scanf("%f",&peso[i]);
		
		printf("Escreva a altura da pessoa %d: ",i+1);
		scanf("%f",&altura[i]);
		
		printf("\n");
		
		imc[i]=peso[i]/(altura[i]*altura[i]);
		
		if(imc[i]<18.5){
          baixoPeso++;
       }else if(imc[i]>=18.5&&imc[i]<25.0){
        normal++;
       }else if(imc[i]>=25.0&&imc[i]<30.0){
        sobrePeso++;
       }else{
        obesidade++;
       }
	}
	
	printf("\nA quantidade de pessoas abaixo do peso é %d, a quantidade com peso normal é %d, ",baixoPeso,normal); 
	printf("a quantidade com sobre peso\n é %d e a quantidade com obesidade é %d\n",sobrePeso,obesidade);
	
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	
	i=0;
	baixoPeso=0;
	normal=0;
	sobrePeso=0;
	obesidade=0;
	
	while(i<10){
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%f",&idade[i]);
		
		printf("Escreva o peso da pessoa %d: ",i+1);
		scanf("%f",&peso[i]);
		
		printf("Escreva a altura da pessoa %d: ",i+1);
		scanf("%f",&altura[i]);
		
		printf("\n");
		
		imc[i]=peso[i]/(altura[i]*altura[i]);
		
		if(imc[i]<18.5){
          baixoPeso++;
       }else if(imc[i]>=18.5&&imc[i]<25.0){
        normal++;
       }else if(imc[i]>=25.0&&imc[i]<30.0){
        sobrePeso++;
       }else{
        obesidade++;
       }
       
       i++;
	}
	
	printf("\nA quantidade de pessoas abaixo do peso é %d, a quantidade com peso normal é %d, ",baixoPeso,normal); 
	printf("a quantidade com sobre peso\n é %d e a quantidade com obesidade é %d\n",sobrePeso,obesidade);
	
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	
	i=0;
	baixoPeso=0;
	normal=0;
	sobrePeso=0;
	obesidade=0;
	
	do{
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%f",&idade[i]);
		
		printf("Escreva o peso da pessoa %d: ",i+1);
		scanf("%f",&peso[i]);
		
		printf("Escreva a altura da pessoa %d: ",i+1);
		scanf("%f",&altura[i]);
		
		printf("\n");
		
		imc[i]=peso[i]/(altura[i]*altura[i]);
		
		if(imc[i]<18.5){
          baixoPeso++;
       }else if(imc[i]>=18.5&&imc[i]<25.0){
        normal++;
       }else if(imc[i]>=25.0&&imc[i]<30.0){
        sobrePeso++;
       }else{
        obesidade++;
       }
       
       i++;
	}while(i<10);
	
	printf("\nA quantidade de pessoas abaixo do peso é %d, a quantidade com peso normal é %d, ",baixoPeso,normal); 
	printf("a quantidade com sobre peso\n é %d e a quantidade com obesidade é %d\n",sobrePeso,obesidade);
	
	return 0;
}
