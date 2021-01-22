#include <stdio.h>

int main(void)
{
    int quant;
    float x=15;

    printf("Informe a quantidade de pessoas:\n");
    scanf("%d", &quant);
    printf("VALOR DO INGRESSO               VALOR TOTAL RECEBIDO\n");


    do
    {
        printf("R$%.2f\t\t\t\tR$%.2f\n",x,x*quant);
        x+=0.5;

    }while(x<=20);

    return 0;
}
