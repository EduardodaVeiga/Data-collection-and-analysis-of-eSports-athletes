#include <stdio.h>

int main(void)
{
    int x,cont,soma;

    for(x=0;x<=100;x+=2)
    {
        printf("%d\n",x);
        cont++;
        soma=soma+x;
    }

    printf("Media: %.2f",soma/(float)cont);

    return 0;
}
