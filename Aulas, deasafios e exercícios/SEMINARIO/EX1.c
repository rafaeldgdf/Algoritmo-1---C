//1. Implemente uma função que receba um ponteiro para uma struct pessoa e imprima os valores dos campos da struct.

#include <stdio.h>

//Definicao da struct pessoa
struct pessoa {
 char nome[20];
 int idade;
};

//Declaracao da funcao e recebe o ponteiro para struct pessoa
void print_pessoa(struct pessoa *p) {
 //O OPERADOR -> É usado para acessar os campos (usando ponteiros))
 printf("Nome: %s\n", p->nome);
 printf("Idade: %d\n", p->idade);
}

int main() {
 // Declaração da variável pessoa
 struct pessoa pessoa;

 // Solicita ao usuário o nome
 printf("Digite o nome: ");
 scanf("%s", pessoa.nome);

 // Solicita ao usuário a idade
 printf("Digite a idade: ");
 scanf("%d", &pessoa.idade);

 // Chama a função print_pessoa()
 print_pessoa(&pessoa);

 return 0;
}