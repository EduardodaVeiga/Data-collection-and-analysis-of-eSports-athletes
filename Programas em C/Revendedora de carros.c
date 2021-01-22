#include <stdio.h>

float main (void)
{
    //Declaração de variaveis
    int numcar;float salfix, comcar, totven, saliq;

    //Entrada de dados
    printf("Informe o valor do salario fixo: R$");
    scanf("%f", &salfix);
    printf("Informe a comissao obtida por carro vendido: R$");
    scanf("%f", &comcar);
    printf("Informe o numero de carros vendidos: ");
    scanf("%d", &numcar);
    printf("Informe o total de vendas mensal: R$");
    scanf("%f", &totven);

    //Processamento de dados
    saliq=salfix+(100*numcar)+(totven*0.05);

    //Saida de dados
    printf("O valor do salario liquido eh de: R$%2.f\n",saliq);

    return 0;

}
