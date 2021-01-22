/* Gerar um vetor com 20 elementos aleat�rios entre 5 e 20. Em seguida ordenar o vetor. Percorrer o vetor
ordenado e mostrar os pares e a soma dos pares de cada um dos valores armazenados. Caso existam
elementos repetidos, considerar apenas um deles.
Neste exerc�cio, al�m de utilizar a fun��o GerarVetorInteiroComFaixa(), a fun��o MostrarVetorInteiro() e a
fun��o OrdenarVetorInteiro(), utilizar tamb�m uma fun��o MostrarPares() e uma fun��o SomarPares(), ambas
devem ser criadas em uma biblioteca "pares.h"*/

#include <stdio.h>
#include "vetores.h"
#include "pares.h"

int main(void)
{
    char resposta;
    int vetor[20],x,aux;

    do
    {
        geravetorinteirocomlimite(vetor,20,20,5);
        printf("---VETOR ORIGINAL---\n");
        mostrarvetoraleatorio(vetor,20);
        printf("\n---VETOR ORDENADO---\n");
        vetorordenado(vetor,20);
        mostrarvetoraleatorio(vetor,20);
        printf("\n---PARES---\n");
        aux=100;
        for(x=0;x<20;x++)
        {
            if(vetor[x]!=aux)
            {
                printf("%d =>",vetor[x]);
                mostrarpares(vetor[x]);
                printf(" - Soma = %d",somarpares(vetor[x]));
                printf("\n------------------------------\n");
                aux=vetor[x];
            }
        }

        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
