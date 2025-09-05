#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=5;i<50;i++){
		if(i%2==0){
			printf(" %d ",i);
		}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	i=5;
	
	while(i<50){
		if(i%2==0){
			printf(" %d ",i);
		}
		i++;
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	i=5;
	
	do{
		if(i%2==0){
			printf(" %d ",i);
		}
		i++;
	}while(i<50);
}
