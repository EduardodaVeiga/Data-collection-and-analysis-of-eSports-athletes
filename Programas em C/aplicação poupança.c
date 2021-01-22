#include <stdio.h>
#include <math.h>

float main(void)
{
    float va,tr,valor,nm;

    //Entrada de dados
    printf("Informe o valor da aplica%cao:R$ ",135);
    scanf("%f", &va);
    printf("Informe a taxa de rendimento (entre 0 e 1): ");
    scanf("%f", &tr);
    printf("Informe o n%cmero de meses: ",163);
    scanf("%f", &nm);

    //Processamento de dados
    valor=(va*(pow(1+tr,nm)));

    //Saida de dados

    printf("O valor acumulado ser%c: R$%.2f",160,valor);

    return 0;

}
