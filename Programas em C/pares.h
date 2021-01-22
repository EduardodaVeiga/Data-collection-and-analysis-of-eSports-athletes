#include <stdio.h>

void mostrarpares(int num)
{
    int x;
    for(x=2;x<=num;x++)
    {
        if(x%2==0)
        {
            printf(" %d",x);
        }
    }
}
int somarpares(int num)
{
    int x,soma=0;
    for(x=2;x<=num;x++)
    {
        if(x%2==0)
        {
            soma=soma+x;
        }
    }

    return(soma);

}
