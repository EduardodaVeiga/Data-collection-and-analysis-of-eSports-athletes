#include <stdio.h>

int main(void)
{
    int x=200;

    do
    {
        if(x%3==0)
        {
            printf("x = %d\n",x);
        }
        x--;
    }
    while(x>=100);


    return 0;
}
