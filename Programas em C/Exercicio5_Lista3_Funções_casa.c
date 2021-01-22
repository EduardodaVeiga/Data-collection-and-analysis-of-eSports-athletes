/*5) (DESAFIO) Fazer um programa que receba um valor inteiro, que se refere a quantidade de linhas de um
triângulo e um valor do tipo char, que se refere ao tipo do triângulo (que pode ser preenchido ou vazado).
Implementar no próprio programa uma função que recebe como parâmetros esses valores e imprime um
triângulo como no exemplo a seguir.*/

#include <stdio.h>
void triangulov(int n);
void triangulop(int n);
int main(void)
{
    int num;
    char resposta,opcao;

    do
    {
        printf("Informe a altura do triangulo em linhas: ");
        scanf("%d", &num);
        printf("Vazado(V/v) ou preenchido(P/p): ");
        fflush(stdin);
        scanf("%c", &opcao);
        triangulov(num);


        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}

void triangulop(int n)
{
    int x,y;

    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void triangulov(int n)
{
    int x,y;

    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
        {
            if(y==1 || y==x || x==n)
            {
             printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
