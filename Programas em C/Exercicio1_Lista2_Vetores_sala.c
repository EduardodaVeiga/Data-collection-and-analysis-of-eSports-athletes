/*1) Gerar um vetor de inteiros com 15 elementos aleatórios entre 1 e 25. Gerar outros dois vetores, um
contendo os valores pares e outro os ímpares. Mostrar os três vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int x,y,vetor[15];

    do
    {
        geravetoraleatorio(vetor,15,25);
        printf("---VETOR COMPLETO---\n");
        mostrarvetoraleatorio(vetor,15);
        printf("\n---VETOR DE PARES---\n");
        mostrarvetoraleatoriopares(vetor,15);
        printf("\n---VETOR DE IMPARES---\n");
        mostrarvetoraleatorioimpar(vetor,15);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
