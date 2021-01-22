#include <stdio.h.>

int main(void)
{
    float salmin, salbruto;

    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salmin);
    printf("Informe o valor do salario bruto: ");
    scanf("%f", &salbruto);

    if(salbruto <= 3*salmin)
    {
         printf("Taxa de INSS: %.2f\n Salario liquido: R$%.2f",salbruto*0.08,(salbruto-salbruto*0.08));
    }
    else
    {
        printf("Taxa INSS: %.2f\n Salario liquido: R$%.2f",salbruto*0.1,(salbruto-salbruto*0.1));
    }

    return 0;
}
