#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char biblioteca[]="stlib.h";
	
	char *ponteiro=strstr(biblioteca,"lib");  //strstr() encontra a primeira ocorrência de uma substring
	
	if(ponteiro){
		printf("\n%s\n",ponteiro);  //escrevendo lib e o que vem depois
	}else{
		printf("A biblioteca não tem a substring \"lib\"");
	}
	
	return 0;
}
