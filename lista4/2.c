#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=5;i<=20;i++){
		printf("\n%d",i);
	}
	
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	
	i=5;
	
	while(i<=20){
		printf("\n%d",i);
		i++;
	}
	
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	
	i=5;
	
	do{
		printf("\n%d",i);
		i++;
	}while(i<=20);
}
