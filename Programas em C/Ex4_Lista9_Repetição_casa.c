/*Apresentar n valores que são divisíveis por x e y. n, x e y são informados pelo usuário e
devem ser maiores que zero. Validar.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int x,y,z,i,cont;
    do
    {
        do
        {
            printf("Quantos valores deseja mostrar: ");
            scanf("%d", &z);
            if(z<=0)
            {
                printf("Valor invalido\n");
            }
        }while(z<=0);
        do
        {
            printf("Informe o valor do primeiro divisor: ");
            scanf("%d", &x);
            if(x<=0)
            {
                printf("Valor invalido\n");
            }
        }while(x<=0);
        do
        {
            printf("Informe o segundo divisor: ");
            scanf("%d", &y);
            if(y<=0)
            {
                printf("Valor invalido\n");
            }
        }while(y<=0);
        cont=1;
        i=1;
        do
        {
            if(i%x==0 && i%y==0)
            {
                printf("%d\t", i);
                cont++;
                if(cont%7==0)
                {
                    printf("\n");
                }
            }
            i++;
        }while(cont<=z);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
