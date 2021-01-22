/*Gerar *um vetor com 50 elementos (valores aleat�rios), com valor at� 100. Armazenar em um vetor os
n�meros pares e em outro os n�meros �mpares. Mostrar os tr�s vetores. Dica: Declarar os tr�s vetores com
tamanho 50, na pior hip�tese todos os n�meros gerados seriam pares ou �mpares.
Uma solu��o mais otimizada: primeiro percorrer o vetor e contar quantos valores h� de cada tipo e em
seguida declarar os vetores com o tamanho exato, obtido da contagem.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[100],y,x,contpar,contimpar,z;
    do
    {
        z=0;
        y=0;
        contpar=0;
        contimpar=0;
        geravetorinteirocomlimite(vetor,100,50,0);
        printf("\n---VETOR A---\n");
        mostrarvetoraleatorio(vetor,100);
        printf("\n---PARES---\n");
        for(x=0;x<100;x++)
        {
            if(vetor[x]%2==0)
            {
                contpar++;
            }
            else contimpar++;
        }
        int vetorpar[contpar],vetorimpar[contimpar];
        for(x=0;x<100;x++)
        {
            if(vetor[x]%2==0)
            {
                vetorpar[z]=vetor[x];
                z++;
            }
            else
            {
                vetorimpar[y]=vetor[x];
                y++;
            }
        }
        for(x=0;x<contpar;x++)
        {
            printf("%d\t",vetorpar[x]);
            if(x%10==0 && x!=0)
            {
                printf("\n");
            }
        }
        printf("\n---IMPARES---\n");
        for(x=0;x<contimpar;x++)
        {
            printf("%d\t",vetorimpar[x]);
            if(x%10==0 && x!=0)
            {
                printf("\n");
            }
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
