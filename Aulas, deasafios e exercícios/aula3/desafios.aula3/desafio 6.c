#include <stdio.h>
int main() {

  // DESAFIO 6
int num1, num2, resultado;

printf("Digite o primeiro número: ");
scanf("%d", &num1); 
printf("Digite o segundo número: ");
scanf("%d", &num2); 

resultado = num1 + num2;
printf("A soma dos números: %d\n", resultado);
resultado = num1 - num2;
printf("A subtração dos números: %d\n", resultado);
resultado = num1 * num2;
printf("A multiplicação dos números: %d \n", resultado);
resultado = num1 / num2;
  if (resultado == 0) {
    printf("Digite o segundo número maior ou igual ao primeiro: ");
      scanf("%d", &num2);
  } 
resultado = num1 / num2;
printf("A divisão dos números aproximadamente é: %d \n", resultado);


  return 0;
}