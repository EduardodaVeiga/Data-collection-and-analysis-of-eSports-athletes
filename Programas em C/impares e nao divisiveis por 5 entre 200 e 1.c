#include <stdio.h>

int main(void)
{
    int x=200,cont;
    float soma;
    printf("Entre 200 e 1 nao divisiveis por 5 e impar: \n");

    do
    {
        if(x%2!=0 && x%5!=0)
        {
            printf("x = %d\n",x);
        }
        if(x%3==0 && x%5==0)
        {
            cont++;
            soma=soma+x;
        }
        x--;
    }while(x>=1);

    printf("Media dos divisiveis por 5 e por 3: %.2f\n",(float)soma/(float)cont);

    return 0;
}
