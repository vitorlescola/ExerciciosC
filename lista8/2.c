#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char biblioteca[]="stdio.h";
	char nova[10];
	
	strcpy(nova,biblioteca);
	
	printf("\n%s\n",nova);
	
	return 0;
}
