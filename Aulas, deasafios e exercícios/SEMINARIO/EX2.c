  // 2. Implemente uma função que receba um ponteiro para uma struct pessoa e adicione um ano à idade da pessoa.


  #include <stdio.h>

  //Definição da struct
  struct pessoa {
   char nome[20];
   int idade;
  };

  //Incrementa o valor da idade em 1
  void adiciona_ano(struct pessoa *p) {
   p->idade++;
  }

  int main() {
   struct pessoa pessoa;

   // Solicita ao usuário o nome
   printf("Digite o nome: ");
   scanf("%s", pessoa.nome);

   // Solicita ao usuário a idade
   printf("Digite a idade: ");
   scanf("%d", &pessoa.idade);

   // Solicita ao usuário se deseja incrementar a idade
   printf("Deseja incrementar a idade? (s/n): ");
   char resposta;
   scanf(" %c", &resposta);

   // Incrementar idade
   if (resposta == 's') {
    adiciona_ano(&pessoa);
   }

   // Imprime o nome e a idade, com o incremento, se necessário
   printf("Nome: %s\n", pessoa.nome);
   printf("Idade: %d\n", pessoa.idade);

   return 0;
  }