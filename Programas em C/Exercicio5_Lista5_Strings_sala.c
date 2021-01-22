/*Gerar um vetor com 10 valores inteiros aleatórios entre 1 e 100. Para os elementos de índice par, verificar
se é perfeito. Para os elementos de índice ímpar, somar os seus dígitos. Utilizar funções para verificar se um
número é perfeito e para somar os seus dígitos. Um número é perfeito quando a soma dos seus divisores
(exceto ele próprio) é igual ao próprio número (por exemplo 6 é perfeito porque possui 1, 2 e 3 como divisores
que somam 6). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somadigitos(int num);
int numeroperfeito(int num);
int main(void)
{
    char resposta;
    int vetor[10],i,cont;

    do
    {
        cont=0;
        srand(time(NULL));
        for(i=0; i<10; i++)
        {
            vetor[i] = (rand() % 100)+1;
        }
        printf("\n===VETOR===\n");
        for(i=0; i<10; i++)
        {
            printf("%d\t",vetor[i]);
            cont++;
            if(cont%15==0 && cont!=1)
            {
                printf("\n");
                cont=0;
            }
        }
        printf("\n===PARES===\n");
        for(i=0;i<10;i++)
        {
            if(vetor[i]%2==0)
            {
                if(numeroperfeito(vetor[i])==1)
                {
                    printf("%d e perfeito\n",vetor[i]);
                }
                else
                {
                    printf("%d nao e perfeito\n",vetor[i]);
                }
            }
        }
        printf("\n===IMPARES===\n");
        for(i=0;i<10;i++)
        {
            if(vetor[i]%2!=0)
            {
                printf("%d - Soma dos digitos: %d\n",vetor[i],somadigitos(vetor[i]));
            }
        }

        printf("\nDeseja repetir o  programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
int numeroperfeito(int num)
{
    int i,x,soma=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            soma=soma+i;
        }
    }
    if(soma==num && num!=1)
    {
        return 1;
    }
    else return 0;
}
int somadigitos(int num)
{
    int soma=0;
    if(num>=0)
    {
        while(num>0)
        {
            soma+=num%10;
            num/=10;
        }
    }
    return soma;
}
