#include <stdio.h>
int main() {

// Questão 2: Crie um programa em C que leia um número real (float) digitado pelo usuário e imprima o seu dobro.

float num1, dobro;
printf("Digite um número real (decimal): "); 
scanf("%f", &num1); 

dobro = num1 * 2; 
printf("O dobro do número selecionado é: %f", dobro); 


  
return 0;
}