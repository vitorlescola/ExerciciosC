#include <stdio.h>
#include <locale.h>

main(){
  float raio, raioQuadrado, area;
  
  setlocale(LC_ALL, "Portuguese");
  
  printf("Escreva o raio do circulo: ");
  scanf("%f", &raio);
  
  raioQuadrado=raio*raio;
  area=3.1416*raioQuadrado;
  
  printf("A area do circulo é: %f", area);	
}
