#include <stdio.h>

int main(void)
{
    int x;

    printf("Imprime multiplos de 5 entre 5 e 50\n");

    for(x=5;x<=50;x++)
    {
        if(x%5==0)
        {
            printf("x=%d\n",x);
        }
    }

    return 0;
}
