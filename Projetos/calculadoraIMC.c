//Faculdade SENAC
// Alunos: Rafael Vitor de Oliveira
// Calculadora de IMC

#include <math.h>
#include <stdio.h>
#include <stdlib.h> // biblioteca para limpar tela

int main() {

  char continuar;

  do {
    printf("*****CÁLCULADORA IMC*****\n");
    char nome[40];
    printf("Nome: ");
    scanf(" %s", nome);

    int altura;
    float peso;
    printf("Altura em cm: ");
    scanf("%d", &altura);

    do {
      if (altura < 0) {
        printf("Altura inválida. \n");
        printf("Altura em cm: ");
        scanf("%d", &altura);
      }
    } while (altura <= 0);

    printf("Peso em kg: ");
    scanf("%f", &peso);

    do {
      if (peso < 0) {
        printf("Peso inválido. \n");
        printf("Peso em kg: ");
        scanf("%f", &peso);
      }
    } while (peso <= 0);

    float imc;
    int pesoIdeal, faltante;
    char sexo;
    printf("Digite 'M' para masculino e digite 'F' para feminino.\nSexo: ");
    scanf(" %c", &sexo);

    switch (sexo) {
    case 'M':
    case 'm':
      imc = peso / ((altura / 100.0 * altura / 100.0));
      printf("\nDados de %s: \n", nome);
      printf("Seu IMC é: %.2f\n", imc);
      if (imc < 16.9) {
        printf("Muito abaixo do peso.\n");
      }
      if (imc >= 17 && imc <= 18.4) {
        printf("Abaixo do peso.\n");
      }
      if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal.\n");
      }
      if (imc >= 25 && imc <= 29.9) {
        printf("Acima do peso.\n");
      }
      if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade grau I.\n");
      }
      if (imc >= 35 && imc <= 40) {
        printf("Obesidade grau II.\n");
      }
      if (imc > 40) {
        printf("Obesidade grau III.\n");
      }
      pesoIdeal = (727 * altura) / 1000 - 58;
      printf("Seu peso ideal é: %d kg\n", pesoIdeal);
      faltante = pesoIdeal - peso;
      printf("Para alcançar o peso ideal, faltam: %d kg\n", faltante);
      break;

    case 'F':
    case 'f':
      imc = peso / ((altura / 100.0 * altura / 100.0));
      printf("\nDados de %s: \n", nome);
      printf("Seu IMC é: %.2f\n", imc);
      if (imc < 16.9) {
        printf("Muito abaixo do peso.\n");
      }
      if (imc >= 17 && imc <= 18.4) {
        printf("Abaixo do peso.\n");
      }
      if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal.\n");
      }
      if (imc >= 25 && imc <= 29.9) {
        printf("Acima do peso.\n");
      }
      if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade grau I.\n");
      }
      if (imc >= 35 && imc <= 40) {
        printf("Obesidade grau II.\n");
      }
      if (imc > 40) {
        printf("Obesidade grau III.\n");
      }
      pesoIdeal = (621 * altura) / 1000 - 44.7;
      printf("Seu peso ideal é: %d kg\n", pesoIdeal);
      faltante = pesoIdeal - peso;
      printf("Para alcançar o peso ideal, faltam: %d kg\n", faltante);
      break;

    default:
      printf("Opção inválida.\n");
    }

    printf("Deseja calcular o peso ideal de outra pessoa?\n");
    printf("Digite 's' para sim e 'n' não: ");
    scanf(" %c", &continuar);


    
    if (continuar == 'n' || continuar == 'N') {

      printf("Fim\n");
      system("cls||clear");
    }
    system("cls||clear");

  } while (continuar == 's' || continuar == 'S');

  return 0;
}
