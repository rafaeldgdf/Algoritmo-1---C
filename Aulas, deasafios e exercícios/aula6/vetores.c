#include <stdio.h>

int main ()
{
// INDICE           0  1  2  3  4
  int numero[5] = { 1, 2, 3, 4, 5 };
  for (int i = 0; i < 5; i++) // ver todo vetor
  printf("%d\n", numero[i]);
  printf ("%d\n", numero[-1]); // retorna 0
  printf ("%d\n", numero[0]);
  printf ("%d\n", numero[4]);




  char *nomes[4] = { "João", "Maria", "Paulo", "Paula" };
  printf ("%s\n", nomes[0]);
  printf ("%s\n", nomes[1]);
  printf ("%s", nomes[-1]);	// retorna null


  return 0;
}
