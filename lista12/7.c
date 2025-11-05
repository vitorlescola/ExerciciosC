#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *pArquivo=fopen("numerosInteiros.txt","r");
	
	if(pArquivo==NULL){
		printf("Erro ao ler arquivo");
		
		return 1;
	}
	
	int numero;
	float media=0.0;
	int quant=0;
	
	while(fscanf(pArquivo,"%d,",&numero)!=EOF){  //%d, a ',' faz esperar encontrar uma vírgula logo após o número
		media+=numero;
		quant++;
	}
	
	if(quant<=0){
		printf("Erro ao calcular media");
	}else{
		media=media/quant;
		
		printf("A media dos numeros é %f",media);
	}
	
	fclose(pArquivo);
	
	return 0;
}
