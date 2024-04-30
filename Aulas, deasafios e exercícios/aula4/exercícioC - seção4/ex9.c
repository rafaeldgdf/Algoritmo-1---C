//9. Leia o salário de um trabalhador e o valor de prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: "empréstimo não concedido", caso contrário imprima: "empréstimo concedido".
#include <math.h>
#include <stdio.h>

int main() {

  printf("VERIFICAÇÃO DE EMPRÉSTIMO\n");

  double salario, emprestimo;
  printf("Digite o valor do seu salário: ");
  scanf("%lf", &salario);
  printf("Digite o valor do empréstimo: ");
  scanf("%lf", &emprestimo);


  double verificador = salario * 0.20;
 
  
  if (emprestimo <= verificador){
      printf("Empréstimo de %.2f reais concedido com sucesso.", emprestimo);
  } else {
      printf("Empréstimo negado!");
  }

  return 0;
} 
