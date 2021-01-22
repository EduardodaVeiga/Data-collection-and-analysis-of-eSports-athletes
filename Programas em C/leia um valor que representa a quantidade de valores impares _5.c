#include <stdio.h>

int main(void)
{
    int x,cont=1,y=0,media=0,contmedia=0;

    do
    {
        cont=0;
        y=0;
        printf("Quantos valores multiplos de 5 impares quer: ");
        scanf("%d", &x);
        if(x<0)
        {
            x=x*(-1);
        }
        do
        {
            if(y%5==0 && y%2!=0)
            {
                printf("%d\n",y);
                cont++;
            }
            else if(y%3==0)
            {
                media=media+y;
                contmedia++;
            }
            y++;
        }while(cont<=x);
            printf("Media dos divisiveis por 3: %d\n",media/contmedia);
    }while(x!=0);

    return 0;
}
