#include <stdio.h>
#include <stdlib.h>

struct ficha_aluno {
    char nome[40];
    int numero;
    float nota;
};

int main() {
    // Criando um ponteiro para a struct
    struct ficha_aluno *ponteiro_aluno;

    // Alocando dinamicamente memória para a estrutura
    ponteiro_aluno = malloc(sizeof(struct ficha_aluno));     //O operador sizeof em C retorna o tamanho em bytes da estrutura especificada.  
                                                             //Neste caso, sizeof(struct ficha_aluno) retorna o número total de bytes necessários para armazenar uma estrutura ficha_aluno         
     //A função malloc (memory allocation) aloca dinamicamente a quantidade de memória especificada (em bytes) pelo argumento. 
    // Neste caso, malloc(sizeof(struct pessoa)) aloca memória suficiente para armazenar uma estrutura pessoa. Essa função retorna um ponteiro para a memória alocada.

 
    // Inicializando a estrutura através do ponteiro
    strcpy(ponteiro_aluno->nome, "Maria");  //strcpy é uma função em C que copia uma string para outra.
      ponteiro_aluno->numero = 5;  // Usa-se a '->' ara acessar o membro 'nome' da struct 'ficha_aluno' apontada pelo ponteiro '*ponteiro_aluno'
                                   //  A precedência do operador '->' é alta o suficiente para que não seja necessário o uso de parenteses para uma variável int
  
    // Exibindo a estrutura através do ponteiro
    printf("Nome: %s\n", ponteiro_aluno->nome);
    printf("Número: %d\n", ponteiro_aluno->numero); 

 

    return 0;
}