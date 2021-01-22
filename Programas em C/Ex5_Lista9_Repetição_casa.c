/*Apresentar n valores divisíveis por 5 e não divisíveis por 2 com x valores por linha. Validar n e x para que sejam positivos.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int x,y,z,i,cont,cont2;
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
            printf("Quantos numeros deseja mostra por linha: ");
            scanf("%d", &x);
            if(x<=0)
            {
                printf("Valor invalido\n");
            }
        }while(x<=0);
        cont=1;
        i=1;
        cont2=0;
        do
        {
            if(i%5==0 && i%2!=0)
            {
                printf("\t%d", i);
                cont++;
                cont2++;
                if(cont2%x==0)
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
