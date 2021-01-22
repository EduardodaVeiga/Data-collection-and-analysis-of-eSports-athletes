/*Utilizar uma função para gerar um vetor com 10 valores entre 5 e 50. Utilizar uma função para verificar se
cada elemento do vetor é ou não um número primo. Armazenar em outro vetor somente os números que são
primos. Mostrar os dois vetores utilizando função.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void mostrarvetor(int vetor[], int tam);
int primo(int num);
int main(void)
{

    char resposta;
    int vetor[10],vetorp[10],i,z;

    do
    {
        z=0;
        srand(time(NULL));
        for(i=0; i<10; i++)
        {
            vetor[i] = rand() % ((50-5)+1)+5;
        }
        printf("\n===VETOR===\n");
        mostrarvetor(vetor,10);
        for(i=0;i<10;i++)
        {
            if(primo(vetor[i])==0)
            {
                vetorp[z]=vetor[i];
                z++;
                printf("\n%2d e primo",vetor[i]);
            }
            else printf("\n%2d nao e primo",vetor[i]);
        }
        printf("\n===PRIMOS===\n");
        mostrarvetor(vetorp,z);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c",&resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
void mostrarvetor(int vetor[], int tam)
{
    int i,cont=0;

    for(i=0;i<tam;i++)
    {
        printf("%d\t",vetor[i]);
        cont++;
        if(cont%15==0 && cont!=1)
        {
            printf("\n");
            cont=0;
        }
    }
}
int primo(int num)
{
    int i, contDiv=0;

    for(i=2; i<num; i++)
    {
        if(num % i == 0)
        {
            contDiv++;
            break;
        }
    }

    return(contDiv);
}

