/* Gerar uma matriz 5x5 com números randômicos, no intervalo de 1 a 5. Em seguida criar dois vetores que
contenham, respectivamente, as somas das linhas e das colunas da matriz. Mostrar os vetores criados.
*/

#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    char resposta;
    int matriz[5][5],matrizlinha[5],matrizcoluna[5],x,z,i,j;

    do
    {
        i=0;
        j=0;
        for(x=0;x<5;x++)
        {
            matrizlinha[x]=0;
        }
        for(x=0;x<5;x++)
        {
            matrizcoluna[x]=0;
        }
        GerarMatrizInteiro(5,5,matriz,5);
        printf("\n===MATRIZ===\n");
        MostrarMatrizInteiro(5,5,matriz);
        for(x=0;x<5;x++)
        {
            for(z=0;z<5;z++)
            {
                matrizlinha[j]= matrizlinha[j] + matriz[x][z];
            }
            j++;
        }
        printf("\n===SOMA DAS LINHAS===\n");
        for(j=0;j<5;j++)
        {
            printf("%2d  ",matrizlinha[j]);
        }
        printf("\n===SOMA DAS COLUNAS===\n");
        j=0;
        for(z=0;z<5;z++)
        {
            for(x=0;x<5;x++)
            {
                matrizcoluna[j]= matrizcoluna[j] + matriz[x][z];
            }
            j++;
        }
        for(j=0;j<5;j++)
        {
            printf("%2d  ",matrizcoluna[j]);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
