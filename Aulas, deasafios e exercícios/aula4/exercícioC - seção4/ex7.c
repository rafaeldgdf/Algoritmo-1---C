//7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem: "números iguais". 
#include <stdio.h>

int main() {

  int num1, num2; 
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite outro número: ");
  scanf("%d", &num2);

  if (num1 > num2){
  printf("%d é maior que %d", num1, num2);
  }else if (num1 < num2)
  printf("%d é menor que %d", num1, num2);
  else {    
  printf("Os dois números digitados são iguais.");
  }
  return 0;
}



