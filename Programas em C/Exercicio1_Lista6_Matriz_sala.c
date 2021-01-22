/*1) Criar um arquivo "matrizes.h". Dentro desse arquivo incluir função para:
a) Gerar uma matriz de elementos inteiros randômicos entre 1 e limite com o protótipo:
void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int
limite)
b) Mostrar uma matriz com o protótipo:
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
Usar as funções para:
a) Gerar uma matriz de 3x3 com números aleatórios entre 1 e 10.
b) Somar todos os elementos da matriz.
c) Somar os elementos da diagonal principal da matriz.
d) Somar os elementos da diagonal secundária da matriz.
e) Mostrar a matriz e as somas.*/

#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    char resposta;
    int matriz[3][3],x,z,soma,somadiagonalprincipal,somadiagonalsecundaria;

    do
    {
        soma=0;
        somadiagonalprincipal=0;
        somadiagonalsecundaria=0;
        GerarMatrizInteiro(3,3,matriz,10);
        printf("\n===MATRIZ===\n");
        MostrarMatrizInteiro(3,3,matriz);
        for(x=0;x<3;x++)
        {
            for(z=0;z<3;z++)
            {
                soma=soma+matriz[x][z];
                if(x==z)
                {
                    somadiagonalprincipal=somadiagonalprincipal+matriz[x][z];
                }
                if((x==0 && z==2) || (x==2 && z==0) || (x==1 && z==1))
                {
                    somadiagonalsecundaria=somadiagonalsecundaria + matriz[x][z];
                }
            }
        }
        printf("Soma dos elementos da matriz: %d \n",soma);
        printf("Soma dos elementos da diagonal principal da matriz: %d\n",somadiagonalprincipal);
        printf("Soma dos elementos da diagonal secundaria da matriz: %d",somadiagonalsecundaria);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
