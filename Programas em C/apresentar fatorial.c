#include <Stdio.h>

int main(void)
{
    long long int x,fatorial=1;
    int y,z;

    printf("Informe um valor: ");
    scanf("%lld", &x);
    if(x==1)
    {
        fatorial=1;
    }
    else if(x==0)
    {
        fatorial=1;
    }
    else if(x==2)
    {
        fatorial=2;
    }
    if(x>2)
    {
        y=x-1;
        fatorial=x*y;
        y--;
        do
        {

            fatorial=fatorial*y;
            y--;

        }
        while(y>=1);

    }


    printf("Fatorial: %lld",fatorial);

    return 0;
}
