#include <stdio.h> 

int main () {

  int numero, contador;


  printf("Digite um número: ");
  scanf("%d", &numero);
 

  for (contador = 1; 1 <= 10; contador++)
  {
  int tabuada = numero * contador;
  printf("%d x %d = %d\n", numero, contador, tabuada);
  if (contador == 10){break;}
  }



return 0; 
}
     

