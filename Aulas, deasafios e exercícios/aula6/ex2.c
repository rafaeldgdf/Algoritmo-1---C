
#include <stdio.h>
#define TAM 5

int main() {
  // lendo notas
  float notas[TAM];
  for (int i = 0; i < TAM; i++) {
    printf("Digite a nota: ");
    scanf("%f", &notas[i]);
  }

  for (int i = 0; i < TAM; i++)
    printf("%.2f\n", notas[i]);

  for (int i = 0; i < TAM; i++)
    if (notas[i] >= 7) {
      printf("Aprovado\n");
    } else {
      printf("Reprovado\n");
    }

  return 0;
}