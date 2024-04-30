// 5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.

#include <stdio.h>

int main() {
  int numero, soma;
  int contador = 1;
  while (contador <= 10) {
    printf("Digite um número: ");
    scanf("%d", &numero);
    soma += numero; // soma = soma + numero;
    contador++;
  }

  printf("A soma dos números digitados é: %d \n", soma);

  return 0;
}