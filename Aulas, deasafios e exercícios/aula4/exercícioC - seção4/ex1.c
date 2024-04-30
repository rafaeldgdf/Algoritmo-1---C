//1.  Faça um programa que receba dois número e mostre qual deles é maior. 
#include <stdio.h>

int main() {

  int num1, num2; 
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite outro número: ");
  scanf("%d", &num2);

  if (num1 > num2){
    printf("%d é maior que %d", num1, num2);
  } else {
    printf("%d é menor que %d", num1, num2);
  }

  return 0;
}