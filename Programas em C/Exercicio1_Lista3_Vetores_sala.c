/*1) Criar uma fun��o para ordenar os elementos de um vetor de tamanho n, sendo n um n�mero positivo.
Insira essa fun��o na biblioteca "vetores.h" (criada no Exerc�cio 2 - Lista 1) que j� cont�m as fun��es para
GerarVetorInteiro() e MostrarVetorInteiro(), e que podem ser reutilizadas neste exerc�cio. Usar essas fun��es
para gerar a sa�da mostrada no exemplo a seguir.
*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[10],x;

    do
    {
        geravetorinteirocomlimite(vetor,10,10,0);
        printf("\n---VETOR A---\n");
        mostrarvetoraleatorio(vetor,10);
        printf("\n---VETOR ORDENADO---\n");
        vetorordenado(vetor,10);
        mostrarvetoraleatorio(vetor,10);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
