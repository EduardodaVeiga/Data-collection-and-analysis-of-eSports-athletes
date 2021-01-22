/*) Gerar um vetor aleat�rio com 10 elementos entre 0 e 50. Verificar se cada um dos elementos armazenados
no vetor � primo. Utilizar, obrigatoriamente, uma fun��o para verificar se o n�mero � primo. Essa fun��o
retorna 0 para indicar que o n�mero � primo e 1 para indicar que n�o � primo. Tratar esse retorno na fun��o
chamadora. Mostrar da seguinte forma:*/

#include <stdio.h>
#include "vetores.h"
#include "primo.h"

int main(void)
{
    char resposta;
    int vetor[10],x;

    do
    {
        geravetorinteirocomlimite(vetor,10,50,0);
        printf("---VETOR A---\n");
        mostrarvetoraleatorio(vetor,10);
        printf("\nINDICE\tNUMERO\tPRIMO\n");
        for(x=0;x<10;x++)
        {
            if(primo(vetor[x])==0 && vetor[x]>1)
            {
                printf("%d\t%2d\tSim\n",x,vetor[x]);
            }
            else
            {
                printf("%d\t%2d\tNao\n",x,vetor[x]);
            }
        }

        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
