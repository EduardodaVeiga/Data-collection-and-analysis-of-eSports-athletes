#include <stdio.h>

int main(void)
{
    int x;

    printf("Imprime numeros entre 10 e 0 em ordem decrescente:\n");

    for(x=10;x>=0;x--)
    {
        printf("x=%d\n",x);
    }

    return 0;
}
