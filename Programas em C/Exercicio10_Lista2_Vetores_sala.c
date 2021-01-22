/* 10) O que faz o algoritmo a seguir:
declare vet[80], i como inteiro
repetir i = 0, até i < 80, passo 1
leia vet[i]
fim-repetir
menor = vet[0]
posicaomenor = 0
repetir i = 0, até i < 80, passo 1
se ( vet[i] < menor ) then
menor = vet(i)
posicaomenor = i
fim-se
fim-repetir
escreva ‘menor = ’, menor, ‘na posicao =’, posicaomenor
Implemente a solução na linguagem C para esse algoritmo. Devem ser utilizadas as funções para gerar
aleatoriamente os valores do vetor e mostrar os elementos do vetor, que se encontram em Vetores.h. Considere
que os valores do vetor devem estar compreendidos em um intervalo de 0 a 100.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int x,vetor[80],menor,indice;

    do
    {
        printf("---VETOR---\n");
        geravetorinteirocomlimite(vetor,80,100,0);
        mostrarvetoraleatorio(vetor,80);
        menor=vetor[0];
        for(x=0;x<80;x++)
        {
            if(vetor[x]<menor)
            {
                menor=vetor[x];
                indice=x;
            }
        }
        printf("\nMenor: %d se encontra na posicao %d",menor,indice);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
