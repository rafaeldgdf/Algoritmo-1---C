#include <stdio.h>
int main() {

// DESAFIO 9
  printf("EXERCÍCIO MÉDIA\n");
  float num1, num2, num3, num4, resultado;
  printf("Digite a primeira nota: ");
  scanf("%f", &num1); 
  printf("Digite a segunda nota: ");
  scanf("%f", &num2);
  printf("Digite a terceira nota: ");
  scanf("%f", &num3);
  printf("Digite a quarta nota: ");
  scanf("%f", &num4);
  resultado = (num1 + num2 + num3 + num4) / 4;
  printf("Sua média é: " "%.2f\n", resultado); 

  if (resultado >= 7) {
    printf("Você foi aprovado!");
  } else {
    printf("Aluno reprovado");
  };

return 0;
}