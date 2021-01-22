/*Escreva um programa que imprima todas as possibilidades de que no lan�amento de
dois dados a soma das faces seja um valor informado pelo usu�rio. O usu�rio deve
informar um valor v�lido entre 2 a 12. Repetir a leitura at� que o usu�rio informe um valor
v�lido.*/

#include <stdio.h>

int main(void)
{
    int x,y,z;
    char resposta;

    do
    {

        do
        {
            printf("Informe um valor entre 2 e 12: ");
            fflush(stdin);
            if(scanf("%d", &x)== 0)
            {
                printf("Caractere invalido\n");
                x=1;
            }
            else if(x<2 || x>12)
            {
                printf("Valor invalido\n");
            }
        }
        while(x<2 || x>12);

        for(y=1; y<=6; y++)
        {
            for(z=1; z<=6; z++)
            {
                if(y+z==x)
                {
                    printf("%d + %d = %d\n",y,z,y+z);
                }
            }
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}
