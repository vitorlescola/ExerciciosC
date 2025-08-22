#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	int nota100,nota50,nota20,nota10,nota5;
	
	printf("Escreva o valor para receber: ");
	scanf("%d",&valor);
	
	nota100=valor/100;
    valor%=100;

    nota50=valor/50;
    valor%=50;

    nota20=valor/20;
    valor%=20;

    nota10=valor/10;
    valor%=10;

    nota5=valor/5;
    valor%=5;
	
	printf("\nNota de 100: %d\n",nota100);
	printf("\nNota de 50: %d\n",nota50);
	printf("\nNota de 20: %d\n",nota20);
	printf("\nNota de 10: %d\n",nota10);
	printf("\nNota de 5: %d\n",nota5);
}
