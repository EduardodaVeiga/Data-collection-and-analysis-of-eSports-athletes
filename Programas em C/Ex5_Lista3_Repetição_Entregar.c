/*Apresentar os números primos entre dois valores, que representam os limites inferior e
superior, respectivamente, de um intervalo, informados pelo usuário. Apresentá-los com n
números por linha. n é informado pelo usuário. Validar n para que seja maior que 0. Validar o limite inferior para seja maior que 1 e o limite superior para que seja maior ou
igual ao limite inferior. Implementar a repetição de programa.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int liminf,limsup,y,z,cont,cont2,x;

    do
    {
        cont=0;
        cont2=0;
        x=0;
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
        do
        {
            printf("Quantos primos quer mostrar por linha: ");
            scanf("%d", &x);
            if(x<=0)
            {
                printf("Valor invalido\n");
            }
        }while(x<=0);
        for(y=liminf;y<=limsup;y++)
        {
            cont=0;
            for(z=y;z>1;z--)
            {
                if(y%z==0)
                {
                    cont++;
                }
            }
            if(cont==1)
            {
                printf("%3d\t",y);
                cont2++;
                if(cont2%x==0)
                {
                    printf("\n");
                }
            }
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='s' || resposta=='S');

    return 0;
}
