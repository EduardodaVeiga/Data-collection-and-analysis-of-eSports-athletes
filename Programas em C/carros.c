#include <stdio.h>

float main(void)

{
    //Declaração de variáveis
    float qc, vc, sal, com, valt;

    //Entrada de dados
    printf("informe o salario fixo:");
    scanf("%f", &sal);
    printf("informe a quantidade de carros vendidos:");
    scanf("%f", &qc);
    printf("informe o valor total das vendas:");
    scanf("%f", &vc);
    printf("informe o valor da comissao por carro:");
    scanf("%f", &com);

    //processamento de dados
    valt = sal + (qc*com) + (vc/20);

    //Saída de dados
    printf("Salário líquido: %.2f\n", valt);

    return 0;

}




