#include <stdio.h>

int main(void)
{
    int x=1,conta1,a=0,b=1,cont=1;
    printf("Quantos termos quer mostrar: ");
    scanf("%d", &x);

    do
    {
        conta1=a+b;
        a=b;
        b=conta1;
        printf("%d\n",conta1);
        cont++;

    }while(cont<=x);

    return 0;
}
