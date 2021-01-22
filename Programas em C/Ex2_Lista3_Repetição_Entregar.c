/*Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um
programa que obtenha a taxa de depreciação anual para os bens, o valor do bem a ser
depreciado e o período em anos. Valor depreciado = valor do bem * (taxa de depreciação / 100)
Valor do bem depreciado = valor do bem – valor depreciado*/

#include <stdio.h>

int main(void)
{
    char resposta;
    float valor,deprec,soma;
    int ano,x;

    do
    {
        soma=0;

        do
        {
            printf("Informe o valor do bem a ser depreciado: ");
            scanf("%f", &valor);
            if(valor<=0)
            {
                printf("Valor invalido\n");
            }
        }while(valor<=0);
        do
        {
            printf("Informe o periodo da depreciacao: ");
            scanf("%d", &ano);
            if(ano<=0)
            {
                printf("Valor invalido\n");
            }
        }while(ano<=0);
        do
        {
            printf("Informe a taxa de depreciacao: ");
            scanf("%f", &deprec);
            if(deprec<=0)
            {
                printf("Valor invalido\n");
            }
        }while(deprec<=0);
        printf("Ano\t\tValor do Bem\t\t\tDepreciacao\t\tValor Depreciado\n");
        printf("=====================================================================================\n");
        for(x=1;x<=ano;x++)
        {
            printf("%d",x);
            printf("\t\t%-8.2f",valor);
            printf("\t\t\t%.2f",valor*(deprec/100));
            printf("\t\t\t%.2f",valor-valor*(deprec/100));
            soma=soma+valor*(deprec/100);
            valor=valor-valor*(deprec/100);
            printf("\n");
        }
        printf("\n======================================================================================");
        printf("\nDepreciacao acumulado: %.2f",soma);
        printf("\nDeseja repetir o programa: ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
