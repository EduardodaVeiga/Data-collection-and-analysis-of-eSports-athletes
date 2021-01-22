/*1) Use a biblioteca "Fatorial.h" (criada no Exercício 3 da Lista 1) para:
a) Calcular e mostrar o fatorial de um número informado pelo usuário.
b) Calcular e mostrar o fatorial dos números de 1 a 12.*/

#include <stdio.h>
#include "Fatorial.h"

int main(void)
{
    int opcao,num,x;
    char resposta;

    do
    {
        printf("1-Mostrar fatorial de um numero\n2-Fatorial de 1 a 12\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            printf("Informe um numero: ");
            scanf("%d", &num);
            mostrarfat(num);
            printf(" %lld\n",fatorial(num));
        break;
        case 2:
            for(x=1;x<=12;x++)
            {
                mostrarfat(x);
                printf("%lld\n",fatorial(x));
            }
        break;
        default:
            printf("Valor invalido\n");
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
