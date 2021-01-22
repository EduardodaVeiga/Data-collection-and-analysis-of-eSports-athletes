/*O Triângulo de Floyd é um triângulo formado com números naturais. O triângulo
começa em 1 no canto superior esquerdo e continua a escrever a sequência de números
naturais de tal modo que cada linha contém um número a mais do que a linha anterior. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do Triângulo de Floyd.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int x,y,z,cont;

    do
    {
        do
        {
            printf("Informe um valor: ");
            scanf("%d", &x);
            if(x<=0)
            {
                printf("Valor invalido\n");
            }
        }while(x<=0);
        cont=0;
        for(y=1;y<=x;y++)
        {
            for(z=1;z<=y;z++)
            {
                cont++;
                printf("%d\t",cont);
            }
            printf("\n");
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
