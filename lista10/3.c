#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n[]={0,1,2,3,4,5,6,7,8,9,10};
	
	printf("O terceiro elemento do vetor é %d",n[2]);
	
	return 0;
}
