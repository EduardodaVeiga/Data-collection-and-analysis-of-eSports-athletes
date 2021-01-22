/*Ler a quantidade e o respectivo valor de produtos. Parar a leitura quando informado
valor 0 ou negativo para a quantidade. Ler o valor somente se informada quantidade
válida. O valor deve ser validado para que seja positivo. a) Calcular o valor total da compra. b) Calcular o valor médio dos itens comprados (fazer a média). c) Do valor total da compra separar e mostrar reais e centavos. d) Dos reais separar em cédulas de 100, 50, 20, 10, 5, 2 e moedas de 1.*/

#include <stdio.h>

int main(void)
{
    int quant,troco100,troco50,troco20,troco10,troco5,troco2,troco1,contitem;
    float valorun,valortotal,troco;
    char resposta;

    do
    {
        contitem=0;
        valortotal=0;
        troco=0;
        do
        {
            printf("Informe a quantidade de um produto: ");
            scanf("%d", &quant);
            if(quant>0)
            {
                do
                {
                    printf("Informe o valor unitario do produto: ");
                    scanf("%f", &valorun);
                    if(valorun<=0)
                    {
                        printf("Valor invalido\n");
                    }
                }
                while(valorun<=0);
                valortotal=valortotal+(quant*valorun);
                contitem=contitem+quant;
            }
        }
        while(quant>0);
        printf("Valor total da compra: R$%.2f\n",valortotal);
        printf("Valor medio dos itens comprados: %.2f\n",valortotal/contitem);
        printf("O valor total da compra e %d reais e %.2f centavos\n",(int)valortotal,valortotal-(int)valortotal);
        printf("%d reais equivale a: \n",(int)valortotal);
        troco=valortotal;
        troco100=troco/100;
        troco=((int)troco%100);
        troco50=troco/50;
        troco=((int)troco%50);
        troco20=troco/20;
        troco=((int)troco%20);
        troco10=troco/10;
        troco=((int)troco%10);
        troco5=troco/5;
        troco=((int)troco%5);
        troco2=troco/2;
        troco=((int)troco%2);
        troco1=troco/1;
        if(valortotal>=100)
        {
            printf("\n(%d)Nota(s) de 100 reais.",troco100);
        }
        if(valortotal>=50)
        {
            printf("\n(%d)Nota(s) de 50 reais.",troco50);
        }
        if(valortotal>=20)
        {
            printf("\n(%d)Nota(s) de 20 reais.",troco20);
        }
        if(valortotal>=10)
        {
            printf("\n(%d)Nota(s) de 10 reais.",troco10);
        }
        if(valortotal>=5)
        {
            printf("\n(%d)Nota(s) de 5 reais.",troco5);
        }
        if(valortotal>=2)
        {
            printf("\n(%d)Nota(s) de 2 reais.",troco2);
        }
        if(valortotal>=1)
        {
            printf("\n(%d)Moeda(s) de 1 real.",troco1);
        }

        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}
