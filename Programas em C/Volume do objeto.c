//Solicitar ao usu�rio as medidas da caixa que pretende calcular o volume e exibi-lo tal resultado
#include <stdio.h>

float main(void)
{
    //Declara��o de vari�veis
    float alt, lar, comp, vol;

    //Entrada de Dados
    printf("Informe a altura de sua caixa em cm: ");
    scanf("%f", &alt);
    printf("Informe a largura de sua caixa em cm: ");
    scanf("%f", &lar);
    printf("Informe o comprimento de sua caixa em cm: ");
    scanf("%f", &comp);

    //Processamento de dados
    vol=(alt*lar*comp);

    //Sa�da de dados
    printf("O Volume de sua caixa e: %.2f cm3",vol);

    return 0;
}
