#include <stdio.h>

int main(void)
{
    float kmper, combcons,valorlit;

    printf("Informe os quilometros percorridos: ");
    scanf("%f",&kmper);
    printf("Informe o combustivel consumido(em litros): ");
    scanf("%f", &combcons);
    printf("Informe o valor do litro de combustivel: ");
    scanf("%f", &valorlit);

    printf("O automovel fez %.2f por litro de combustivel\n", kmper/combcons);
    printf("O valor gasto em reais por km foi de R$%.2f", valorlit/(kmper/combcons));

    return 0;


}
