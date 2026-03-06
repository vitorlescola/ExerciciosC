#include <stdio.h>
#include <string.h>

int main(){
	int x=10;
	int y=20;
	int z=100;
	int N=24;
	char tc='c';
	
	int *ptr1=&x;
	int *ptr2=&y;
	int *ptr3=&z;
	char *ptr4=&tc;
	int *ptrN=&N;
	
	printf("  valor x = %d\n",x);
	printf("  valor y = %d\n",y);
	printf("  valor z = %d\n",z);
	printf("  valor N = %d\n",N);
	printf(" valor tc = %c\n",tc);
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	
	printf("  End. Mem. x = %p\n",&x);
	printf("  End. Mem. y = %p\n",&y);
	printf("  End. Mem. z = %p\n",&z);
	printf("  End. Mem. N = %p\n",&N);
	printf(" End. Mem. tc = %p\n",&tc);
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	
	printf("  End. Mem. ptr1 = %p\n",&ptr1);
	printf("  End. Mem. ptr2 = %p\n",&ptr2);
	printf("  End. Mem. ptr3 = %p\n",&ptr3);
	printf("  End. Mem. ptr4 = %p\n",&ptr4);
	printf("  End. Mem. ptrN = %p\n",&ptrN);
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	
	printf("  Valor ptr1 = %p\n",ptr1);
	printf("  Valor ptr2 = %p\n",ptr2);
	printf("  Valor ptr3 = %p\n",ptr3);
	printf("  Valor ptr4 = %p\n",ptr4);
	printf("  Valor ptrN = %p\n",ptrN);
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	
	printf("  Vlr. onde ptr1 aponta = %d\n",*ptr1);
	printf("  Vlr. onde ptr2 aponta = %d\n",*ptr2);
	printf("  Vlr. onde ptr3 aponta = %d\n",*ptr3);
	printf("  Vlr. onde ptr4 aponta = %d\n",*ptr4);
	printf("  Vlr. onde ptr1N aponta = %d\n",*ptrN);
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	
	printf("  End. Mem. onde ptr1 aponta = %p\n",ptr1);
	printf("  End. Mem. onde ptr2 aponta = %p\n",ptr2);
	printf("  End. Mem. onde ptr3 aponta = %p\n",ptr3);
	printf("  End. Mem. onde ptr4 aponta = %p\n",ptr4);
	printf("  End. Mem. onde ptrN aponta = %p\n",ptrN);
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	
	printf("Pressione qualquer tecla para continuar.\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	
	char nome[40];
	int i;
	
	printf("\n\nEscreva o seu nome: ");
	fgets(nome,sizeof(nome),stdin);
	nome[strlen(nome)-1]='\0';
	
	printf("Endereco de memoria da string nome: %p\n",&nome);
	
	for(i=0;i<strlen(nome);i++){
		printf("Endereco de memoria do %d caracter da string nome: %p\n",i,&nome[i]);
	}
	
	return 0;
}
