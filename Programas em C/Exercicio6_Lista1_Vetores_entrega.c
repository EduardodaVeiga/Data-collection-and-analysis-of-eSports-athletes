/*Gerar um vetor A com 100 elementos entre 10 e 400, inclusive, mostrar o vetor gerado. Em seguida
percorrer o vetor A e contar quantos elementos est�o entre 10 e 100, quantos est�o entre 101 e 200, quantos
est�o entre 201 e 300 e quantos est�o entre 301 e 400. A quantidade ser� armazenada no vetor B com
tamanho 4, para cada uma das respectivas quantidades. Por exemplo, vetorB[0] conter� a quantidade de
valores entre 10 e 100 no vetor A.
Observa��o: � indispens�vel que os valores sejam contados � medida que o vetor A � percorrido.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[100],vetorb[4],x;

    do
    {
        vetorb[0]=0;
        vetorb[1]=0;
        vetorb[2]=0;
        vetorb[3]=0;
        geravetorinteirocomlimite(vetor,100,400,10);
        printf("\n===VETOR A===\n");
        mostrarvetoraleatorio(vetor,100);
        printf("\n===VETOR B===\n");
        for(x=0;x<100;x++)
        {
            if(vetor[x]>=10 && vetor[x]<=100)
            {
                vetorb[0]=vetorb[0]+1;
            }
            else if(vetor[x]>100 && vetor[x]<=200)
            {
                vetorb[1]=vetorb[1]+1;
            }
            else if(vetor[x]>200 && vetor[x]<=300)
            {
                vetorb[2]=vetorb[2]+1;
            }
            else if(vetor[x]>300 && vetor[x]<=400)
            {
                vetorb[3]=vetorb[3]+1;
            }
        }
        for(x=0;x<4;x++)
        {
            printf("%d\t",vetorb[x]);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
