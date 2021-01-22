#include <stdio.h>

int main(void)
{
    float salb, ir,inss,sind, saliq;

    printf("Salaria bruto: R$ ");
    scanf("%f", &salb);
    printf("IR: ");
    scanf("%f",&ir);
    printf("INSS: ");
    scanf("%f",&inss);




    printf("Salario liquido R$%.2f",((100-(ir+inss))*salb)/100);

    return 0;
}




