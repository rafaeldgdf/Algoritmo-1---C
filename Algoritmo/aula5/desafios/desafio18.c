#include <stdio.h>

int main() {

  int opcao;

  do {

    printf("1 - Continuar\n");
    printf("2 - Sair\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("Continuando...\n");
      break;
    case 2:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida.\n");
    }
  } while (opcao != 2);

  return 0;
}