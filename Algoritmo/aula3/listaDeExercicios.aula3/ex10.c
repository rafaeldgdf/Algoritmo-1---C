#include <stdio.h>
int main() {

//EX10: Escreva um programa em C que converta um valor de tempo em segundos para horas, minutos e segundos. Solicite ao usuário que insira o tempo em segundos.  
  
 int segundos, conversorHoras, conversorMinutos, conversorSegundos;
  printf("Digite um valor em segundos: ");  
  scanf("%d", &segundos);
  
 conversorHoras = segundos / 3600;
 conversorMinutos =  (segundos % 3600) / 60; 
 conversorSegundos = (segundos % 3600) % 60;

 printf("Tempo em horas: %d\n", conversorHoras);
 printf("Tempo em minutos: %d\n", conversorMinutos);
 printf("Tempo em segundos: %d\n", conversorSegundos);

return 0;
}