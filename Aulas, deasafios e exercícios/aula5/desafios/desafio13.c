#include <stdio.h>

int main() {

  int desafiante, desafiado;

  printf("Desafiante, digite um número de 0 a 9: ");
  scanf("%d", &desafiante);
  printf("Desafiado, digite um número de 0 a 9: ");
  scanf("%d", &desafiado);

  while (desafiante != desafiado) {
    printf("Reposta incorreta.");
    printf("Tente novamente e escolha um novo número: ");
    scanf("%d", &desafiado);
  }
  if (desafiante == desafiado) {
    printf("Parabéns, você acertou!!");
  }
}
