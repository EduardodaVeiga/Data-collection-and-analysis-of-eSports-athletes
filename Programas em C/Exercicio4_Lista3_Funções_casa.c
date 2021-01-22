/*4) (DESAFIO) Incremente o código da função do exercício anterior e transforme o triângulo em uma árvore de
Natal, como mostrado no exemplo a seguir.*/

#include <stdio.h>

void arvore(int n);
int main(void)
{
    int num;
    char resposta;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &num);
        arvore(num);

        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;

}

void arvore(int n)
{
    int x,i,y,z,j;

    for(x=1;x<=n;x++)
    {
        for(y=1;y<=n-x;y++)
        {
            printf(" ");
        }
        for(z=1;z<=2*x-1;z++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n/2;i++)
    {
        for(y=1;y<=z/2-1;y++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*\n");
            break;
        }
    }
}

