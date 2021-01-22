/*Alice e Beto são amigos e sempre que se encontram relembram os tempos de infância
tirando par-ou-ímpar para decidir quem escolhe o filme a ser assistido, ou qual o
restaurante em que vão almoçar, etc. Escreva um programa para determinar quem
ganhou a série de par-ou-ímpar. A primeira entrada deve ser um valor que identifica a quantidade de jogos realizados,
identificada pela variável n, que deve ser um número maior que zero. A seguir deve-se ler
os n resultados (R1, R2, R3, ..., Ri) dos jogos. Se Ri = 0 significa que Alice ganhou o i- ésimo jogo e se Ri = 1 Beto ganhou o i-ésimo jogo, portanto, essa entrada deve ser
validada para aceitar somente 0 e 1*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int njogo,y,res,alice,beto;

    do
    {
        do
        {
            printf("Informe o numero de jogos: ");
            scanf("%d", &njogo);
            if(njogo<=0)
            {
                printf("Valor invalido");
            }
        }while(njogo<=0);
        alice=0;
        beto=0;
        y=1;
        do
        {
            printf("Informe o resultado do jogo %d: ",y);
            scanf("%d", &res);
            if(res==0)
            {
                alice++;
            }
            else if(res==1)
            {
                beto++;
            }
            else
            {
                printf("Valor invalido\n");
            }
            y++;
        }while(y<=njogo);
        printf("\nAlice ganhou %d jogo(s) e Beto ganhou %d jogo(s)\n",alice,beto);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
