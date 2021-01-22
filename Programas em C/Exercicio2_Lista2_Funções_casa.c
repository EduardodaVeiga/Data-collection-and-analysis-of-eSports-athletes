/*2) Criar função para:
a) Receber, por parâmetro, um número inteiro e positivo e retornar a quantidade de divisores que esse
número possui.
b) Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra os divisores
de 1 até o número passado como parâmetro da função.
c) Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
d) Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
Salvar todas as funções dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um número
2 - Divisores de um número
3 - Divisores, quantidade e soma de um intervalo
4 - Maximo Divisor Comum de dois números
Opção:*/

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











