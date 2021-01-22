#include <stdio.h>

int main(void)
{
    float salat, reaj, salreajustado;

    printf("Informe o valor do salario atual: R$ ");
    scanf("%f", &salat);
    printf("Informe o percentual de reajuste: ");
    scanf("%f",&reaj);
    salreajustado=salat+(salat*(reaj/100));

    printf("Salari0 reajustado: R$%.2f",salreajustado);

    return 0;

}
