/*Gerar aleatoriamente um vetor com 5 elementos inteiros entre 1 a 9. Mostrar a tabuada de cada um dos
elementos armazenados no vetor. A tabuada deve ser mostrada por uma função, que recebe como parâmetro
o número e apresenta a respectiva tabuada.
*/

#include <stdio.h>
#include "vetores.h"

void mostratabuada(int num);
int main(void)
{
    char resposta;
    int vetor[5],x,y;

    do
    {
        geravetoraleatorio(vetor,5,9);
        printf("\n===VETOR===\n");
        mostrarvetoraleatorio(vetor,5);
        for(x=0;x<5;x++)
        {
            printf("\n\n===TABUADA DE %d===\n",vetor[x]);
            mostratabuada(vetor[x]);
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}

void mostratabuada(int num)
{
    int x;
    for(x=0;x<11;x++)
    {
        printf("%d * %d = %d\n",num,x,num*x);
    }
}
