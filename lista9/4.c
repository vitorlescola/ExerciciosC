#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char genero1[50];
	char genero2[50];
	
	printf("Escreva o nome do primeiro genero literario: ");
	fgets(genero1,sizeof(genero1),stdin);
	genero1[strcspn(genero1,"\n")]='\0';
	
	printf("Escreva o nome do segundo genero literario: ");
	fgets(genero2,sizeof(genero2),stdin);
	genero2[strcspn(genero2,"\n")]='\0';
	
	if(stricmp(genero1,genero2)==0){
		printf("\n… o mesmo genero\n");
	}else if(stricmp(genero1,genero2)<0){
		printf("\n%s vem primeiro na ordem alfabetica\n",genero1);
	}else{
		printf("\n%s vem primeiro na ordem alfabetica\n",genero2);
	}
	
	return 0;
}
