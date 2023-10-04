#include <stdio.h>
int main() {

//Questão 7: Crie um programa em C que solicite ao usuário um número inteiro positivo e imprima o valor do número elevado ao quadrado (ou seja, o número multiplicado por ele mesmo) e também o resto da divisão desse número por 3.

int num1,quadrado, resto3;
printf("Digite um número inteiro positivo: "); 
scanf("%d", &num1); 
quadrado = num1 * num1; 
printf("O valor do númeoro escolhido ao quadrado é: %d\n", quadrado); 
resto3 = num1 % 3; 
printf("O resto da divisão do número escolhido divido por três é: %d\n", resto3); 


  
return 0;
}
