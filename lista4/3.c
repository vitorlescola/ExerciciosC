#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=30;i>=5;i--){
		printf("\n%d",i);
	}
	
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	
	i=30;
	
	while(i>=5){
		printf("\n%d",i);
		i--;
	}
	
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	
	i=30;
	
	do{
		printf("\n%d",i);
		i--;
	}while(i>=5);
}
