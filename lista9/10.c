#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char b[]="stdio.h";
	
	printf("N� de caracteres: %d\n",strlen(b));
	
	strcat(b,"-A Casa do Saber");

	printf("N� de caracteres: %d\n",strlen(b));
	
	return 0;
}
