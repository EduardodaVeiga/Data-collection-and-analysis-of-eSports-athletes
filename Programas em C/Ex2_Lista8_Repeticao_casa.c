/*Alice e Beto s�o amigos e sempre que se encontram relembram os tempos de inf�ncia
tirando par-ou-�mpar para decidir quem escolhe o filme a ser assistido, ou qual o
restaurante em que v�o almo�ar, etc. Escreva um programa para determinar quem
ganhou a s�rie de par-ou-�mpar. A primeira entrada deve ser um valor que identifica a quantidade de jogos realizados,
identificada pela vari�vel n, que deve ser um n�mero maior que zero. A seguir deve-se ler
os n resultados (R1, R2, R3, ..., Ri) dos jogos. Se Ri = 0 significa que Alice ganhou o i- �simo jogo e se Ri = 1 Beto ganhou o i-�simo jogo, portanto, essa entrada deve ser
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
