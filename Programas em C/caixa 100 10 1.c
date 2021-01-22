#include <stdio.h>

int main(void)
{
    int compra, pago;

    printf("Informe o valor da compra: R$ ");
    scanf("%d", &compra);
    printf("Informe o valor pago: R$ ");
    scanf("%d", &pago);
    printf("O troco de %d foi pago com:\n",pago-compra);
    printf("(%d) nota(s) de 100\n",(pago-compra)/100);
    printf("(%d) nota(s) de 10\n",((pago-compra)/10)%10);
    printf("(%d) nota(s) de 1\n",((pago-compra)%10));
}
