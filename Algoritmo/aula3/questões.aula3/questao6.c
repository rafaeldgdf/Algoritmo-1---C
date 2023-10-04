#include <stdio.h>
int main() {

//Questão 6: Faça um programa em C que leia dois números inteiros do usuário e calcule o produto dos números.

int num1, num2, resultado;
printf("Digite um número inteiro: "); 
scanf("%d", &num1); 
printf("Digite um número inteiro: "); 
scanf("%d", &num2); 

resultado = num1 * num2; 
printf("O produto dos números inteiros selecionados: %d", resultado); 


  
return 0;
}
