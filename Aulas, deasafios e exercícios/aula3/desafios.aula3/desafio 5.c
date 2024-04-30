#include <stdio.h>
int main() {

  // DESAFIO 5 

char nome[20]; //para declarar string
int idade;
printf("Digite seu nome: ");
scanf("%s", nome);
printf("Digite sua idade: ");
scanf("%d", &idade); // quando for ler um int, colocar & 

printf("Olá, %s, você tem %d anos.\n", nome, idade);
return 0;
}