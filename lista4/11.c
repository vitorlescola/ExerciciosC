#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade[5]={0};    //eu to estudando array, não veio do chat kk
	int i;
	int novo=999;
	int velho=0;
	
	for(i=0;i<5;i++){
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%d",&idade[i]);
		
		if(idade[i]>velho){
            velho=idade[i];
        }

        if(idade[i]<novo) {
            novo=idade[i];
        }
	}
	
	printf("\nA pessoa mais velha tem %d anos e a mais nova tem %d anos\n",velho,novo);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	i=0;
	novo=999;
	velho=0;
	
	while(i<5){
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%d",&idade[i]);
		
		if(idade[i]>velho){
            velho=idade[i];
        }

        if(idade[i]<novo) {
            novo=idade[i];
        }
        
        i++;
	}
	
	printf("\nA pessoa mais velha tem %d anos e a mais nova tem %d anos\n",velho,novo);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	i=0;
	novo=999;
	velho=0;
	
	do{
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%d",&idade[i]);
		
		if(idade[i]>velho){
            velho=idade[i];
        }

        if(idade[i]<novo) {
            novo=idade[i];
        }
        
        i++;
	}while(i<5);
	
	printf("\nA pessoa mais velha tem %d anos e a mais nova tem %d anos\n",velho,novo);
	
	return 0;
}
