#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=0;
	int idade;
	
//	for(i=1;i<998;i++){
	//	pritf("Escreva a sua idade (entre 1 e 99): ");
	//	scanf("%d",&idade);
		
		//if(idade=0){
	//		i=999;
	//	}
//	}

printf("------------------------------------------------------------------------------------------------------------------------\n");

while(idade>0&&idade<100){
	printf("Escreva a idade %d: ",i+1);
	scanf("%d",&idade);
	i++;
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
i=0;
do{
	printf("Escreva a idade %d: ",i+1);
	scanf("%d",&idade);
	i++;
	}while(idade>0&&idade<100);
}
