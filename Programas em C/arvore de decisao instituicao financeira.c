#include <Stdio.h>

int main(void)
{
    char saldo, aplic;

    printf("Saldo em  conta corrente(p para positivo e n para negativo): ");
    scanf("%c", &saldo);

    if(saldo=='n' || saldo=='N')
    {
        printf("Aplicacoes(s para sim e n para nao): ");
        scanf("%s",&aplic);
        if(aplic=='n' || aplic=='N')
        {
            printf("Cliente com risco");
        }
        else if(aplic=='s' || aplic=='S')
        {
            printf("Cliente sem risco");
        }
    }
    else if(saldo=='p' || saldo=='P')
    {
        printf("Cliente sem risco");
    }
    else printf("Caractere invalido");

    return 0;
}
