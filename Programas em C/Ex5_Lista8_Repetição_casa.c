/*Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar
essa quantidade para os números compreendidos entre o valor ‘x’ (informado pelo usuário)
e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um número positivo entre
2 e 100. Ao final, mostrar a maior quantidade de divisores.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int num,y,z,cont;

    do
    {
        do
        {
            printf("Informe um valor entre 2 e 100: ");
            scanf("%d", &num);
            if(!(num>=2 && num<=100))
            {
                printf("Valor invalido\n");
            }
        }while(!(num>=2 && num<=100));
        for(y=num;y<=num+10;y++)
        {
            cont=0;
            printf("%d ==> ",y);
            for(z=y;z>=1;z--)
            {
                if(y%z==0)
                {
                    printf(" %d,",z);
                    cont++;
                }
            }
            printf(" |%d divisores|",cont);
            printf("\n");
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
