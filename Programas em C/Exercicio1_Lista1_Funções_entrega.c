/*1) Fazer uma função para calcular o quadrado de um número. Usar essa função para:
a) Mostrar o quadrado de um número informado pelo usuário.
b) Apresentar o quadrado entre dois valores (limites de um intervalo) informado pelo usuário. Os valores para
os limites devem estar 1 e 100:*/

#include <stdio.h>

void mostrarquadrado(int n);
int quadrado(int n);
int main(void)
{
    char resposta;
    int opcao,liminf,limsup,num,x;

    do
    {
        printf("1-Mostrar o quadrado de um numero\n2-Mostrar quadrado de numeros de limites\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            printf("Informe um numero: ");
            scanf("%d", &num);
            mostrarquadrado(num);
            printf(" = %d\n",quadrado(num));
        break;
        case 2:
            printf("Informe o limite inferior: ");
            scanf("%d", &liminf);
            printf("Informe o limite superior: ");
            scanf("%d", &limsup);
            if(liminf<limsup)
            {
                for(x=liminf;x<=limsup;x++)
                {
                    mostrarquadrado(x);
                    printf(" = %d\n",quadrado(x));
                }
            }
            else
            {
                for(x=limsup;x<=liminf;x++)
                {
                    mostrarquadrado(x);
                    printf(" = %d\n",quadrado(x));
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

    return 0;
}
void mostrarquadrado(int n)
{
    int x;

    printf("%d ^ 2",n);
}

int quadrado(int n)
{
    return (n*n);
}
