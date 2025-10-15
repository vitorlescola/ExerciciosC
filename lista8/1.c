#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char biblioteca[]="stdio.h";
	
	printf("\n%d\n",strlen(biblioteca));
	
	return 0;
}
