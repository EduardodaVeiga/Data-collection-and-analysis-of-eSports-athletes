/*Ler dois números que representam os limites de um intervalo. Validar a entrada, o
usuário deverá fornecer valores positivos. Mostrar o intervalo em ordem crescente. a) Mostrar os números primos desse intervalo, com cinco números por linha. b) Calcular a média dos múltiplos de 3 e de 7 desse intervalo. Validar para que não seja
realizada uma divisão por zero*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int liminf,limsup,y,z,cont,cont2,contim;
    float soma;

    do
    {
        cont=0;
        cont2=0;
        soma=0;
        contim=0;
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
                if(cont2%5==0)
                {
                    printf("\n");
                }
            }
            if(y%3==0 && y%7==0)
            {
                soma=soma+y;
                contim++;
            }
        }
        if(contim>0)
        {
            printf("\nMedia dos divisiveis por 3 e 7: %.2f",soma/contim);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='s' || resposta=='S');

    return 0;
}
