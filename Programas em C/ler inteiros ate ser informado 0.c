#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,contpos=0,contnegpar=0,contdiv3=0,soma=0;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &x);
        if(x!=0)
        {
            if(x>0)
            {
                contpos++;
            }
            else if(x<0 && x%2==0)
            {
                contnegpar++;
            }
            else if(x%3==0)
            {
                contdiv3++;
                soma=soma+abs(x);
            }
        }
    }while(x!=0);
    printf("Positivos: %d\n",contpos);
    printf("Negativos pares: %d\n",contnegpar);
    printf("Media dos divisiveis por 3: %2.f",(float)soma/contdiv3);

    return 0;
}
