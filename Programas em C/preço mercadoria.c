#include<stdio.h>

int main(void)
{
    float preant, preat;

    printf("Informe o preco anterior: R$ ");
    scanf("%f", &preant);
    printf("Informe o preco atual: R$ ");
    scanf("%f", &preat);

    printf("A taxa de inflacao da mercadoria eh: %.1f%%",(((preat*100)/preant)-100));

    return 0;
}
