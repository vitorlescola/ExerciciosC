#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*char frase[50];
	char inversa[50];
	int espacoI;
	int espacoF;
	int i;
	int p=0;
	
	printf("Escreva uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	frase[strlen(frase)-1]='\0';
	
	for(i=strlen(frase);i>=0;i--){
		if(p=0&&frase[i]==32){
			strncat(inversa,frase,i);
			p++;
		}
		if(frase[i]==32 && frase[i+1]!=32){
			//quant++;
		}
	}
	
	printf("\n%s\n",inversa);*/
	
	char frase[50];
	char p1[16];
	char p2[16];
	char p3[16];
	
	printf("Escreva a primeira palavra da frase: ");
	fgets(p1,sizeof(p1),stdin);
	p1[strcspn(p1,"\n")]='\0';
	
	printf("Escreva a segunda palavra da frase: ");
	fgets(p2,sizeof(p2),stdin);
	p2[strcspn(p2,"\n")]='\0';
	
	printf("Escreva a terceira palavra da frase: ");
	fgets(p3,sizeof(p3),stdin);
	p3[strcspn(p3,"\n")]='\0';
	
	strcpy(frase,p3);
	strcat(frase," ");
	strcat(frase,p2);
	strcat(frase," ");
	strcat(frase,p1);
	
	printf("\n%s\n",frase);
	
	return 0;
}
