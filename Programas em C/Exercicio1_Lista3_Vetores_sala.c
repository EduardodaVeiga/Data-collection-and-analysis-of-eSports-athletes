/*1) Criar uma função para ordenar os elementos de um vetor de tamanho n, sendo n um número positivo.
Insira essa função na biblioteca "vetores.h" (criada no Exercício 2 - Lista 1) que já contém as funções para
GerarVetorInteiro() e MostrarVetorInteiro(), e que podem ser reutilizadas neste exercício. Usar essas funções
para gerar a saída mostrada no exemplo a seguir.
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
