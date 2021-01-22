#include <stdio.h>

int main(void)
{
    int x,cont;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &x);
        do
        {
            cont++;
            x=x/10;
        }
        while(x!=0);
        printf("%d digito(s)",cont);
    }
    while(x>0);


    return 0;
}
