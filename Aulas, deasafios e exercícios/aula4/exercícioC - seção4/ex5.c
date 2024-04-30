// 5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
#include <stdio.h>
#include <math.h>

int main() {

  int num1;
  printf("PAR OU ÍMPAR\n");
  printf("Digite um número: ");
  scanf("%d", &num1);


  if (num1 % 2 == 0){
    printf("%d é par", num1);
  } else {
    printf("%d é ímpar", num1);
  }

  return 0;
}