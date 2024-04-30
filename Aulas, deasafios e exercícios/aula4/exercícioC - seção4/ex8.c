//8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina. 
#include <math.h>
#include <stdio.h>

int main() {

  printf("CÁLCULO MÉDIA\n");

  float num1, num2;
  printf("Digite a nota 1: ");
  scanf("%f", &num1);

  if (num1 < 0) {
    printf("Nota inválida.\n");
  } else if (num1 > 10) {
    printf("Nota inválida.\n");
  }

  printf("Digite a nota 2: ");
  scanf("%f", &num2);

  if (num2 < 0) {
    printf("Nota inválida.\n");
  } else if (num2 > 10) {
    printf("Nota inválida.\n");
  }

  float media = (num1 + num2) / 2;

  if (media < 0) {
    printf("Média inválida.\n");
  } else if (media > 10) {
    printf("Média inválida.\n");
  } else {
    printf("A média do aluno é: %.2f", media);
  }

  return 0;
}