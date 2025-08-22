#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf("Escreva o ano: ");
	scanf("%d",&ano);
	
	if((ano%4==0&&ano%100!=0)||ano%400==0){
		printf("\nO ano %d é bissexto",ano);
	}else{
		printf("\nO ano %d não é bissexto",ano);
	}
}
