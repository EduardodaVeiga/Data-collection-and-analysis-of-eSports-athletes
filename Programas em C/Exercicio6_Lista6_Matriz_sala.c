/* Gerar uma matriz 3x3 com números randômicos no intervalo de 1 a 100 e a seguir escrever a localização
(linha e a coluna) do maior valor.
*/

#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    char resposta;
    int matriz[3][3],x,y,maior,linha,coluna;

    do
    {
        GerarMatrizInteiro(3,3,matriz,100);
        printf("\n===MATRIZ===\n");
        MostrarMatrizInteiro(3,3,matriz);
        maior=matriz[0][0];
        linha=0;
        coluna=0;
        for(x=0;x<3;x++)
        {
            for(y=0;y<3;y++)
            {
                if(matriz[x][y]>maior)
                {
                    maior=matriz[x][y];
                    linha=x;
                    coluna=y;
                }
            }
        }
        printf("\nO maior elemento da matriz e %d e se encontra na linha %d coluna %d",maior,linha+1,coluna+1);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;

}
