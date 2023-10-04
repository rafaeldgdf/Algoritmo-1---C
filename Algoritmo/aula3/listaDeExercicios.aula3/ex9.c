#include <stdio.h>
int main() {

//EX9: Escreva um programa em C que calcule o valor em juros simples. Solicite ao usuário que insira o principal, a taxa e o período em anos. 
  
 float principal, taxaJuros, resultado;
 int periodoAnos;
  printf("Digite o principal original (valor): ");  
  scanf("%f", &principal);
  printf("Digite o período em anos: ");  
  scanf("%d", &periodoAnos); 
  printf("Digite a taxa de juros(%): ");
  scanf("%f", &taxaJuros);

  taxaJuros = taxaJuros / 100;

  resultado = principal * taxaJuros * periodoAnos;

  printf("Você pagará %.2f reais de juros em %d anos", resultado, periodoAnos);
  

return 0;
}