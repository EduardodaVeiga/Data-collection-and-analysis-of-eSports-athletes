/*Gerar uma matriz 10x10 preenchida com o número 1 e mostrar a matriz. Em seguida, preencher com 0 as
diagonais principal e secundária e mostrar a matriz.*/

#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    char resposta;
    int x,z,y,matriz[10][10];

    do
    {
        y=0;
        GerarMatrizInteiro(10,10,matriz,1);
        printf("\n===MATRIZ ORIGINAL===\n");
        MostrarMatrizInteiro(10,10,matriz);
        printf("===MATRIZ ATUAL===\n");
        for(x=0;x<10;x++)
        {
            for(z=0;z<10;z++)
            {
                if(x==z)
                {
                    matriz[z][x]=0;
                }
                if((x+z)==9)
                {
                    matriz[z][x]=0;
                }
            }
        }
        MostrarMatrizInteiro(10,10,matriz);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}

