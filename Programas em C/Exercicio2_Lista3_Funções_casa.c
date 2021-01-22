/*2) Fazer uma função para verificar se um número equivale a soma dos n primeiros ímpares iniciando em 1.
Por exemplo, 9, é um número que tem essa característica porque 1 + 3 + 5 = 9 (soma dos n primeiros
números ímpares iniciando em 1). Essa função recebe como parâmetro um valor inteiro e retorna 's' se o
número equivale a soma dos n primeiros ímpares e 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado
pelo usuário.
*/
#include <stdio.h>
#include "somanimpares.h"

int main(void)
{
    int num,opcao,liminf,x,limsup;
    char resposta;

    do
    {
        printf("1-Verifica se o numero equivale a soma de impares\n2-Verifica os numeros que equivalem a soma dos impares de um intervalo\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Informe um numero: ");
                scanf("%d",&num);
                if(somanimpar(num)=='s')
                {
                    printf("Equivale a soma dos impares\n");
                }
                else printf("Nao equivale a soma de impares\n");
            break;
            case 2:
                printf("Informe o valor do limite inferior: ");
                scanf("%d", &liminf);
                printf("Informe o valor do limite superior: ");
                scanf("%d", &limsup);
                for(x=liminf;x<=limsup;x++)
                {
                    if(somanimpar(x)=='s')
                    {
                        printf("%d equivale a soma de impares\n",x);
                    }
                    else printf("%d nao equivale a soma de impares\n",x);
                }
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
