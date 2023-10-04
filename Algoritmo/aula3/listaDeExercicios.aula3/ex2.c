#include <stdio.h>
int main() {

//EX2: Escreva um programa em C para converter graus Celsius em graus Fahrenheit. Solicite ao usuário que insira a temperatura em graus Celsius. 


float cel, conversao;
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &cel); 
  conversao = (cel * 9/5) + 32;
  printf("A temperatura em Fahrenheit é: " "%.2f\n", conversao); 
return 0;
}