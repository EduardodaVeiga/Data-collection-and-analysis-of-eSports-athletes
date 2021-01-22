/*O que faz o algoritmo a seguir:
declare a[50], i, soma como inteiro
declare media como real
soma = 0
repetir i = 0, at� i< 50, passo 1
leia a[i]
fim-repetir
repetir i = 0, at� i< 50, passo 1
soma = soma + a[i]
fim-repetir
repetir i = 0, at� i < 50, passo 1
escreva a[i]
fim-repetir
media = soma / 50
escreva media
Implemente a solu��o na linguagem C para esse algoritmo. Deve ser utilizada a fun��o para gerar os valores do
vetor aleatoriamente e a fun��o para mostrar os elementos do vetor, j� implementadas na biblioteca Vetores.h e
tamb�m criar uma fun��o chamada SomarVetorInteiro(), que deve ser inclu�da na biblioteca Vetores.h e
receber� como par�metros o vetor e o tamanho do vetor e retornar� o valor da soma dos elementos do vetor.
Considere que os valores do vetor devem estar compreendidos em um intervalo de 0 a 100, dessa forma, a fun��o
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
