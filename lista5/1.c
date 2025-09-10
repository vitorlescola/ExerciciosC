#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=2;i<=20;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	
	return 0;
}
