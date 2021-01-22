#include <stdio.h>

int main(void)
{
    float cfab, imp, dist;

    printf("Informe o custo de fabrica do automovel: ");
    scanf("%f", &cfab);
    printf("Informe a percentagem do distribuidor (0 a 100): ");
    scanf("%f", &dist);
    printf("Informe a percentagem de impostos (0 a 100):  ");
    scanf("%f", &imp);
    printf("O custo do veiculo ao consumidor eh de: R$ %.2f",cfab+(cfab*(dist/100))+(cfab*(imp/100)));

    return 0;
}
