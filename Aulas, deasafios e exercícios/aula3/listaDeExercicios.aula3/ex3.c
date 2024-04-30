#include <stdio.h>
int main() {

//EX3: Escreva um programa em C que calcule a área de um triângulo usando a fórmula da área (A=1/2 * base * altura). Solicite ao usuário que insira a base e altura do triângulo.


float base, altura, area;
  printf("Digite a base do triângulo: ");
  scanf("%f", &base); 
  printf("Digite a altura do triângulo: ");
  scanf("%f", &altura);
  area = (base * altura) / 2;
  printf("A area do triângulo é: " "%.2f\n", area); 

  return 0;
}