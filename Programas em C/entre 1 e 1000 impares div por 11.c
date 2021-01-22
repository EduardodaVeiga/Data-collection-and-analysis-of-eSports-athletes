#include <stdio.h>

int main(void)
{
    int x;

    do
    {
        if(x%11==0 && x%2!=0)
        {
            printf("x = %d\n",x);
        }
        x++;
    }while(x<=1000);

    return 0;
}
