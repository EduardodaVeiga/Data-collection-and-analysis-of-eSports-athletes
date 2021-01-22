#include <stdio.h>

int main(void)
{
    float n1;

    printf("Informe um valor: ");
    scanf("%f", &n1);

    if (n1==10){
        printf("O numero e igual a dez");
    }

        if(n1<10){
            printf("O numero e menor que dez");
        }

            if(n1>10){
                printf("O numero e maior que dez");
            }
    return 0;
}
