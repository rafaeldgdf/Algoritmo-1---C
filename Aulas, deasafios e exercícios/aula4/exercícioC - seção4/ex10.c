//10. Faça um programa que recebe a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura): 
//Homens: (72.7 * h) - 58           
//Mulheres: (62,1 * h) - 44,7

#include <math.h>
#include <stdio.h>

int main() {


  
char continuar;

 do {
printf("CÁLCULADORA IMC\n");

int altura; 
printf("Altura em cm: ");
scanf("%d", &altura);
printf("\n\n\n\n");
     
    int calculo;
    char sexo;
   
    printf("Digite 'M' para masculino e digite 'F' para feminino.\n");
    printf("Sexo: ");
    scanf(" %c", &sexo);

    switch (sexo) {
    case 'm':
      calculo = (727 * altura) / 1000 - 58;
      printf("Seu peso ideal é: %d\n", calculo);
      break;
      case 'M':
      calculo = (727 * altura) / 1000 - 58;
      printf("Seu peso ideal é: %d\n", calculo);
      break;
    case 'f':
      calculo = (62.1 * altura) / 1000 - 44.7;
      printf("Seu peso ideal é: %d\n", calculo);
      break;
      case 'F':
      calculo = (62.1 * altura) / 1000 - 44.7;
      printf("Seu peso ideal é: %d\n", calculo);
      break;
    default:
      printf("Opção inválida.\n");
    }


   
   printf("Deseja calcular o peso ideal de outra pessoa?\n");
   printf(" Digite 's' para sim e 'n' não: ");
   scanf(" %c", &continuar);
   
   
  } while (continuar == 's' || continuar == 'S');

  return 0;
} 
