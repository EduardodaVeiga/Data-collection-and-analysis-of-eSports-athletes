#include <stdio.h>

float main (void)
{
    //Declaração de variáveis
    float valor, reaj, vareaj;

    //Entrada de dados
    printf("Informe o valor primario: ");
    scanf("%f", &valor);
    printf("Informe o valor do reajuste: ");
    scanf("%f", &reaj);

    //Processamento de dados
    vareaj=valor+(valor*(reaj/100));

    //Saída de dados
    printf("O valor apos o reajuste eh de R$%.2f",vareaj);

    return 0;

}

