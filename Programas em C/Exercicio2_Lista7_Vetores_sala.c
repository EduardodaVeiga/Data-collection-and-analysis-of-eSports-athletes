/* (Desafio) Implemente uma fun��o que recebe por par�metro um vetor num�rico e retorna o n�mero de
maior ocorr�ncia no vetor.
Use a fun��o para verificar o n�mero que ocorre com maior frequ�ncia em um vetor de 10 posi��es com
valores aleat�rios entre 1 e 5. Se ocorrer de mais de um elemento ter a maior frequ�ncia, considere apenas o
que ocorre primeiro no vetor.*/

#include <stdio.h>
#include "vetores.h"

int maiorfrequencia(int vetor[], int tam);
int main(void)
{
    char resposta;
    int vetor[10];

    do
    {
        geravetoraleatorio(vetor,10,5);
        printf("\n===VETOR===\n");
        mostrarvetoraleatorio(vetor,10);
        printf("\nMaior frequencia: %d",maiorfrequencia(vetor,10));
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}

int maiorfrequencia(int vetor[], int tam)
{
    int x,y,maior,comparador[5]={1,2,3,4,5},res[6]={0,0,0,0,0,0},freq;

    for(x=0;x<tam;x++)
    {
        for(y=0;y<5;y++)
        {
            if(vetor[x]==comparador[y])
            {
                res[y+1]++;
            }
        }
    }
    maior=0;
    freq=0;
    for(x=1;x<6;x++)
    {
        if(res[x]>maior)
        {
            maior=res[x];
            freq=x;
        }
    }
    return freq;
}
