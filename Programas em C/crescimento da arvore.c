#include <stdio.h>

int main(void)
{
    float x=1.5,y=1.1;
    int cont=0;

    do
    {
        x+=0.02;
        y+=0.03;
        cont++;
    }while(y<=x);

    printf("Altura final da arvore a: %.2f\n",x);
    printf("Altura final da arvore b: %.2f\n",y);
    printf("Serao necessarios %d anos para que a arvore b seja maior que a arvore a\n",cont);

    return 0;
}
