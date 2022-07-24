#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main ()
{
    int processamentos;
    int vetor[TAM];
    int aux, posicao1, posicao2;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 100;
    }
    
    //imprimindo o vetor gerado de forma aleatoria
    printf ("Vetor inicial: ");
    for (int i = 0; i < TAM; i++)
    {
        printf ("%d ", vetor[i]);
    }
    printf ("\n");

    if (10 % 2 != 0)
        processamentos = (TAM - 1)/2;
    else
        processamentos = TAM / 2;
    
    posicao1 = 0;
    posicao2= TAM -1;

    for (int i = 0; i < processamentos; i++)
    {
        aux = vetor[posicao1];
        vetor[posicao1] = vetor[posicao2];
        vetor[posicao2] = aux;
        posicao1++;
        posicao2--;
       
    }

    //imprimindo o vetor revertido
    printf ("Vetor revertido: ");
    for (int i = 0; i < TAM; i++)
    {
        printf ("%d ", vetor[i]);
    }
    printf ("\n");


    return 0;
}