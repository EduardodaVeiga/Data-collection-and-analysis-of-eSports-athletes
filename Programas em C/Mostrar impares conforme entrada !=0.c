#include <stdio.h>

int main(void)
{
    int num,x=1;

    do
    {
        printf("Quantos impares quer mostrar: ");
        scanf("%d", &num);
        if(num<=0)
        {
            printf("O valor deve ser maior que 0, tente novamente.\n");
        }
    }
    while(num<=0);

    do
    {
        if(x%2!=0)
        {
            printf("%d\n",x);
        }
        x++;
    }
    while(x<=(2*num-1));


    return 0;




}
