/*2) Fazer uma fun��o para verificar se um n�mero equivale a soma dos n primeiros �mpares iniciando em 1.
Por exemplo, 9, � um n�mero que tem essa caracter�stica porque 1 + 3 + 5 = 9 (soma dos n primeiros
n�meros �mpares iniciando em 1). Essa fun��o recebe como par�metro um valor inteiro e retorna 's' se o
n�mero equivale a soma dos n primeiros �mpares e 'n' caso n�o.
Fazer um programa que use essa fun��o para:
a) Ler um n�mero inteiro informado pelo usu�rio � verificar se o mesmo tem essa caracter�stica.
b) Mostrar todos os n�meros que t�m ou n�o t�m essa caracter�stica e pertencem a um intervalo informado
pelo usu�rio.
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
