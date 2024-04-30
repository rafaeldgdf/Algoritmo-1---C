#include <stdio.h>
int main() {

  // DESAFIO 12

  int diaDaSemana;
  printf ("Escolha um número de 1 a 7: ");
  scanf("%d", &diaDaSemana);
  printf("\n");
  printf("\n");
  
  switch (diaDaSemana) 
{
case 1: 
printf ("1º dia da semana: DOMINGO\n"); 
break; 
case 2: 
printf ("2º dia da semana: SEGUNDA-FEIRA\n"); 
break; 
case 3: 
printf ("3º dia da semana: TERÇA-FEIRA\n");  
break; 
case 4: 
printf ("4º dia da semana: QUARTA-FEIRA\n");  
break; 
case 5: 
printf ("5º dia da semana: QUINTA-FEIRA\n"); 
break; 
case 6: 
printf ("6º dia da semana: SEXTA-FEIRA\n"); 
break;
case 7: 
printf ("7º dia da semana: SÁBADO\n"); 
break; 

default: 
printf("Número inválido.\n");
}
  return 0;
}