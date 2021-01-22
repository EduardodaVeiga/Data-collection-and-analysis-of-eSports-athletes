#include <stdio.h>
#include <math.h>

int main(void)
{
    int x=0;

    printf("-----------------------Divisiveis por 3 entre 0 e 100 -----------------------\n");

    do
    {
        if(x%3==0)
        {
            printf("%d\n",x);
        }
            x++;

    }while(x<=100);

    printf("----------------------Quadrado dos divisiveis por 3 -------------------------\n");
    x=0;

    do
    {
        if(x%3==0)
        {
            printf("%d\n",x*x);
        }
            x++;

    }while(x<=100);

    printf("----------------------Divisiveis por 5 ou por 7 ----------------------------\n");
    x=0;
    do
    {
        if(x%5==0 || x%7==0)
        {
            printf("%d\n",x);
        }
            x++;

    }while(x<=100);

    printf("----------------------Raiz quadrada dos divisiveis por 5 ou por 7 ---------------------------\n");
    x=0;
    do
    {
        if(x%5==0 || x%7==0)
        {
            printf("%.2f\n",(float)sqrt(x));
        }
            x++;

    }while(x<=100);

    return 0;


}
