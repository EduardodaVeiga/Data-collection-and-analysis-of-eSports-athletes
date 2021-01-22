#include <stdio.h>

int main(void)
{
    int n,d1,d2,d3,d4,inverso;

    printf("Informe o valor: ");
    scanf("%d", &n);

    d1=n/1000;
    d2=n%1000/100;
    d3=n%1000%100/10;
    d4=n%1000%100%10;
    inverso=d4*1000+d3*100+d2*10+d1;

    if(inverso==n)
    {
        printf("%d e um numero palindromo",n);
    }
    else printf("%d nao e um numero palindromo",n);

    return 0;


}
