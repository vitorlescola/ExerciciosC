#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	char sobrenome[50];
	char completo[100];
	
	printf("Escreva seu nome: ");
	fgets(nome,sizeof(nome),stdin);
	nome[strcspn(nome,"\n")]='\0';  //complementary span
	
	printf("Escreva seu nome: ");
	fgets(sobrenome,sizeof(sobrenome),stdin);
	sobrenome[strcspn(sobrenome,"\n")]='\0';
	
	strcpy(completo,nome);
	strcat(completo," ");
	strcat(completo,sobrenome);

	printf("\n%s\n",completo);
	
	return 0;
}
