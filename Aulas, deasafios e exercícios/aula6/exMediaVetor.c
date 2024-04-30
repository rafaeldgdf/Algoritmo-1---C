
#include <stdio.h>
#define TAM 5

int main()
{
    // lendo notas
    double notas[TAM];
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite a nota: ");
        scanf("%lf", &notas[i]);
    }

    // obtendo a maior nota
    double maiorNota = notas[0]; // inicializando com a primeira nota
    for (int i = 1; i < TAM; i++)
    {
        if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
        }
    }
    printf("Maior nota: %lf\n", maiorNota);
    return 0;
}