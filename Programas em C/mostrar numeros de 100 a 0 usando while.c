#include <stdio.h>

int main(void)
{
    int x,cont=0,soma=0;

    x=100;
    while(x>=0)
    {
        printf("%d\n",x);
        soma=soma+x;
        cont++;
        x--;
    }
    printf("Media: %.2f",(float)soma/cont);

    return 0;
}
