#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char b[]="stdio.h";
	
	printf("Nº de caracteres: %d\n",strlen(b));
	
	strcat(b,"-A Casa do Saber");

	printf("Nº de caracteres: %d\n",strlen(b));
	
	return 0;
}
