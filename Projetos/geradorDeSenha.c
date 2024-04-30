#include <stdio.h>

int main() {
 float temperatura, conversorTemperaturaF;
 printf("Digite a temperatura em celsius: ");
 scanf("%f", &temperatura);
 conversorTemperaturaF = (temperatura * 1.8) + 32;
 printf("Temperatura em Fahrenheit: %f", conversorTemperaturaF);
  return 0;
}


