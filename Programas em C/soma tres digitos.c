#include <stdio.h>

int main(void)
{
    int n1,soma;
    printf("Informe um valor de ate tres digitos: ");
    scanf("%d", &n1);
    soma=(n1/100)+(n1%100/10)+(n1%100%10);

    printf("A soma dos digitos e igual a: %d",soma);

    return 0;
}
