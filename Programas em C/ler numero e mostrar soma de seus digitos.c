#include <stdio.h>

int main(void)
{
    int numero,soma=0;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &numero);
        if(numero>=0)
        {
            while(numero>0)
            {
                soma+=numero%10;
                numero/=10;
            }
            printf("soma: %d\n",soma);
            soma=0;
        }
    }
    while(numero>=0);

    return 0;
}
