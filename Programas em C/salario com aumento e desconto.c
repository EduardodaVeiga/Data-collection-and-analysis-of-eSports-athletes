#include <stdio.h>

float main (void)
{
    float sal,salaum,saliq,aum,desc;

    //Entrada de dados
    printf("Informe o valor do sal%crio inicial: R$ ",160);
    scanf("%f", &sal);
    printf("Informe o percentual de aumento(5 para 5%% por exemplo): ");
    scanf("%f", &aum);
    printf("Informe o percentual de desconto: ");
    scanf("%f", &desc);

    //Processamento de dados
    salaum=sal+(sal*(aum/100));
    saliq=salaum-(salaum*(desc/100));

    //Saída de dados
    printf("Sal%crio aumentado: R$%.2f\n",160,salaum);
    printf("Sal%crio l%cquido: R$%.2f\n\n",160,161,saliq);
    printf("O sal%crio l%cquido %c: R$%.2f",160,161,130,saliq);

    return 0;



}
