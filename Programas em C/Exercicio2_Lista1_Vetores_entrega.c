/*Gerar *um vetor com 50 elementos (valores aleatórios), com valor até 100. Armazenar em um vetor os
números pares e em outro os números ímpares. Mostrar os três vetores. Dica: Declarar os três vetores com
tamanho 50, na pior hipótese todos os números gerados seriam pares ou ímpares.
Uma solução mais otimizada: primeiro percorrer o vetor e contar quantos valores há de cada tipo e em
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
