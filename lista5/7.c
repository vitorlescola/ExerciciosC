#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char conver;
	int temp;
	char conti;
	int tempConvertida;
	
	do{
		printf("Escreva C para converter Celsius a Fahrenheit e F para Fahrenheit a Celsius: ");
		scanf(" %c",&conver);
		
		
		if(conver=='C'){
			printf("Escreva a temperatura: ");
		    scanf("%d",&temp);
		
			tempConvertida=temp*1.8+32;
			printf("\n%d\n",tempConvertida);
		}else if(conver=='F'){
			printf("Escreva a temperatura: ");
		    scanf("%d",&temp);
		
			tempConvertida=(temp-32)*5.0/9.0;
			printf("\n%d\n",tempConvertida);
		}else{
			printf("\nOpção invalida\n");
		}
		
		printf("Continuar?(S/N): ");
		scanf(" %c",&conti);
	}while(conti!='N');
	
	return 0;
}
