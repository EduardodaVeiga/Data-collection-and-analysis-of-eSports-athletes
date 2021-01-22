#include <stdio.h>

int main(void)
{
    int alt,larg,comp;
    printf("Informe a altura em centimetros: ");
    scanf("%d", &alt);
    printf("Informe a largura em centimetros: ");
    scanf("%d", &larg);
    printf("Informe o comprimento em centimetros: ");
    scanf("%d", &comp);
    printf("Serao necessarios %d centimetros de fita",(4*alt)+(2*comp)+(2*larg)+30);

    return 0;
}
