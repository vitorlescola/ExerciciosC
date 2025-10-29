#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float v[14];
	int i;
	
	for(i=0;i<=14;i++){
		printf("Escreva o %dº numero: ",i+1);
		scanf("%d",&v[i]);
	}
	
	return 0;
}
