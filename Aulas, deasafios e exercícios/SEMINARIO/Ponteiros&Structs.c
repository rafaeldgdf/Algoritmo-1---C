#include <stdio.h>

int main(void) {

  struct ficha_aluno {
      char nome[40];
      int numero;
      float nota;
  };

  struct ficha_aluno aluno;

  //buscando endereço da struct 
  printf("Endereço da estrutura da struct aluno é: %p\n", &aluno);


  //buscando o endereço do membro dentro da struct: 
  printf("Endereço de nota dentro da struct aluno é: %p\n", &aluno.nota);

  //atribuindo valor ao membro da struct 
  aluno.nota = 8;
  printf("A nota do aluno é: %.2f\n", aluno.nota);

  
  //buscando o endereço do membro dentro da struct: 
  printf("Endereço de nota dentro da struct aluno é: %p\n", &aluno.nota);




    return (0);
}