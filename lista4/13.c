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
               printf("\n1º signo do zodíaco: Aquário");
             }else{
               printf("\n12º signo do zodíaco: Capricórnio");
              }
           break;
           case 2:
             if(dia<=19){
               printf("\n1º signo do zodíaco: Aquário");
             }else{
               printf("\n2º signo do zodíaco: Peixes");
              }
           break;
           case 3:
             if(dia>=21){
               printf("\n3º signo do zodíaco: Áries");
             }else{
               printf("\n2º signo do zodíaco: Peixes");
              }
           break;
           case 4:
             if(dia>=21){
               printf("\n4º signo do zodíaco: Touro");
             }else{
               printf("\n3º signo do zodíaco: Áries");
              }
           break;
           case 5:
             if(dia>=21){
               printf("\n5º signo do zodíaco: Gêmeos");
             }else{
               printf("\n4º signo do zodíaco: Touro");
              }
           break;
           case 6:
             if(dia>=21){
               printf("\n6º signo do zodíaco: Câncer");
             }else{
               printf("\n5º signo do zodíaco: Gêmeos");
              }
           break;
           case 7:
             if(dia>=22){
               printf("\n7º signo do zodíaco: Leão");
             }else{
               printf("\n6º signo do zodíaco: Câncer");
              }
           break;
           case 8:
             if(dia<=23){
               printf("\n8º signo do zodíaco: Virgem");
             }else{
               printf("\n7º signo do zodíaco: Leão");
              }
           break;
           case 9:
             if(dia>=23){
               printf("\n9º signo do zodíaco: Libra");
             }else{
               printf("\n8º signo do zodíaco: Virgem");
              }
           break;
           case 10:
             if(dia>=23){
               printf("\n10º signo do zodíaco: Escorpião");
             }else{
               printf("\n9º signo do zodíaco: Libra");
              }
           break;
           case 11:
             if(dia>=21){
               printf("\n11º signo do zodíaco: Sagitário");
             }else{
               printf("\n10º signo do zodíaco: Escorpião");
              }
           break;
           case 12:
             if(dia>=21){
               printf("\n12º signo do zodíaco: Capricórnio");
             }else{
               printf("\n11º signo do zodíaco: Sagitário");
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
