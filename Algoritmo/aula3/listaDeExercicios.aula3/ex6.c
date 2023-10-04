#include <stdio.h>
int main() {

//EX6: Escreva um programa em C para calcular o valor de uma expressão matemática simples: (a + b) * (c-d). Solicite aos usuários os valores de a,b,c,d. 

  
  printf("Expressão matemática:(a + b) * (c-d)\n");
  printf("\n");
  printf("\n");
  int a,b,c,d, resultado;
  printf("Atribua o valor de a: ");
  scanf("%d", &a); 
  printf("Atribua o valor de b: ");
  scanf("%d", &b); 
  printf("Atribua o valor de c: ");
  scanf("%d", &c); 
  printf("Atribua o valor de d: ");
  scanf("%d", &d); 

  resultado = (a + b) * (c-d); 

  printf("Expressão: (%d + %d) * (%d - %d)\n", a,b,c,d);
  printf("Resultado da expressão acima é: %d", resultado);

  return 0;
}