/*O Tri�ngulo de Floyd � um tri�ngulo formado com n�meros naturais. O tri�ngulo
come�a em 1 no canto superior esquerdo e continua a escrever a sequ�ncia de n�meros
naturais de tal modo que cada linha cont�m um n�mero a mais do que a linha anterior. Escreva um programa que leia um n�mero inteiro positivo n e em seguida imprima n
linhas do Tri�ngulo de Floyd.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int x,y,z,cont;

    do
    {
        do
        {
            printf("Informe um valor: ");
            scanf("%d", &x);
            if(x<=0)
            {
                printf("Valor invalido\n");
            }
        }while(x<=0);
        cont=0;
        for(y=1;y<=x;y++)
        {
            for(z=1;z<=y;z++)
            {
                cont++;
                printf("%d\t",cont);
            }
            printf("\n");
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
