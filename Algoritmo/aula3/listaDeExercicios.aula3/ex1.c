#include <stdio.h>
int main() {

//EX1: Escreva um programa em C para calcular a área de um retângulo. Solicite ao usuário que insira a largura e a altura do retângulo. 

float largura, altura, area;
  printf("Digite a largura do retângulo: ");
  scanf("%f", &largura); 
  printf("Digite a altura do retângulo: ");
  scanf("%f", &altura);
  area = largura * altura;
  printf("A area do retângulo é: " "%.2f\n", area); 
return 0;
}