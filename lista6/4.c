#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[50];
	int vogais=0;
	int i;
	
	printf("Escreva uma palavra: ");
	fgets(palavra,sizeof(palavra),stdin);
	palavra[strlen(palavra)-1]='\0';
	
	for(i=0;i<strlen(palavra);i++){
		if(palavra[i]=='A'||palavra[i]=='E'||palavra[i]=='I'||palavra[i]=='O'||palavra[i]=='U'||
		palavra[i]=='a'||palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u'){
			vogais++;
		}
	}
	
	printf("\nA quantidade de voagais é %d",vogais);
	
	return 0;
}
