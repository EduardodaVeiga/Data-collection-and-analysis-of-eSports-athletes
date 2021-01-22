/* Ler uma matriz 5x5 com valores entre 1 e 50. A seguir, ler um número inteiro x e escrever uma mensagem
indicando se o valor de x existe ou não na matriz*/

#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    char resposta;
    int matriz[5][5],x,y,aux,valor;

    do
    {
        aux=0;
        GerarMatrizInteiro(5,5,matriz,50);
        printf("\n===MATRIZ===\n");
        MostrarMatrizInteiro(5,5,matriz);
        printf("Informe o valor que deseja saber se ha na matriz: ");
        scanf("%d", &valor);
        for(x=0;x<5;x++)
        {
            for(y=0;y<5;y++)
            {
                if(matriz[x][y]==valor)
                {
                    aux=1;
                    break;
                }
            }
            if(aux==1)
            {
                break;
            }
        }
        if(aux==1)
        {
            printf("%d existe na matriz",valor);
        }
        else printf("%d nao existe na matriz",valor);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
