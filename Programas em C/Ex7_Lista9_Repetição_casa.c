/*Sendo n um número positivo, apresentar as n primeiras raízes quadradas exatas. A
função para obter a raiz quadrada é sqrt() e está na biblioteca <math.h>*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    char resposta;
    int n,y,z,cont;

    do
    {
        do
        {
            printf("Informe um valor para n: ");
            scanf("%d", &n);
            if(n<=0)
            {
                printf("Valor invalido\n");
            }
        }while(n<=0);
        y=1;
        z=1;
        do
        {
            if(sqrt(y)==z)
            {
                printf("%d => ",y);
                printf("raiz de %d\n",z);
                cont++;
                z++;
            }
            y++;
        }while(z<=n);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
