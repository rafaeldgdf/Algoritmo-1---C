// 4. Faça um programa que leia um número e, caso ela seja postiivo, calcule e mostre: o número digitado ao quadrado e a raiz quadrada do número digitado. 
#include <stdio.h>
#include <math.h>

int main() {

  float num1;
  printf("Digite um número: ");
  scanf("%f", &num1);


  if (num1 > 0){
    double raiz = pow(num1, 0.5);
    double quadrado = num1 * num1;
    
    printf("A raiz quadrada de %.2f é  %.2f\n", num1, raiz);
    printf("O quadrado de %.2f é: %.2f\n", num1, quadrado);
    
    
  } else {
    printf("Número inválido.");
  }

  return 0;
}