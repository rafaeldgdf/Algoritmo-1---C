//1. Faça um programa que determine e mostre os cincos primeiros múltiplos de 3, considerando números maiores que 0. 

#include <stdio.h> 

int main () {

  int numero, contador;

  
  printf("OS CINCOS PRIMEIROS MÚLTIPLOS\n");
  printf("Digite um número: ");
  scanf("%d", &numero);
 

  for (contador = 1; contador <= 5; contador++)
  {
  int multiplos = numero * contador;
  printf("%d x %d = %d\n", numero, contador, multiplos);
  
  }



return 0; 
}
