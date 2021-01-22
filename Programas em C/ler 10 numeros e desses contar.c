#include <stdio.h>

int main(void)
{
    int x,contpar=0,contimpar=0,cont7=0,cont=1;

    do
    {
        printf("Informe um valor: ");
        scanf("%d",&x);
        cont++;
        if(x%2==0)
        {
            contpar++;
        }
        else if(x%2!=0)
        {
            contimpar++;
            if(x%7==0)
            {
                cont7++;
            }
        }
    }
    while(cont<=10);

    printf("Pares: %d\n",contpar);
    printf("Impares: %d\n",contimpar);
    printf("Divisiveis por 7: %d\n",cont7);


    return 0;
}
