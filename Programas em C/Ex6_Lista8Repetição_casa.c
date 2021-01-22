/*Fazer um programa que solicite ao usuário informar um número compreendido entre 10
e 20. Validar essa entrada. Mostrar os números compreendidos entre o valor ‘x’ (informado pelo usuário) e ‘x+6’, inclusive. Para cada número gerado, mostrar os números
pares de 2 até o número gerado, calcular a soma dos pares e mostrar a soma*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int num,y,z,soma;

    do
    {
        soma=0;
        do
        {
            printf("Informe um valor entre 10 e 20: ");
            scanf("%d", &num);
            if(!(num>=10 && num<=20))
            {
                printf("Valor invalido\n");
            }
        }while(!(num>=10 && num<=20));
        for(y=num;y<=num+5;y++)
        {
            printf("%d ==> ",y);
            for(z=1;z<=y;z++)
            {
                if(z%2==0)
                {
                    printf(" %d,",z);
                    soma=soma+z;
                }
            }
            printf("<---Soma=%d",soma);
            printf("\n");
            soma=0;
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
