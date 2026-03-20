#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	int idade;
	int qtd_filhos;
	char nome[16];
}registro1;

typedef struct {
	char sexo;
	int codigo;
	char nome[32];
}registro2;

typedef struct {
	float salario;
	char turno;
	char nome[32];
}registro3;

typedef struct {
	char sexo;
	int codigo;
	char estcivil;
}registro4;

int main(){
	registro1 r1;
	registro2 r2;
	registro3 r3;
	registro4 r4;
	
	printf("tamanho: %d bytes",sizeof(r1));
	printf("\ntamanho: %d bytes",sizeof(r2));
	printf("\ntamanho: %d bytes",sizeof(r3));
	printf("\ntamanho: %d bytes\n",sizeof(r4));
	
	/*//
	srand(time(NULL));
	
	
	int v[10];
	int numero=(rand()%100)+1;
	int i;
	
	v[0]=numero;
	
	while(i<10){
		numero=(rand()%100)+1;
		if(numero!=v[i]){
			v[i+1]=numero;
			printf("\n%d",v[i]);
			i++;
		}
	}*/
	
	return 0;
}
