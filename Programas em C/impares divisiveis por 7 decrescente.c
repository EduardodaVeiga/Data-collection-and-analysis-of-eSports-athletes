#include <stdio.h>

int main(void)
{
    int x=500,cont=0,soma=0;

    do
    {
        if(x%2!=0 && x%7==0)
        {
            printf("%d\n",x);
        }
        else if(x%2==0 && x%3==0)
        {
            cont++;
            soma=soma+x;
        }
        x--;
    }while(x>=0);
    printf("Media dos pares divisiveis por 3: %.2f",(float)soma/cont);

    return 0;
}
