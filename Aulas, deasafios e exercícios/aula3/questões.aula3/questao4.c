#include <stdio.h>
int main() {

// Questão 4: Escreva um programa em C que calcule e imprima a área de um retângulo. O programa deve solicitar a entrada do usuário para a base e altura do retângulo.

  float base, altura, area;
  printf("Digite a base do retângulo: ");
  scanf("%f", &base); 
  printf("Digite a altura do retângulo: ");
  scanf("%f", &altura);
  area = base * altura;
  printf("A area do retângulo é: " "%.2f\n", area); 

  



  
return 0;
}