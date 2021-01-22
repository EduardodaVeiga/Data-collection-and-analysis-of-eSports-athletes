#include <stdio.h>

int main(void)
{

    int x,y=1,cont=0,contlinha=0;
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
        contlinha=1;
        y=1;
        do
        {
            printf("%d\t",y);
            cont++;
            if(cont==x)
            {
                printf("\n");
                cont=0;
                contlinha++;
                y=0;
            }
            y++;

        }
        while(contlinha<=x);

        printf("Deseja repetir o programa (S/N): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}
