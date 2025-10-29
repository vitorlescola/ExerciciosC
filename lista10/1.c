#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char v[]={'A','B','C','D','E','F','G','H','I','J'};
	int valor[9];
	int i;
	
	for(i=0;i<=9;i++){
		valor[i]=v[i];
		
		printf("Valor tabela ASCII da posição %d: %d\n",i+1,v[i]);
	}
	
	return 0;
}
