#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	int mes;
	char sn;
	
	do{
		printf("Escreva o dia que voce nasceu: ");
        scanf("%d",&dia);
    
        printf("Escreva o mes que voce nasceu (1 a 12): ");
        scanf("%d",&mes);
    
         switch(mes){
           case 1:
             if(dia>=21){
               printf("\n1� signo do zod�aco: Aqu�rio");
             }else{
               printf("\n12� signo do zod�aco: Capric�rnio");
              }
           break;
           case 2:
             if(dia<=19){
               printf("\n1� signo do zod�aco: Aqu�rio");
             }else{
               printf("\n2� signo do zod�aco: Peixes");
              }
           break;
           case 3:
             if(dia>=21){
               printf("\n3� signo do zod�aco: �ries");
             }else{
               printf("\n2� signo do zod�aco: Peixes");
              }
           break;
           case 4:
             if(dia>=21){
               printf("\n4� signo do zod�aco: Touro");
             }else{
               printf("\n3� signo do zod�aco: �ries");
              }
           break;
           case 5:
             if(dia>=21){
               printf("\n5� signo do zod�aco: G�meos");
             }else{
               printf("\n4� signo do zod�aco: Touro");
              }
           break;
           case 6:
             if(dia>=21){
               printf("\n6� signo do zod�aco: C�ncer");
             }else{
               printf("\n5� signo do zod�aco: G�meos");
              }
           break;
           case 7:
             if(dia>=22){
               printf("\n7� signo do zod�aco: Le�o");
             }else{
               printf("\n6� signo do zod�aco: C�ncer");
              }
           break;
           case 8:
             if(dia<=23){
               printf("\n8� signo do zod�aco: Virgem");
             }else{
               printf("\n7� signo do zod�aco: Le�o");
              }
           break;
           case 9:
             if(dia>=23){
               printf("\n9� signo do zod�aco: Libra");
             }else{
               printf("\n8� signo do zod�aco: Virgem");
              }
           break;
           case 10:
             if(dia>=23){
               printf("\n10� signo do zod�aco: Escorpi�o");
             }else{
               printf("\n9� signo do zod�aco: Libra");
              }
           break;
           case 11:
             if(dia>=21){
               printf("\n11� signo do zod�aco: Sagit�rio");
             }else{
               printf("\n10� signo do zod�aco: Escorpi�o");
              }
           break;
           case 12:
             if(dia>=21){
               printf("\n12� signo do zod�aco: Capric�rnio");
             }else{
               printf("\n11� signo do zod�aco: Sagit�rio");
              }
           break;
           default:
             printf("\nMes invalido");
           break;  
         }
           
    printf("\n\nContinuar?  S/N: ");
    scanf(" %c",&sn);
    printf("\n");
	}while(sn!='N');
	
	return 0;
}
