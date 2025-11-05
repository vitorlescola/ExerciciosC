#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("numeros.txt","w");
	
	if(pArquivo==NULL){
		printf("Erro ao criar arquivo");
		
		return 1;
	}
	
	int numeros[]={1,2,3,4,5,6,7,8,9,10};
	int i;
	
	for(i=0;i<10;i++){
		fprintf(pArquivo,"%d\n",numeros[i]);
	}
	
	fclose(pArquivo);
	
	pArquivo=fopen("numeros.txt","r");
	
	if(pArquivo==NULL){
		printf("Erro ao ler arquivo");
		
		return 1;
	}
	
	int numero=0;
	int soma=0;
	
	while(fscanf(pArquivo,"%d",&numero)!=EOF){
		soma+=numero*3;
	}
	
	fclose(pArquivo);
	
	printf("A soma dos numeros multiplicados por 3 é %d",soma);
	
	return 0;
}
