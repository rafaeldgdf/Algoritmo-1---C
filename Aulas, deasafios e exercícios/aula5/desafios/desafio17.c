#include <stdio.h>

int main() {

  int nota1, nota2, media, menu;

  printf("Digite a nota 1: ");
  scanf("%d", &nota1);
  printf("Digite a nota 2: ");
  scanf("%d", &nota2);

  media = (nota1 + nota2) / 2;

  printf("Média: %d\n", media);

  do {

    printf("1 - Continuar\n");
    printf("2 - Sair\n");
    printf("Digite sua opção: ");
    scanf("%d", &menu);

    switch (menu) {
    case 1:
      printf("Continuando...\n");
      break;
    case 2:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida.\n");
    }
  } while (menu != 2);

  return 0;
}