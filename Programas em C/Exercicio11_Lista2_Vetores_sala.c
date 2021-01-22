/* O que faz o algoritmo a seguir:
declare A[30], B[30], i, k como inteiro
repetir i = 0, até i < 30, passo 1
leia A[i]
escrevaA[i]
fim-repetir
k = 0
repetir i = 0, i < 30, passo 1
se ( A[i] <> 0 ) then
b[k] = a[i]
k = k + 1
fim-se
fim-repetir
repetir i = 0, até i < k, passo 1
escreva B[i]
fim-repetir
Implemente uma solução na linguagem C para esse algoritmo. Para gerar os elementos do vetor A, deve ser
utilizada a função para gerar valores aleatórios e a função para mostrar os valores do vetor. Considere que os
valores do vetor devem estar compreendidos em um intervalo de 0 a 100.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[30],vetorb[30],x,z=0,i,cont;

    do
    {
        cont=0;
        z=0;
        printf("---VETOR A---\n");
        geravetorinteirocomlimite(vetor,30,100,0);
        mostrarvetoraleatorio(vetor,30);
        printf("\n---VETOR B---\n");
        for(x=0;x<30;x++)
        {
            if(vetor[x]>0)
            {
                vetorb[z]=vetor[x];
                z++;
            }
        }
        for(i=0;i<z;i++)
        {
            printf("%d\t",vetorb[i]);
            cont++;
            if(cont%15==0 && cont!=1)
            {
                printf("\n");
                cont=0;
            }
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
