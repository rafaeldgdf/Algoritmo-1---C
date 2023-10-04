#include <stdio.h>
int main() {

  // DESAFIO 7
int num1, num2, num3, resultado, multiplicador;

printf("Digite o primeiro número: ");
scanf("%d", &num1); 
printf("Digite o segundo número: ");
scanf("%d", &num2); 

resultado = num1 + num2;
printf("A soma dos números: %d\n", resultado);
printf("Digite um terceiro número: ");
scanf("%d", &num3); 
multiplicador = num3 * resultado;
printf("A multiplicação entre resultado da soma e o terceiro número digitado é: %d\n", multiplicador);

return 0;
}