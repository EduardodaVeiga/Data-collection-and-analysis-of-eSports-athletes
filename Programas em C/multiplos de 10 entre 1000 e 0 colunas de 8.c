#include <stdio.h>

int main(void)
{
    int x=1000;

    do
    {
        if(x%10==0)
        {
            printf("\t%4d\t",x);
        }
        x--;
    }while(x>=0);

    return 0;

}
