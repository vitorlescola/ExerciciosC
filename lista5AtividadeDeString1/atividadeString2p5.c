#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	char sobrenome[50];
	char completo[50];
	int quantA=0;
	int quantE=0;
	int i;
	int j=0;
	
	printf("Escreva o seu nome completo: ");
	fgets(completo,sizeof(completo),stdin);
	completo[strlen(completo)-1]='\0';
	
	for(i=0;i<strlen(completo);i++){
		if(completo[i]=='A'){
			quantA++;
		}
		
		if(completo[i]==32){
			quantE++;
		}
		
		if(completo[i]!=32 && quantE==0){  //&& quantE==0 pois se n�o vai continuar apos o espa�o, e o espa�o seria posi��o vaziu, que n pode
			nome[i]=completo[i];
		}
		
		if(completo[i]!=32 && quantE>0){
			sobrenome[j]=completo[i];
			j++;
		}else if(completo[i]==32 && quantE>0){
			sobrenome[j]=32;
			j++;
		}
	}
	
	printf("\nQuantidade de A:%d",quantA);
	printf("\nQuantidade de espa�o:%d",quantE);
	printf("\nNome:%s",nome);
	printf("\nSobrenome:%s",sobrenome);
	printf("\nNome completo:%s\n",completo);
	
	return 0;
}
