#include <stdio.h>

int main(void)
{

    int x,y=1,cont=0,contlinha=0,somacont=0;
    char resposta;
    do

    {
        do
        {
            printf("Informe um valor positivo: ");
            scanf("%d", &x);
            if(x<=0)
            {
                printf("\nValor invalido\n");
            }
        }
        while(x<=0);
        y=1;
        contlinha=0;
        do
        {
            printf("%d\t",y);
            cont++;
            if(cont==y)
            {
                printf("\n");
                contlinha++;
                y++;
                cont=0;
            }
        }
        while(contlinha<x);

        printf("\nDeseja repetir o programa (S/N): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');


    return 0;
}

