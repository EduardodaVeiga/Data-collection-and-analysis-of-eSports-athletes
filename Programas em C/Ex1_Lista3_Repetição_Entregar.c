/*1) Ler um n�mero e ler um d�gito. Contar quantos d�gitos o n�mero possui. Exemplo:
� informado 5 como d�gito:
55 � possui 2 d�gitos cinco;
10 � possui nenhum d�gito cinco;
1550 � possui dois d�gitos cinco;
50050 � possui dois d�gitos cinco. Repetir o programa enquanto informados valores positivos.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int num, rest, dig, test, cont;

    do
    {
        rest=10;
        test=0;
        cont=0;
        do
        {
            printf("Informe um valor: ");
            scanf("%d", &num);
            if(num<=0)
            {
                printf("Valor invalido\n");
            }
        }while(num<=0);
        do
        {
            printf("Informe um digito: ");
            scanf("%d", &dig);
            if(dig<=0)
            {
                printf("Valor invalido\n");
            }
        }while(dig<=0);
        while(num>0)
        {
            if(num%10==dig)
            {
                cont++;
            }
            num/=10;
        }

        printf("O numero tem %d digitos iguais a %d",cont,dig);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
