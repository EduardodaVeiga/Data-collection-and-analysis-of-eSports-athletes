/*2) Criar fun��o para:
a) Receber, por par�metro, um n�mero inteiro e positivo e retornar a quantidade de divisores que esse
n�mero possui.
b) Mostrar os divisores de um n�mero. Essa fun��o recebe como par�metro o n�mero e mostra os divisores
de 1 at� o n�mero passado como par�metro da fun��o.
c) Receber, por par�metro, um n�mero positivo e retornar a soma dos divisores que esse n�mero possui.
d) Receber, por par�metro, dois n�meros e retornar o M�ximo Divisor Comum dos dois n�meros.
Salvar todas as fun��es dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um n�mero
2 - Divisores de um n�mero
3 - Divisores, quantidade e soma de um intervalo
4 - Maximo Divisor Comum de dois n�meros
Op��o:*/

#include <stdio.h>
#include "Divisores.h"

int main(void)
{
    int opcao,num,num2,liminf,limsup,x;
    char resposta;

    do
    {
        menu();
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            printf("Informe o numero que deseja saber a quantidade de divisores: ");
            scanf("%d", &num);
            printf("%d divisor(es)\n",quantdivisores(num));
            break;
        case 2:
            printf("Informe um numero para mostrar seus divisores: ");
            scanf("%d", &num);
            mostrardivisores(num);
            break;
        case 3:
            printf("Informe o limite inferior: ");
            scanf("%d",&liminf);
            printf("Informe o limite superior: ");
            scanf("%d", &limsup);
            for(x=liminf; x<=limsup; x++)
            {
                printf("%d - ",x);
                mostrardivisores(x);
                printf(" => Qtde: %d",quantdivisores(x));
                printf(" => Soma: %d\n",somadivisores(x));
            }
            break;
        case 4:
            printf("Informe o primeiro valor: ");
            scanf("%d",&num);
            printf("Informe o segundo valor: ");
            scanf("%d", &num2);
            printf("MDC: %d",mdc(num,num2));
            break;
        default:
            printf("Opcao invalida\n");
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}











