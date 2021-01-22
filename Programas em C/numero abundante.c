#include <stdio.h>

int main(void)
{
    int x,cont=0,soma=0,y=1,res=0;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &x);
        if(x!=0)
        {
            do
            {
                if(x%y==0)
                {
                    soma=soma+y;
                }
                y++;
            }while(y<=x);
        }
        res=soma-x;
        if(res>x)
        {
            printf("%d e um numero abundante\n",x);
        }
        else printf("%d nao e um numero abundante\n",x);
        soma=0;
        y=1;
    }while(x!=0);

    return 0;

}
