// 4. Escreva um programa que declare um inteiro, inicialize-o com 0, e
// incremente-o de 1000 em 1000, imprimindo seu valor na tela, até que seu valor
// seja 100.000.

#include <stdio.h>

int main() {

  int contador = 0;
  while (contador <= 100000) {
    printf("%d\n", contador);
    contador = contador + 999;
    contador++;
  }

  return 0;
}