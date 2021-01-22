#include <stdio.h>

int main(void)
{
    int cont=0;
    float x=1000;

    do
    {
        x+=x*0.05;
        cont++;
    }while(x<=1200);

    printf("Serao necessarios %d meses para que o valor ultrapasse o capital inicial.\n",cont);
    printf("Valor final R$%.2f",x);

    return 0;
}
