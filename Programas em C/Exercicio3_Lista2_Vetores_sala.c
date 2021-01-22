/* Gerar um vetor A de inteiros com 7 elementos aleatórios entre 1 e 10. Construir um vetor B de mesmo
tamanho, sendo que cada elemento de B deverá ser o elemento de A correspondente multiplicado por sua
posição (ou índice), ou seja, B[i] = A[i] * i.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[7];

    do
    {
        geravetoraleatorio(vetor,7,10);
        printf("---VETOR A---\n");
        mostrarvetoraleatorio(vetor,7);
        printf("\n---VETOR B---\n");
        mostrarvetoraleatoriomultindice(vetor,7);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
