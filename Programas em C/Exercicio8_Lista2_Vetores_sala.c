/*8) Gerar aleatoriamente um vetor com 100 elementos que conterá somente valores 0 ou 1. Mostrar esse vetor. Em
seguida contar quantos 0s sucessivos o vetor contém, armazenar essa quantidade em outro vetor e mostrá-lo.
Qual seria o tamanho mínimo e máximo desse vetor que armazena as quantidades? Criá-lo para o tamanho
máximo possível.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int x,z,y,vetor[100],vetorb[100],aux,cont,cont2;
    do
    {
        cont=0;
        cont2=0;
        y=0;
        geravetorinteirocomlimite(vetor,100,1,0);
        printf("---VETOR A---\n");
        mostrarvetoraleatorio(vetor,100);
        aux=vetor[0];
        for(x=0;x<=100;x++)
        {
            if(vetor[x]==0)
            {
                cont++;
            }
            else if(vetor[x]!=0)
            {
                if(cont>0)
                {
                    vetorb[y]=cont;
                    cont2++;
                    y++;
                }
                cont=0;
            }
        }
        printf("\n");
        printf("\n---VETOR B---\n");
        for(z=0;z<cont2;z++)
        {
            printf("%d\t",vetorb[z]);
            if(z%10==0 && z!=0)
            {
                printf("\n");
            }
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
