#include <stdio.h>

int main(void)
{
    int n,y,x=2,soma,cont=1,somat=0;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &n);
        if(n<=0)
        {
            printf("Valor invalido\n");
        }
    }while(n<=0);
    printf("1 =>  1 = 1\n");
    for(y=2;y<=n;y++)
    {
        printf("%d => ",y);
        cont=1;
        soma=0;
        do
        {
            if(x%2!=0)
            {
                printf(" %d ",x);
                if(cont<y)
                {
                    printf("+");
                }
                cont++;
                soma=soma+x;
            }
            x++;
        }while(cont<=y);
        printf("= %d",soma);
        printf("\n");
        somat=somat+soma;
    }
    printf("\nSoma dos impares: %d",somat+1);

    return 0;
}
