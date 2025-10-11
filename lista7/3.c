#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	int i;
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strcspn(frase,"\n")]='\0';
	
	for(i=0;i<strlen(frase);i++){
		if(frase[i]=='Y'||frase[i]=='y'){
			frase[i]='A';
		}else if(frase[i]=='Z'||frase[i]=='z'){
			frase[i]='B';
		}else{
			frase[i]+=2;
		}
	}
	
	printf("%s",frase);
	
	return 0;
}
