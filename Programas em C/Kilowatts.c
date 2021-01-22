#include <stdio.h>

float main(void)
{
    //Declaração de variáveis
    float salmin, kilgas, umkil;

    //Entrada de dados
    printf("Informe o valor do salario minimo\" atual: R$ ");
    scanf("%f", &salmin);
    printf("Informe a quantidade de kilowatts gastos pela residencia: ");
    scanf("%f", &kilgas);

    //Processamento de dados
    umkil=(salmin/7)/100;

    //Saida de dados
    printf("O valor de um kilowatt %c: R$%.2f\n",130,umkil);

    //Processamento de dados
    umkil=((salmin/7)/100)*kilgas;


    //Saída de dados
    printf("O valor a ser pago pela residencia eh:R$%.2f\n",umkil);

    //Processamento de dados
    kilgas=umkil-(umkil*0.1);

    //Saída de dados
    printf("O valor a ser pago com 10%% de desconto eh: R$%.2f",kilgas);

    return 0;


}
