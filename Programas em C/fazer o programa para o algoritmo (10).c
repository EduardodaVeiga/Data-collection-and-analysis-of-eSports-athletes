#include <stdio.h>

int main(void)
{
    int soma=0,num=1;

    do
    {
        printf("Informe um valor positivo: ");
        scanf("%d",&num);
        soma=soma+num;
    }while(num>0);
    printf("Soma: %d",soma);
    printf("\nA estrutura representada e do-while");
    printf("\nO programa pede uma serie de valores positivos e apresenta a soma deles quando informado um valor negativo\n");
    printf("O problema seria que o numero negativo usado para finalizacao e considerado na soma total");
    printf("\nAs modificacoes necessarias seriam colocar um if no inicio para verificar se o valor informado e negativo, nao entrando na soma");


    return 0;
}
