//3. Implemente uma função que receba um ponteiro para uma struct pessoa e remova a pessoa da lista de pessoas.

#include <stdio.h>
#include <string.h>

struct pessoa {
  char nome[20];
  int idade;
};

// Função para remover uma pessoa da lista
void remover_pessoa(struct pessoa *lista, int *tamanho, struct pessoa *pessoa) {
  for (int i = 0; i < *tamanho; i++) {
    if (&lista[i] == pessoa) {
      // Se encontrarmos a pessoa, movemos as pessoas seguintes uma posição para trás
      for (int j = i; j < *tamanho - 1; j++) {
        lista[j] = lista[j + 1];
      }
      (*tamanho)--; // Reduz o tamanho da lista após a remoção
      return;
    }
  }
}

int main() {
  // Crie uma lista de pessoas.
  struct pessoa lista[] = {
    {"Filipe", 36},
    {"Mano", 25},
    {"Rafael", 20},
    {"Hugo", 23},
    {"Marinho", 42},
  };


//Gambiarra para mostrar a struct na tela
  int tamanho_lista = sizeof(lista) / sizeof(lista[0]);

  //Imprime a lista de pessoa 
  printf("\nLista de Pessoas:\n");
  for (int i = 0; i < tamanho_lista; i++) {
    printf("Nome: %s\n", lista[i].nome);
    printf("Idade: %d\n\n", lista[i].idade);
  }

  // Solicitar ao usuário o nome da pessoa a ser removida
  char nome_a_remover[20];
  printf("Digite o nome da pessoa a ser removida, igual esta na lista: \n");
  scanf("%s", nome_a_remover);

  // Remova a pessoa com o nome fornecido da lista.
  for (int i = 0; i < tamanho_lista; i++) {
      //Dentro do loop, esta condição compara o nome da pessoa na posição atual (lista[i].nome) com o nome fornecido pelo usuário (nome_a_remover).

      //strcmp é uma função que compara duas strings. Se o resultado for 0, significa que as strings são iguais (os nomes correspondem).
    if (strcmp(lista[i].nome, nome_a_remover) == 0) {
      remover_pessoa(lista, &tamanho_lista, &lista[i]);
      break; // Não precisamos continuar procurando após a remoção
    }
  }

  // Imprima a lista de pessoas atualizada.
  printf("\nLista de Pessoas Atualizada:\n");
  for (int i = 0; i < tamanho_lista; i++) {
    printf("Nome: %s\n", lista[i].nome);
    printf("Idade: %d\n\n", lista[i].idade);
  }

  return 0;
} 
