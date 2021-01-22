#include <stdio.h>

int main(void)
{
    int quant,troco10,troco5,troco1;
    float valorun, valortotal,pago,trococent,troco;

    do
    {
        printf("Informe a quantidade de um produto: ");
        scanf("%d", &quant);
        if(quant>0)
        {
            printf("Informe o valor unitario do produto: ");
            scanf("%f", &valorun);
            valortotal=valortotal+(quant*valorun);
        }
    }while(quant>0);
    printf("Valor total da compra: R$%.2f",valortotal);
    printf("\nInforme o valor pago: ");
    scanf("%f", &pago);
    troco=(pago-valortotal);
    troco10=troco/10;
    troco=troco-(troco10*10);
    troco5=troco/5;
    troco=troco-(troco5*5);
    troco1=troco/1;
    troco=troco-(troco1*1);
    trococent=troco;
    printf("\nO valor do troco sera devolvido com: ");
    printf("\n(%d)Nota(s) de 10 reais.",troco10);
    printf("\n(%d)Nota(s) de 5 reais.",troco5);
    printf("\n(%d)Nota(s) de 1 real.",troco1);
    printf("\n e %.2f centavos",trococent);

    return 0;
}
