/*2) Gerar um arquivo de cabe�alho chamado vetores.h com uma fun��o para gerar um vetor com n�meros
aleat�rios, com determinado tamanho e que os valores aleat�rios variem entre 0 e n e com outra fun��o para
mostrar um vetor com tamanho n�o fixo.
Utilizar essas fun��es para:
a) Gerar um vetor de valores rand�micos com a quantidade de elementos e o valor de n informada pelo
usu�rio. Validar as entradas para que sejam informados valores positivos.
b) Mostrar o vetor.
c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a m�dia dos pares que est�o armazenados no vetor. Validar para que n�o seja realizada divis�o por
zero no c�lculo da m�dia.
O programa permanecer� em execu��o at� que seja escolhida a op��o sair*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int tam,menor,indice=0,n,soma,contpar,x;

    do
    {
        contpar=0;
        soma=0;
        printf("Informe o tamanho o vetor: ");
        scanf("%d", &tam);
        int vetor[tam];
        printf("Informe o valor de n: ");
        scanf("%d", &n);
        geravetoraleatorio(vetor,tam,n);
        printf("\n");
        mostrarvetoraleatorio(vetor,tam);
        menor=vetor[0];
        for(x=0;x<tam;x++)
        {
            if(vetor[x]%2==0)
            {
                soma=soma+vetor[x];
                contpar++;
            }
            if(vetor[x]<menor)
            {
                menor=vetor[x];
                indice=x;
            }
        }
        printf("\nO menor valor e %d e esta no indice %d",menor,indice);
        printf("\nA media dos pares e: %.2f",(float)soma/contpar);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
