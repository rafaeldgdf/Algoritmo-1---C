#include <stdio.h>
int main() {

  // DESAFIO 11

  int curso;
  printf ("Escolha um curso de idiomas: \n(1) INGLÊS \n(2) ESPANHOL \n(3) FRANCÊS \n(4) ITALIANO \n(5) ALEMÃO \n");
  scanf("%d", &curso);
  printf("\n");
  printf("\n");
  
  switch (curso) 
{
case 1: 
printf ("Parabéns, você escolhe o curso de Inglês!\n"); 
break; 
case 2: 
printf ("Parabéns, você escolhe o curso de Espanhol!\n"); 
break; 
case 3: 
printf ("Parabéns, você escolhe o curso de Francês!\n"); 
break; 
case 4: 
printf ("Parabéns, você escolhe o curso de Italiano!\n"); 
break; 
case 5: 
printf ("Parabéns, você escolhe o curso de Alemão!\n"); 
break; 

default: 
printf("Digite um curso válido.\n");
}
  return 0;
}