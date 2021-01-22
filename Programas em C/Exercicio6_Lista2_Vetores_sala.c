/*6) Gerar um vetor de inteiros com 10 elementos aleat�rios entre 1 e 200. Desse vetor, calcular e mostrar:
a) A soma de elementos armazenados nesse vetor que s�o inferiores a 100;
b) A quantidade de elementos armazenados nesse vetor que tem valor igual a 100;
c) A m�dia dos elementos armazenados nesse vetor que s�o superiores a 100. Validar para n�o realizar
uma divis�o por zero.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[10];
    do
    {
        geravetoraleatorio(vetor,10,200);
        printf("---VETOR---\n");
        mostrarvetoraleatorio(vetor,10);
        mostrarsomamenor100(vetor,10);
        mostrarquantigual100(vetor,10);
        mostrarmedia100(vetor,10);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
