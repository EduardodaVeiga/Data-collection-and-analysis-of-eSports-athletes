#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i,z;

    srand(time(NULL));
    for(i=0;i<linha;i++)
    {
        for(z=0;z<coluna;z++)
        {
            matriz[i][z]=(rand() % limite)+1;
        }
    }
}
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    int i,z,cont=0;
    for(i=0;i<linha;i++)
    {
        for(z=0;z<coluna;z++)
        {
            printf("%2d  ",matriz[i][z]);
            cont++;
        }
        printf("\n");
    }
}
