#include <stdio.h>
int main() {

//EX7: Escreva um programa em C para calcular o quociente e o resto da divisão de dois números inteiros fornecidos pelo usuário. 
  
  int num1, num2, quociente, resto;
  printf("Digite um número: ");
  scanf("%d", &num1); 
  printf("Digite um número novamente: ");
  scanf("%d", &num2);
  if (num1 < num2) {
  printf("Digite o um número menor ou igual ao primeiro: ");
  scanf("%d", &num2);
  }
  quociente = num1 / num2;
  resto = num1 % num2;
  printf("Quociente: %d\nResto: %d", quociente, resto); 

  return 0;
}