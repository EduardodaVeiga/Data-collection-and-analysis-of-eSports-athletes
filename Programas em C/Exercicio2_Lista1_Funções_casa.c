/*2) Fazer uma fun��o para verificar se um n�mero � primo ou n�o. A fun��o ser� implementada em um
arquivo de cabe�alho "Primo.h" e deve retornar 0 se o n�mero for primo ou 1, caso o n�mero n�o seja primo.
Elaborar um programa para usar essa fun��o para:
a) Verificar se um n�mero informado pelo usu�rio � ou n�o um n�mero primo. Validar a entrada para que o
usu�rio informe um n�mero positivo.
b) Mostrar os primos no intervalo entre 1 e 100.
c) Fazer a m�dia dos primos entre 200 e 100.*/

#include <stdio.h>
#include "primo.h"

int main(void)
{
    int num1,opcao,cont=1,x,soma;
    char resposta;
    do
    {
        printf("1-Verifcar se um numero e primo\n2-Primos entre 1 e 100\n3-Media dos primos entre 200 e 100\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                do
                {
                    printf("Informe um valor: ");
                    scanf("%d", &num1);
                    if(num1<=0)
                    {
                        printf("Valor invalido\n");
                    }
                }while(num1<=0);
                if(num1==1)
                {
                    printf("1 nao e primo\n");
                    break;
                }
                if(primo(num1)==1)
                {
                    printf("%d nao e primo\n",num1);
                }
                else printf("%d e primo\n",num1);
            break;
            case 2:
                cont=1;
                for(x=2;x<=100;x++)
                {
                    if(primo(x)==0)
                    {
                        printf("%d\t",x);
                        cont++;
                    }
                    if(cont%6==0)
                    {
                        printf("\n");
                        cont=1;
                    }
                }
            break;
            case 3:
                cont=0;
                soma=0;
                for(x=200;x>=100;x--)
                {
                    if(primo(x)==0)
                    {
                        soma=soma+x;
                        cont++;
                    }
                }
                printf("Media: %.2f",(float)soma/cont);
            break;
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
