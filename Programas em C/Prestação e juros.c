//Calcula a presta��o com os juros a ser paga

#include <stdio.h>

float main (void)
{
    //Declara�ao de vari�veis
    float prest, taxa, prestaxa;

    //Entrada de dados
    printf("Informe o valor da prestacao: ");
    scanf("%f", &prest);
    printf("Informe a taxa cobrada(juros):");
    scanf("%f", &taxa);

    //Processamento de dados
    prestaxa=(prest+(prest*(taxa/100)));

    //Sa�da de dados
    printf("O valor da prestacao com juros eh de: %.2f",prestaxa);

    return 0;
}
