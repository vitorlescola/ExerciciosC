#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade[12];
	char sexo[12];
	int quantFilhos[12];
	int i;
	float quantHomens=0;
	int quantMulSemFil=0;
	float mediaQuantMulSemFil=0.0;
	int jovem=999;
	int quantMulheres=0;
	
	for(i=0;i<12;i++){
		do{
			printf("Escreva a idade da pessoa %d: ",i+1);
	    	scanf("%d",&idade[i]);
		}while(idade[i]<0);
		
		if(idade[i]<jovem){
			jovem=idade[i];
		}
		
		do{
			printf("Escreva o sexo da pessoa %d (M/F): ",i+1);
		    scanf(" %c",&sexo[i]);
		}while(sexo[i]!='M'&&sexo[i]!='F');
		
		if(sexo[i]=='M'){
			quantHomens++;
		}
		
		do{
			printf("Escreva a quantidade de filhos da pessoa %d: ",i+1);
		    scanf("%d",&quantFilhos[i]);
		}while(quantFilhos[i]<0);
		
		if(sexo[i]=='F'&&quantFilhos[i]==0){
			quantMulSemFil++;
			mediaQuantMulSemFil+=idade[i];
		}
	}
	
	if(quantMulSemFil!=0){
		mediaQuantMulSemFil=mediaQuantMulSemFil/quantMulSemFil;
	}else{
		mediaQuantMulSemFil=0;
	}
	
	quantMulheres=12-quantHomens;
	
	printf("\nO percentual de homens é %f%%, e a media da idade das mulheres sem ",(quantHomens/12)*100);
	printf("filhos é %f, a pessoa mais jovem\n tem %d anos e ",mediaQuantMulSemFil,jovem); 
	printf("a quantidade de mulheres é %d\n",quantMulheres);
	
	return 0;
}
