/*Ler dois valores que representam os limites do intervalo. Apresentar os valores pares e
divisíveis por cinco desse intervalo em ordem decrescente. O usuário pode informar os
valores em ordem crescente ou decrescente.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int liminf, limsup, i,z;

    do
    {
        do
        {
            printf("Informe um valor para o limite inferior: ");
            scanf("%d", &liminf);
            if(liminf<=0)
            {
                printf("Valor invalido\n");
            }
        }while(liminf<=0);
        do
        {
            printf("Informe um valor para o limite superior: ");
            scanf("%d", &limsup);
            if(limsup<=0 || limsup==liminf)
            {
                printf("Valor invalido\n");
            }
        }while(limsup<=0);
        printf("\t====VALORES PARES E DIVISIVERIS POR 5 EM ORDEM DECRESCENTE====\n");
        if(liminf<limsup)
        {
            for(i=limsup;i>=liminf;i--)
            {
                if(i%2==0 && i%5==0)
                    printf("%d\t",i);                {
                }
            }
        }
        else
        {
            for(i=liminf;i>=limsup;i--)
            {
                if(i%2==0 && i%5==0)
                {
                    printf("%d\t",i);
                }
            }
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
