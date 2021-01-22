#include <stdio.h>

int main(void)
{
    int x,mult,y;

    printf("Imprime numeros pares entre 20 e 100\n");
    x=20;
    do
    {
        if(x%2==0)
        {
            printf("x = %d\n",x);
        }
        x++;


    }while(x<=100);
    for(x=20;x<=100;x++)
    {
        if(x%5==0)
        {
            mult=mult+x;
            y++;
        }
    }

    printf("Media dos divisiveis por 5: %d",mult/y);



    return 0;


}
