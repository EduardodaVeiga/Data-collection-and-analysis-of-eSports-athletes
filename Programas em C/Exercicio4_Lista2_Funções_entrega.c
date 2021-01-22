

#include <stdio.h>

int palindromo(int n);
int main(void)
{
    char resposta;
    int num,x,liminf,limsup,opcao,cont=0;

    do
    {
        printf("1-Verifica se um numero e palindromo\n2-Mostra os numeros palindromos de um intervalo\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Informe um numero: ");
                scanf("%d", &num);
                if(palindromo(num)==1)
                {
                    printf("E palindromo");
                }
                else printf("Nao e palindromo");
            break;
            case 2:
                printf("Informe o limite inferior: ");
                scanf("%d", &liminf);
                printf("Informe o limite superior: ");
                scanf("%d", &limsup);
                for(x=liminf;x<=limsup;x++)
                {
                    if(palindromo(x)==1)
                    {
                        printf("%d\t",x);
                        cont++;
                        if(cont%5==0)
                        {
                            printf("\n");
                        }
                    }
                }
            break;
            default:
                printf("Opcao invalida\n");
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
int palindromo(int n)
{
    int aux,inverso=0;

    aux=n;
    while (aux != 0)
    {
        inverso = inverso * 10 + aux % 10;
        aux = aux / 10;
    }
    if (inverso == n)
    {
        return 1;
    }
  else return 0;
}
