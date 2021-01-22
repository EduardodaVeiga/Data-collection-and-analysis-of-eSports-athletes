#include <stdio.h>

int main(void)
{
    int x=1,contpos=0,contneg=0,soma=0;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &x);

        if(x!=0)
        {
            if(x<0)
            {
                soma=soma+x;
                contneg++;
            }
            else if(x%2!=0)
            {
                contpos++;
            }
        }
    }while(x!=0);

    printf("Media dos negativos: %.2f\n",(float)soma/contneg);
    printf("Foram informados %d valores positivos impares",contpos);

    return 0;
}
