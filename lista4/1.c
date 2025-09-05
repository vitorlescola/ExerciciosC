#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	float media=0.0;
	int i;
	int maior=0;
	int menor=1000;
	
	for(i=0;i<3;i++){
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%d",&idade);
		
		if(idade>maior){
			maior=idade;
		} 
		
		if(menor>idade){
			menor=idade;
		}
		
		media+=idade;
	}
	
	media=media/3;
	
	printf("\n a media das idades é %.2f, a maior idade é %d e a menor idade é %d\n",media,maior,menor);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
    
    i=0;
    media=0;
    maior=0;
    menor=1000;
	while(i<3){
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%d",&idade);
		
		if(idade>maior){
			maior=idade;
		} 
		
		if(menor>idade){
			menor=idade;
		}
		
		media+=idade;
		
		i++;
	}
	
	media=media/3;
	
	printf("\n a media das idades é %.2f, a maior idade é %d e a menor idade é %d\n",media,maior,menor);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
    
    i=0;
    media=0;
    maior=0;
    menor=1000;
	do{
		printf("Escreva a idade da pessoa %d: ",i+1);
		scanf("%d",&idade);
		
		if(idade>maior){
			maior=idade;
		} 
		
		if(menor>idade){
			menor=idade;
		}
		
		media+=idade;
		
		i++;
	}while(i<3);
	
	media=media/3;
	
	printf("\n a media das idades é %.2f, a maior idade é %d e a menor idade é %d\n",media,maior,menor);
}
