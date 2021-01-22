/*Gerar um vetor A de inteiros com 8 elementos aleatórios entre 1 e 10. Construir um vetor B de mesma
dimensão com os elementos de A multiplicados por 2.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[8];

    do
    {
        geravetoraleatorio(vetor,8,10);
        printf("---VETOR A---\n");
        mostrarvetoraleatorio(vetor,8);
        printf("\n---VETOR B---\n");
        mostrarvetoraleatoriodobro(vetor,8);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
