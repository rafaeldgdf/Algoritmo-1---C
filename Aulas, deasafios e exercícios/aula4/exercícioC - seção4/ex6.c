// 6. Escreva um programa que, dados dois números inteiro, mostre na tela o maior deles, assim como a diferença existente entre ambos. 
#include <stdio.h>
#include <math.h>

int main() {

  int num1, num2, diferenca; 
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite outro número: ");
  scanf("%d", &num2);

  if (num1 > num2){
    printf("%d é maior que %d\n", num1, num2);
  } else {
    printf("%d é menor que %d\n", num1, num2);
  }

 diferenca = num1 - num2;
 printf("A diferença dos dois números digitados é: %d", diferenca);
  
  return 0;
}