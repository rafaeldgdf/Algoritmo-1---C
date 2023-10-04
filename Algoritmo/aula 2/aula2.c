// biblioteca de entrada e saída
#include <stdio.h>

// função principal
int main() {
  printf("ANOTAÇÕES\n");
  printf("Olá mundo!"
         "\n");
  printf("\n");
  int numero = 55;
  printf("%d", numero); // declarar número inteiro
  printf("\n");
  float numero2 = 80.5466478978; // para declarar número decimal
  printf("\n");
  printf("%.2f", numero2); // para mostrar numero decimal arredondado em 2 casas
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");

  // EXERCÍCIO DE MÉDIA + 4 NÚMEROS INTEIROS + SABER APROVAÇÃO DO ALUNO
  printf("EXERCÍCIO MÉDIA\n");
  float num1, num2, num3, num4, resultado;
  printf("Digite a primeira nota: ");
  scanf("%f", &num1); // comando para o valor da variável ser buscado pelo print,
                // deve-se utilizar scan e e concatenar o tipo e a variável
  printf("Digite a segunda nota: ");
  scanf("%f", &num2);
  printf("Digite a terceira nota: ");
  scanf("%f", &num3);
  printf("Digite a quarta nota: ");
  scanf("%f", &num4);
  resultado = (num1 + num2 + num3 + num4) / 4;
  printf("Sua média é: " "%.2f\n", resultado); // comando para arredondar

  if (resultado >= 7) {
    printf("Você foi aprovado!");
  } else {
    printf("BURRO KKKKKKKKKKKKKKKKKKKKK");
  };

  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");

  // EXERCÍCIO RETÂNGULO
  printf("EXERCÍCIO RETÂNGULO\n");
  int base, altura, area;
  printf("Digite a base do retângulo: ");
  scanf("%d", &base);
  printf("Digite a altura do retângulo: ");
  scanf("%d", &altura);
  area = base * altura;
  printf("A area do retângulo é: "
         "%d\n",
         area);
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");

  // PAR OU IMPAR (TESTE CONDICIONAL)
  printf("PAR OU ÍMPAR\n");
  int parImpar;
  printf("Digite um número: ");
  scanf("%d", &parImpar);

  if (parImpar % 2 == 0) {
    printf("O número é par");
  } else {
    printf("O número é impar");
  };

  return 0; // desbugar código
}