/*4) Gerar um vetor A de inteiros com 10 elementos aleat�rios entre 1 e 10 e construir um vetor B de mesma
dimens�o com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro elemento de A ser� o
�ltimo de B, o segundo elemento de A ser� o pen�ltimo de B e assim sucessivamente.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[10];

    do
    {
        geravetoraleatorio(vetor,10,10);
        printf("---VETOR A---\n");
        mostrarvetoraleatorio(vetor,10);
        printf("\n---VETOR B---\n");
        mostrarvetoraleatorioinverso(vetor,10);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}

