#include <stdio.h>
int main() {

  // DESAFIO 10

int idade;
printf("Digite sua idade: ");
scanf("%d", &idade); 

if (idade < 18){
  printf("Com %d anos, você é menor de idade! \n", idade);
} else {printf("Com %d anos, você é maior de idade e seu voto é obrigatório. \n", idade);}

if (idade >= 16 && idade < 18) {
  printf("Seu voto é facultativo. \n");
  }

return 0;
}