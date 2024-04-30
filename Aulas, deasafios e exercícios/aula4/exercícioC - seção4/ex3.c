//3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.

#include <stdio.h>
#include <math.h>

int main() {

  float num1;
  printf("Digite um número: ");
  scanf("%f", &num1);


  if (num1 > 0){
    double raiz = pow(num1, 0.5);
    printf("A raiz quadrada de %.2f é  %.2f", num1, raiz);
  } else {
    double quadrado = num1 * num1;
    printf("O quadrado de %.2f é: %.2f", num1, quadrado);
  }

  return 0;
}