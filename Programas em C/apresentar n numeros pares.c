#include <stdio.h>

int main(void)
{
    int x,y=0,cont=1;

    printf("Quantos numeros pares quer mostrar: ");
    scanf("%d",&x);

    do
    {
        if(y%2==0)
        {
            printf("\t%10d\t",y);
            cont++;
        }
        y++;
    }while(cont<=x);


    return 0;
}
