//Usada para lidar com endereço de memória 
//O endereço aponta a uma referência (valor)
//Ponteiro é um tipo de variável 


#include <stdio.h>
int main (){

int num = 10; //toda variável tem um endereço de memória único

printf("O valor de num é: %d\n", num);
printf("O endereço de num é: %p\n", &num); //usamos %p para indicar o endereço da variável     //obs: deve concatenar com "&", para leitura do endereço 
printf("\n");
printf("\n");
printf("\n");
printf("\n"); 
  
int *p;      // declaração de variável do tipo ponteiro    
  
p = num;    //  não podemos atribuir o valor de 'num' a 'p', pois há incompatibilidade de tipos de variáveis
  
p = &num;  //ponteiro só armaneza dados de endereço 

  printf("O valor de p é: %p\n", p);
  printf("O valor apontado por p é: %d\n", *p); // se usa '*' para obter o conteúdo apontado por um ponteiro
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");

//não confundir o valor de P com o endereço de P 
printf("O endereço de p é: %p\n", &p);   //assim como toda variável possui o endereço única, uma variável do tipo ponteiro também possui.

  


 return 0;
}