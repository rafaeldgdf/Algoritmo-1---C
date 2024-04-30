// Alunos: Rafael Vitor de Oliveira, Matheus Eduardo e Felipe Alves.
// Jogo da velha

#include <stdio.h>

int main() {
  char jogada1 = '1';
  char jogada2 = '2';
  char jogada3 = '3';
  char jogada4 = '4';
  char jogada5 = '5';
  char jogada6 = '6';
  char jogada7 = '7';
  char jogada8 = '8';
  char jogada9 = '9';

  printf("###JOGO DA VELHA###\n");

  int menu;
  printf("1 - Jogar\n");
  printf("2 - Manual de instruções\n");
  printf("3 - Sair\n");
  printf("Digite sua opção: ");
  scanf("%d", &menu);

  char jogo;
  do {
    switch (menu) {
    // menu de entrada
    case 1:
      jogo = 's';
      break;

    case 2:
      jogo = 'n';
      printf("Manual: \n");
      printf("1- Jogador 1 = X    |   Jogador 2 = O\n");
      printf("2- As jogadas serão alternadas entre jogador 1 e jogador 2 e o "
             "primeiro a preencher três espaços em linha ganha.\n");
      printf("3- Cada jogador deverá preencher o tabuleiro com número "
             "disponível.\n");
      printf(
          "4- Caso um dos jogadores digite '0' (zero), o jogo dará velha.\n");
      break;

    case 3:
      jogo = 'n';
      printf("Fim de jogo.\n");
      break;
    }
  } while (menu != 2 && jogo != 's' && menu != 3);

  // tabuleiro
  printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
  printf("----------\n");
  printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
  printf("----------\n");
  printf("%c | %c | %c\n", jogada7, jogada8, jogada9);

  if (jogo == 'n' || jogo == 'N') {
    return 0;
  }

  while (jogo == 's' || 'S') {
    char jogador1[2];
    printf("Jogue jogador 1: ");
    scanf("%s", jogador1);
    int jogada = atoi(jogador1); // conversor de string para numero inteiro

    // comandos jogador 1
    //  jogadas possíveis
    if (jogada == 1) {
      jogada1 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada == 2) {
      jogada2 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada == 3) {
      jogada3 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada == 4) {
      jogada4 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada == 5) {
      jogada5 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada == 6) {
      jogada6 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada == 7) {
      jogada7 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada == 8) {
      jogada8 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada == 9) {
      jogada9 = 'X';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    // condições de vitória
    if (jogada1 == 'X' && jogada2 == 'X' && jogada3 == 'X') {
      printf("Jogador 1 ganhou!\n");
      break;
    }
    if (jogada4 == 'X' && jogada5 == 'X' && jogada6 == 'X') {
      printf("Jogador 1 ganhou!\n");
      break;
    }
    if (jogada7 == 'X' && jogada8 == 'X' && jogada9 == 'X') {
      printf("Jogador 1 ganhou!\n");
      break;
    }
    if (jogada1 == 'X' && jogada4 == 'X' && jogada7 == 'X') {
      printf("Jogador 1 ganhou!\n");
      break;
    }
    if (jogada2 == 'X' && jogada5 == 'X' && jogada8 == 'X') {
      printf("Jogador 1 ganhou!\n");
      break;
    }
    if (jogada3 == 'X' && jogada6 == 'X' && jogada9 == 'X') {
      printf("Jogador 1 ganhou!\n");
      break;
    }
    if (jogada1 == 'X' && jogada5 == 'X' && jogada9 == 'X') {
      printf("Jogador 1 ganhou!\n");
      break;
    }
    if (jogada3 == 'X' && jogada5 == 'X' && jogada7 == 'X') {
      printf("Jogador 1 ganhou!\n");
      break;
    }

    // declaração de empate
    if (jogada == 00) {
      printf("Deu velha. \n");
      break;
    }

    // comandos jogador 2
    // jogadas possíveis
    char jogador2[2];
    printf("Jogue jogador 2: ");
    scanf("%s", jogador2);
    int jogada11 = atoi(jogador2);

    if (jogada11 == 1) {
      jogada1 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada11 == 2) {
      jogada2 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada11 == 3) {
      jogada3 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada11 == 4) {
      jogada4 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada11 == 5) {
      jogada5 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada11 == 6) {
      jogada6 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada11 == 7) {
      jogada7 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada11 == 8) {
      jogada8 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    if (jogada11 == 9) {
      jogada9 = 'O';
      printf("%c | %c | %c\n", jogada1, jogada2, jogada3);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada4, jogada5, jogada6);
      printf("----------\n");
      printf("%c | %c | %c\n", jogada7, jogada8, jogada9);
    }

    // condições de vitória
    if (jogada1 == 'O' && jogada2 == 'O' && jogada3 == 'O') {
      printf("Jogador 2 ganhou!\n");
      break;
    }
    if (jogada4 == 'O' && jogada5 == 'O' && jogada6 == 'O') {
      printf("Jogador 2 ganhou!\n");
      break;
    }
    if (jogada7 == 'O' && jogada8 == 'O' && jogada9 == 'O') {
      printf("Jogador 2 ganhou!\n");
      break;
    }
    if (jogada1 == 'O' && jogada4 == 'O' && jogada7 == 'O') {
      printf("Jogador 2 ganhou!\n");
      break;
    }
    if (jogada2 == 'O' && jogada5 == 'O' && jogada8 == 'O') {
      printf("Jogador 2 ganhou!\n");
      break;
    }
    if (jogada3 == 'O' && jogada6 == 'O' && jogada9 == 'O') {
      printf("Jogador 2 ganhou!\n");
      break;
    }
    if (jogada1 == 'O' && jogada5 == 'O' && jogada9 == 'O') {
      printf("Jogador 2 ganhou!\n");
      break;
    }
    if (jogada3 == 'O' && jogada5 == 'O' && jogada7 == 'O') {
      printf("Jogador 2 ganhou!\n");
      break;
    }

    // declaração de empate
    if (jogada11 == 00) {
      printf("Deu velha. \n");
      break;
    }
  }

  return 0;
}