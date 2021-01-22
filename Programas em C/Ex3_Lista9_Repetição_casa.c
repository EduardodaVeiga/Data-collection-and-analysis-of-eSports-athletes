/*Ler dois números que representam os limites de um intervalo. Ler primeiro o valor do
limite inferior, que deve ser positivo e, em seguida, ler o valor do limite superior, que deve
ser maior que o limite inferior. Validar as entradas. Apresentar os pares e divisíveis por 3
de cada um dos valores do intervalo da seguinte forma:*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int liminf,limsup,y,z,cont,cont2;

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
            if(limsup<=liminf)
            {
                printf("Valor invalido\n");
            }
        }while(limsup<=liminf);
        for(y=liminf;y<=limsup;y++)
        {
            printf("%d = ",y);
            cont=0;
            cont2=0;
            for(z=1;z<=y;z++)
            {
                if(z%2==0 && z%3==0)
                {
                    printf("\t%d",z);
                    cont2++;
                }
                if(!(z%2==0 && z%3==0))
                {
                    cont++;
                }
            }
            if(y-cont==0)
            {
                printf("\tNenhum");
            }
            printf("\n");
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;

}
