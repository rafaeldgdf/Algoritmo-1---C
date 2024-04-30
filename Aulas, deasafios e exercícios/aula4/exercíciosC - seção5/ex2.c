//2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while. 
#include <stdio.h> 

int main () {

 printf("FOR\n");

 int contador;
 
  for (contador = 1; contador <= 100; contador++)
  {
  printf("%d\n",contador);
  } 


printf("WHILE\n");
int contador2 = 1;
while (contador2 <= 100){
  printf("%d\n",contador2);
   contador2++;
}


printf("DO WHILE\n");
int contador3 = 1;
do {
printf("%d\n",contador3);
 contador3++;
}while (contador3 <=100);



return 0; 
}
