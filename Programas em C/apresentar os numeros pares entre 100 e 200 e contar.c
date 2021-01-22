#include <stdio.h>

int main(void)
{
    int x=100,contimpar3=0,contpar5=0,soma=0;

    do
    {
        if(x%2==0)
        {
            printf("x = %d\n",x);
        }
        if(x%2!=0 && x%3!=0)
        {
            contimpar3++;
        }
        else if(x%2==0 && x%5==0)
        {
            soma=soma+x;
            contpar5++;
        }
        x++;
    }
    while(x<=200);

    printf("Impares e nao divisiveis por 3: %d\n",contimpar3);
    printf("Media dos pares divisiveis por 5: %.2f",(float)soma/contpar5);

}
    return 0;
