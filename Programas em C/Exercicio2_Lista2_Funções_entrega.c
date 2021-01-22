/*2) Fazer uma fun��o que verifica se um n�mero � retangular. Um n�mero � retangular se ele pode ser obtido
a partir da soma de uma sequ�ncia de n�meros pares, iniciando em 2. Por exemplo: 30 � retangular porque
resulta da soma de 2 + 4 + 6 + 8 + 10.
Use essa fun��o para:
a) Verificar se um n�mero, informado pelo usu�rio, � retangular.
b) Mostrar quais n�meros de um intervalo s�o retangulares.
Use menu de op��es (com switch-case) e implemente a repeti��o de programa.*/

#include <stdio.h>

int numretangular(int n);
int main(void)
{
    char resposta;
    int num,liminf,limsup,opcao,x;

    do
    {
        printf("1-Verifica se um numero e retangular\n2-Mostra os numeros triangulares de um intervalo\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Informe um numero: ");
                scanf("%d", &num);

                if(numretangular(num)== 0)
                {
                    printf("%d nao e retangular\n",num);
                }
            break;
            case 2:
                printf("Informe o limite inferior: ");
                scanf("%d", &liminf);
                printf("Informe o limite superior: ");
                scanf("%d", &limsup);
                for(x=liminf;x<=limsup;x++)
                {
                    if(numretangular(x)==1)
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

int numretangular(int n)
{
    int i, soma=0, x=2, retangular=0;

    for(i=2;i<=n; i+=2)
    {
        soma = soma + i;
        if(soma == n)
        {
            retangular = 1;
            printf("\n%2d eh retangular ==>",n);
            soma=2;
            do
            {
                printf(" %d ",x);
                if(soma<=n-x)
                {
                    printf(" + ");
                }
                soma=soma+x;
                x+=2;
            }while(soma<=n);
            printf(" = %d",n);
            break;
        }
    }
    return(retangular);
}
