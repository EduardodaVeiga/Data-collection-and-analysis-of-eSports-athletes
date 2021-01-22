/*Gerar uma matriz 10x2 com valores de 1 a 6. A primeira coluna da matriz � a base e a segunda o
expoente. Utilizando a fun��o pot�ncia, gerar um vetor que armazena a pot�ncia obtida a partir dos valores
da matriz. A fun��o pot�ncia ser� utilizada para calcular a pot�ncia (base elevada a um expoente) e n�o para
gerar o vetor. O valor obtido do c�lculo ser� armazenado no vetor.*/

#include <stdio.h>
#include "matrizes.h"
#include <math.h>

int main(void)
{
    char resposta;
    int matriz[10][2],x,y,z,res;

    do
    {
        y=0;
        res=0;
        GerarMatrizInteiro(10,2,matriz,6);
        printf("\n===MATRIZ===\n");
        MostrarMatrizInteiro(10,2,matriz);
        printf("\n===CALCULO DA POTENCIA===\n");
        printf("BASE   EXPOENTE     RESULTADO\n");
        for(x=0;x<10;x++)
        {
            res=pow(matriz[x][y],matriz[x][y+1]);
            printf("%d      %d            %-5d\n",matriz[x][y],matriz[x][y+1],res);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
