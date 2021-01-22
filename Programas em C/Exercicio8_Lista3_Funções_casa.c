/*8) (DESAFIO) Desenvolva uma função que receba um número inteiro positivo e ímpar e imprima um diamante
de asteriscos. Escreva um programa para validar a entrada e chamar a função.
Exemplo:*/

#include <stdio.h>
#include "diamante.h"

int main(void)
{
    char resposta;
    int n;

    do
    {
        do
        {
            printf("Informe um valor: ");
            scanf("%d", &n);
            if(n%2==0 || n<=0)
            {
                printf("Valor invalido\n");
            }
        }
        while(n%2==0 || n<=0);
        diamante(n);

        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}
