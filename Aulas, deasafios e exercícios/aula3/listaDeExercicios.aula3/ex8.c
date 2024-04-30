#include <stdio.h>
int main() {

//EX8: Escreva um programa em C que calcule a média ponderada de três notas fornecidas pelo usuário, onde as notas têm pesos diferentes. 
  
  float num1, num2, num3, resultado;
  printf("Nota 1 = peso 1\nNota 2 = peso 2\nNota 3 = peso 3\n");
  printf("\n");
  printf("\n");
  printf("Digite a nota 1: ");  
  scanf("%f", &num1); 
  printf("Digite a nota 2: ");
  scanf("%f", &num2);
  printf("Digite a nota 3: ");
  scanf("%f", &num2);
 
  num1 = num1 * 1; //peso 1 
  num2 = num2 * 2; //peso 2
  num3 = num3 * 3; //peso 3 

  resultado = (num1 + num2 + num3) / (1 + 2 + 3);

  printf("O média ponderada é: %.2f", resultado);
  

return 0;
}