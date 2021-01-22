/*1) Fazer uma função que verifica se um número é triangular. Um número natural é triangular quando o
produto de três números naturais consecutivos for igual ao próprio número. Por exemplo: 120 é triangular,
pois 4 * 5 * 6 = 120.
Use essa função para:
a) Verificar se um número, informado pelo usuário, é triangular.
b) Mostrar quais números de um intervalo são triangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa.*/

#include <stdio.h>

int numtriangular(int n);
int main(void)
{
    char resposta;
    int num,liminf,limsup,opcao,x;

    do
    {
        printf("1-Verifica se um numero e triangular\n2-Mostra os numeros triangulares de um intervalo\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Informe um numero: ");
                scanf("%d", &num);

                if(numtriangular(num)== 0)
                {
                    printf("%d nao e triangular\n",num);
                }
            break;
            case 2:
                printf("Informe o limite inferior: ");
                scanf("%d", &liminf);
                printf("Informe o limite superior: ");
                scanf("%d", &limsup);
                for(x=liminf;x<=limsup;x++)
                {
                    if(numtriangular(x)==1)
                    {

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

int numtriangular(int n)
{
    int i, produto, triangular=0;

    for(i=1;i<=n; i++)
    {
        produto = i*(i+1)*(i+2);
        if(produto == n)
        {
            triangular = 1;
            printf("\n%d eh triangular ==> %d * %d * %d = %d\n", n, i, i+1, i+2, n);
            break;
        }
    }
    return(triangular);
}
