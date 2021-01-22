#include <stdio.h>

int main(void)
{
    int horas, filhos;
    float valorh, salfam;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%d",&horas);
    printf("Informe o valor da hora trabalhada: R$ ");
    scanf("%f", &valorh);
    printf("Informe o numero de filhos menores de 14 anos: ");
    scanf("%d", &filhos);
    printf("Informe o valor do salario familia: R$ ");
    scanf("%f", &salfam);
    printf("Salario: R$%.2f",(horas*valorh)+(filhos*salfam));

    return 0;

}
