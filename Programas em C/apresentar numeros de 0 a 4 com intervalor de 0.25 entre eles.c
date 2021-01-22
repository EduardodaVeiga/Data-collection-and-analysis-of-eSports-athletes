#include <stdio.h>

int main(void)
{
    float y,x;

    printf("Imprime numeros entre 0 e 4 com intervalo de 0.25 entre eles:\n");

    for(x=1;x<=17;x++)
    {
        printf("x=%.2f\n",y);
        y=x/4;
    }

    return 0;
}
