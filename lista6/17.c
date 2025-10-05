#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*char frase1[50];
	char frase2[50];
	int count=0;
	int i;
	int j;
	
	printf("Escreva uma frase: ");
	fgets(frase1,sizeof(frase1),stdin);
	frase1[strlen(frase1)-1]='\0';
	
	printf("Escreva outra frase: ");
	fgets(frase2,sizeof(frase2),stdin);
	frase2[strlen(frase2)-1]='\0';
	
	if(strlen(frase1)!=strlen(frase2)){
		printf("\nNão são anagramas!");
	}else{
		for(i=0;i<strlen(frase1);i++){
			for(j=0;strlen(frase2);j++){
				if(strcmp(frase1[i],frase2[j]==0)){
					count++;
					frase2[j]="";
					break;
				}
			}
		}
		if(count==strlen(frase1)){
			printf("São anagramas");
		}else{
			printf("Não são anagramas");
		}
	}
	
	return 0;*/
}
