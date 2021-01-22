/*Gerar uma matriz 50x10 que se refere as respostas de 10 questões de múltipla escolha referentes a 50
alunos. Gerar um vetor de 10 posições contendo o gabarito de respostas que podem ser 1, 2, 3, 4, ou 5. Em
seguida comparar as respostas de cada candidato com o gabarito e mostrar e mostrar a pontuação
correspondente.*/

#include <stdio.h>
#include "matrizes.h"
#include "vetores.h"

int main(void)
{
    char resposta;
    int matriz[50][10],gabarito[10],x,y,z,pontos;

    do
    {
        pontos=0;
        z=0;
        GerarMatrizInteiro(50,10,matriz,5);
        for(x=0;x<10;x++)
        {
            printf("Informe o gabarito das questoes: ");
            scanf("%d",&gabarito[x]);
        }
        printf("\n===RESPOSTAS DOS ALUNOS===\n");
        for(x=0;x<50;x++)
        {
            printf("ALUNO %2d: ",x+1);
            for(y=0;y<10;y++)
            {
                printf("%d  ",matriz[x][y]);
            }
            printf("\n");
        }
        printf("\n===GABARITO===\n");
        for(x=0;x<10;x++)
        {
            printf("%d  ",gabarito[x]);
        }
        printf("\n===PONTUACAO OBTIDA===\n");
        for(x=0;x<50;x++)
        {
            printf("ALUNO %2d ==> ",x+1);
            for(y=0;y<10;y++)
            {
                if(matriz[x][y]==gabarito[z])
                {
                    pontos++;
                }
                z++;
            }
            printf("%d pontos\n",pontos);
            pontos=0;
            z=0;
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
