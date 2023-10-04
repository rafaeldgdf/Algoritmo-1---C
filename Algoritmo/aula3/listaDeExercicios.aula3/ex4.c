#include <stdio.h>
int main() {

// EX4: Escreva um programa em C para calcular o resto da divisão de dois números inteiros fornecidos pelo usuário. 


int num1, num2, resto;
  printf("Digite um número: ");
  scanf("%d", &num1); 
  printf("Digite um número novamente: ");
  scanf("%d", &num2);
  if (num1 < num2) {
  printf("Digite o um número menor ou igual ao primeiro: ");
  scanf("%d", &num2);
  }
  resto = num1 % num2;
  printf("O resto da divisão dos números escolhidos é aproximadamente %d\n", resto); 

  return 0;
}