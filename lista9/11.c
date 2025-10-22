#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char s[50];
	
	printf("Escreva uma frase: ");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';
	
	if(strcmp(s,"Biblioteca Publica")==0){
		printf("Boas vindas!");
	}
	
	return 0;
}
