#include <stdio.h>

int main(void)
{
    int a,b,x;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("Antes da troca A= %d  B= %d\n",a,b);
    x=a;
    a=b;
    b=x;
    printf("Depois da troca A=%d  B=%d\n",a,b);

    return 0;


}
