#include <Stdio.h>

int main(void)
{
    float x=10;

    do
    {
        printf("x = %.1f\n",x);
        x-=0.5;
    }while(x>=0);

    return 0;
}
