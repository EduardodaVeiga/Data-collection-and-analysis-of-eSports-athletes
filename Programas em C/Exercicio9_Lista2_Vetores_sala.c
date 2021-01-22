/*O que faz o algoritmo a seguir:
declare a[50], i, soma como inteiro
declare media como real
soma = 0
repetir i = 0, até i< 50, passo 1
leia a[i]
fim-repetir
repetir i = 0, até i< 50, passo 1
soma = soma + a[i]
fim-repetir
repetir i = 0, até i < 50, passo 1
escreva a[i]
fim-repetir
media = soma / 50
escreva media
Implemente a solução na linguagem C para esse algoritmo. Deve ser utilizada a função para gerar os valores do
vetor aleatoriamente e a função para mostrar os elementos do vetor, já implementadas na biblioteca Vetores.h e
também criar uma função chamada SomarVetorInteiro(), que deve ser incluída na biblioteca Vetores.h e
receberá como parâmetros o vetor e o tamanho do vetor e retornará o valor da soma dos elementos do vetor.
Considere que os valores do vetor devem estar compreendidos em um intervalo de 0 a 100, dessa forma, a função
GerarVetorInteiro() deve ser modificada para aceitar essa faixa de valores
*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[50];

    do
    {
        printf("---VETOR---\n");
        geravetorinteirocomlimite(vetor,50,100,0);
        mostrarvetoraleatorio(vetor,50);
        printf("\nMedia: %.2f",(float)somavetorinteiro(vetor,50)/50);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
