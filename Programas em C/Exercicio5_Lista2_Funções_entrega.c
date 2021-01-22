/*5) Elaborar uma função que recebe o número de linhas, o número de colunas, um determinado caractere e
desenha um quadrado ou retângulo na tela utilizando o caractere.*/

#include <stdio.h>

void desenho(int l, int c,char carac);
int main(void)
{
    char resposta,carac;
    int linha,coluna;

    do
    {
        printf("Informe o numero de linhas: ");
        scanf("%d", &linha);
        printf("Informe o numero de colunas: ");
        scanf("%d", &coluna);
        printf("Informe um caractere: ");
        fflush(stdin);
        scanf("%c", &carac);
        desenho(linha,coluna,carac);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
void desenho(int l,int c,char carac)
{
    int x,y;

    for(x=1;x<=l;x++)
    {
        for(y=1;y<=c;y++)
        {
            printf("%c  ",carac);
        }
        printf("\n");
    }
}
