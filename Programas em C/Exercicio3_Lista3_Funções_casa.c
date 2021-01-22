/*3) (DESAFIO) Fazer um programa que receba um valor inteiro, que se refere a quantidade de linhas de um
tri�ngulo. Implementar no pr�prio programa uma fun��o que recebe como par�metro esse valor e imprime um
tri�ngulo.
*/

#include <stdio.h>

void triangulo(int n);
int main(void)
{
    int num;
    char resposta;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &num);
        triangulo(num);

        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}

void triangulo(int n)
{
    int x,y,z;

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
}
