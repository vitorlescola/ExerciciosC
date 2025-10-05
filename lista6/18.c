#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	char semVogais[50];
	int i;
	int j=0;
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strlen(frase)-1]='\0';
	
	for(i=0;i<=strlen(frase);i++){
		if(frase[i]!='A'&&frase[i]!='E'&&frase[i]!='I'&&frase[i]!='O'&&frase[i]!='U'&&
		frase[i]!='a'&&frase[i]!='e'&&frase[i]!='i'&&frase[i]!='o'&&frase[i]!='u'){
			semVogais[j]=frase[i];
			j++;
		}
	}
	
	printf("\n%s",semVogais);
	
	return 0;
}
