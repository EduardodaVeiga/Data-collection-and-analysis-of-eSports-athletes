/*Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento
mensal obtido por esta aplicação e o período do investimento; e retorne o valor da
aplicação ao final do período de investimento. Obs.: A cada 12 meses o percentual de
rendimento deve ser aumentado em 0,25%. Validar o valor da aplicação para que seja
positivo. Validar o percentual de rendimento para que seja um número entre 0 e 1. Validar
o período para que seja um valor positivo*/

#include <stdio.h>

int main(void)
{
    float aplic, rend, novarend, novaaplic;
    char resposta;
    int meses,mes,cont;

    do
    {
        do
        {
            printf("Informe o valor da aplicacao: ");
            scanf("%f", &aplic);
            if(aplic<=0)
            {
                printf("Valor invalido\n");
            }
        }while(aplic<=0);
        do
        {
            printf("Informe o percentual de rendimento(0 a 1): ");
            scanf("%f", &rend);
            if(rend<=0 || rend>1)
            {
                printf("Valor invalido\n");
            }
        }while(rend<=0 || rend>1);
        do
        {
            printf("Informe o periodo em meses: ");
            scanf("%d", &meses);
            if(meses<1)
            {
                printf("Valor invalido\n");
            }
        }while(meses<1);
        printf("MES\t\t%% DE RENDIMENTO\t\tVALOR DA APLICACAO\n");
        novarend=rend;
        cont=0;
        novaaplic=aplic;
        for(mes=1;mes<=meses;mes++)
        {
            if(mes%12==0)
            {
                rend+=0.25;
            }
            novaaplic=novaaplic+novaaplic*rend;
            printf("%d\t\t\%.2f\t\t\tR$%.2f\n",mes,rend,novaaplic);
            novarend+=rend;
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
