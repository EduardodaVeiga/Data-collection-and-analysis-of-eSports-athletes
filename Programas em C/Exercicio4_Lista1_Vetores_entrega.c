/*) Gerar um vetor aleatório com 10 elementos entre 0 e 50. Verificar se cada um dos elementos armazenados
no vetor é primo. Utilizar, obrigatoriamente, uma função para verificar se o número é primo. Essa função
retorna 0 para indicar que o número é primo e 1 para indicar que não é primo. Tratar esse retorno na função
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
