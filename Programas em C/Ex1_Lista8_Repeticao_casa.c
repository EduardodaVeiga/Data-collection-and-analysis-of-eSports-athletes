/*Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer com
que a saída do programa seja mostrada como no exemplo a seguir:*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int x,y;
    long int fat;

    do
    {
        for(x=1;x<=12;x++)
        {
            fat=1;
            printf("%d! ==>",x);
            for(y=x;y>1;y--)
            {
                fat=fat*y;
                printf(" %d x",y);
            }
            printf(" %d == %ld\n",y,fat);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
