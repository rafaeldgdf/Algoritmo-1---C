#include <stdio.h>
int main() {

// Questão 1: Escreva um programa em C que solicite ao usuário dois números inteiros e imprima a soma dos números.

int num1, num2, resultado;
printf("Digite um número inteiro: "); 
scanf("%d", &num1); 
printf("Digite um número inteiro: "); 
scanf("%d", &num2); 

resultado = num1 + num2; 
printf("O resultado da soma dos dois números inteiros selecionados: %d", resultado); 


  
return 0;
}