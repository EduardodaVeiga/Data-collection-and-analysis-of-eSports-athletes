/*Na biblioteca "vetores.h" criar uma função com o protótipo void
GerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo,
int limPositivo) para gerar um vetor com valores positivos e negativos em um intervalo.
A instrução para gerar valores inteiros positivos e negativos em um intervalo é:
vetor[i] = rand() % (limPositivo + limNegativo + 1) - limNegativo;
Usando essa função:
Gerar um vetor A de inteiros com 100 elementos, com valores entre -50 e +50. Em seguida, armazenar no
vetor B somente os valores positivos do vetor A.
*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[100],vetorb[100],x,z;

    do
    {
        z=0;
        GerarVetorPositivoNegativo(vetor,100,-50,50);
        printf("---VETOR A---\n");
        mostrarvetoraleatorio(vetor,100);
        printf("\n---VETOR B---\n");
        for(x=0;x<100;x++)
        {
            if(vetor[x]>0)
            {
                vetorb[z]=vetor[x];
                z++;
            }
        }
        for(x=0;x<=z;x++)
        {
            printf("%d\t",vetorb[x]);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
