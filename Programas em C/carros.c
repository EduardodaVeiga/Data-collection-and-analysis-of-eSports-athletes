#include <stdio.h>

float main(void)

{
    //Declara��o de vari�veis
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

    //Sa�da de dados
    printf("Sal�rio l�quido: %.2f\n", valt);

    return 0;

}




