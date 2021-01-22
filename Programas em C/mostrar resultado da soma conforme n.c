#include <stdio.h>

int main(void)
{
    int num;
    float soma=1,y=2;

    printf("Informe um valor: ");
    scanf("%d", &num);

    do
    {
        soma=soma+1/y;
        y++;
    }while(y<=num);

    printf("Soma: %.2f",soma);

    return 0;
}
