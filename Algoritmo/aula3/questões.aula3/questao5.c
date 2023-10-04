#include <stdio.h>
int main() {

//Questão 5: Escreva um programa em C que peça ao usuário para digitar seu nome e sobrenome separadamente. Em seguida, imprima uma mensagem de boas-vindas com o nome completo.

  char nome[20], sobrenome[20];
  printf("Digite seu primeiro nome: \n");
  scanf("%s", nome); 
  printf("Digite seu sobrenome: \n");
  scanf("%s", sobrenome); 
  printf("Olá %s %s, seja bem-vindo!", nome, sobrenome);


  
return 0;
}