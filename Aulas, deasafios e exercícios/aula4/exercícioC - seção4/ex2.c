#include <math.h>
#include <stdio.h>

int main() {

  float num1;
  printf("CALCULADORA RAIZ QUADRADA\n");
  printf("Digite um número: ");
  scanf("%f", &num1);

  if (num1 > 0) {
    double raiz = pow(num1, 0.5);
    printf("A raiz quadrada de %.2f é  %.2f", num1, raiz);
  } else {
    printf("Número inválido");
  }

  return 0;
}