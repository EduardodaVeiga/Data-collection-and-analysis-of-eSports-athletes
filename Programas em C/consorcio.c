#include<stdio.h>

int main(void)
{

    float prestotal, prespag, presfix;

    printf("Informe a quantidade total de prestacoes: ");
    scanf("%f", &prestotal);
    printf("Informe a quantidade de prestacoes pagas: ");
    scanf("%f", &prespag);
    printf("Informe o valor fixo da prestacao: ");
    scanf("%f", &presfix);
    printf("Valor total ja pago: R$%.2f\n",prespag*presfix);
    printf("Saldo devedor: R$%.2f\n", (prestotal*presfix)-(prespag*presfix));

    return 0;
}
