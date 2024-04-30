#include <stdio.h>
int main(void) {
  // estrutura para definição de struct -> struct nome_da_struct {}
  struct ficha_aluno {
    char nome[40]; // dentro das {} colocaresmos os:
    int numero;    // - TIPOS de variáveis (int, float, char...)
    float nota;    //  - MEMBROS nome dos campos (Nota, nome, turma...)

  }; // isto define a struct, mas não a variável

  struct ficha_aluno aluno; // declaração da variável aluno do tipo struct

  printf("Cadastro do aluno\n");
  printf("Nome: ");
  scanf("%s", aluno.nome); // estrutura para acesso do membro dentro da struct 

  printf("Número: ");
  scanf("%d", &aluno.numero);

  printf("Nota: ");
  scanf("%f", &aluno.nota);
  
  printf("\n");
  printf("\n");
  printf("\n");
  
  printf("Lendo dados da struct \n");
  printf("Nome: %s \n", aluno.nome);
  printf("Número: %d\n", aluno.numero);
  printf("Nota: %.2f\n", aluno.nota);
  return (0);
}