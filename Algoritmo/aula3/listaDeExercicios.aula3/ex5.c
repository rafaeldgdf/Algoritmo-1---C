#include <stdio.h>
int main() {

//EX5: Escreva um programa em C para converter um valor em dólares para euros usando uma taxa de câmbio fornecida pelo usuário. 

  float dolar, cambio, conversao;
  printf("Digite o valor em dólar: ");
  scanf("%f", &dolar); 
  printf("Digite a taxa de câmbio: ");
  scanf("%f", &cambio);
  conversao = cambio * dolar; 
  printf("%.2f dólares convertidos em euros: %.2f\n", dolar, conversao);

  return 0;
}