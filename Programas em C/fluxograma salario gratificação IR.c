#include <stdio.h>

int main(void)
{
    float salbase, grat,salbruto,ir,saliq;

    printf("Informe o salario base: ");
    scanf("%f", &salbase);
    printf("Informe a gratificacao: ");
    scanf("%f", &grat);

    salbruto=salbase+grat;

    if(salbruto<1000)
    {
        ir=salbruto*0.15;
    }
    else
    {
        ir=salbruto*0.20;
    }
    saliq=salbruto-ir;

    printf("Salario liquido: %.2fR$",saliq);

    return 0;
}
