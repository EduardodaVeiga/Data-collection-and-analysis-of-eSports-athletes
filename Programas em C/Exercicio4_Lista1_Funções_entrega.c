/*4) Fazer uma função que apresenta o resultado da multiplicação de dois números. Usar essa função para:
a) Apresentar a multiplicação de dois números informados pelo usuário.
b) Apresentar a tabuada (0 a 10) de um número informado pelo usuário.*/

#include <stdio.h>

void multiplicar(int n1, int n2);
int main(void)
{
    char resposta;
    int opcao,n1,n2,x;

    do
    {
        printf("1-Multiplica dois numeros\n2-Tabuada de um numero\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Informe o primeiro valor: ");
                scanf("%d", &n1);
                printf("Informe outro valor: ");
                scanf("%d", &n2);
                multiplicar(n1,n2);
            break;
            case 2:
                printf("Informe um numero: ");
                scanf("%d", &n1);
                for(x=1;x<=10;x++)
                {
                    multiplicar(n1,x);
                }
            break;
            default:
                printf("Opcao invalida\n");
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
void multiplicar(int n1, int n2)
{
    printf("%2d * %2d = %3d\n",n1,n2,n1*n2);
}
