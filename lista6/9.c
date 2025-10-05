#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char string[50];
	int escolha;
	
	printf("Escreva a string: ");
	fgets(string,sizeof(string),stdin);
	string[strlen(string)-1]='\0';
	
	system("cls");
	
	printf("Conversor\n1-para maiuscula\n2-para minuscula\n");
	scanf("%d", &escolha);
	
	system("cls");
	
	switch(escolha){
		case 1:
			strupr(string);
			printf("%s",string);
			break;
		case 2:
		    strlwr(string);
			printf("%s",string);
			break;
		default:
			printf("Opção invalida");
		    break;		
	}
	
	return 0;
}
