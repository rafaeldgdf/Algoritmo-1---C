#include <stdio.h>
int main() {

// Questão 3: Faça um programa em C que calcule a média de três números inteiros fornecidos pelo usuário e exiba o resultado.

  float num1, num2, num3, resultado;
  printf("Digite o primeiro número: ");
  scanf("%f", &num1); 
  printf("Digite o segundo número: ");
  scanf("%f", &num2);
  printf("Digite o terceiro número: ");
  scanf("%f", &num3);
  resultado = (num1 + num2 + num3) / 3;
  printf("A média dos três números escolhidos é: " "%.2f\n", resultado); 

  



  
return 0;
}