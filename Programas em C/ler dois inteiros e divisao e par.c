#include <stdio.h>

int main(void)
{
    int n1,n2;

    printf("Informe um valor: ");
    scanf("%d", &n1);
    printf("Informe outro valor: ");
    scanf("%d", &n2);

    if(n1%5==0 && n2%5==0)
    {
        printf("Ambos sao divisiveis por 5 e sao impares\n");
    }
    else if(n1%5==0 && n2%5!=0)
    {
        printf("Apenas %d e divisivel por 5 e e impar\n",n1);
    }
    else if(n2%5==0 && n1%5!=0)
    {
        printf("Apenas %d e divisivel por 5 e e impar\n",n2);
    }
    else if(n1%2==0 && n2%2==0)
    {
        printf("Ambos os valores sao pares\n");
    }

    return 0;


}
