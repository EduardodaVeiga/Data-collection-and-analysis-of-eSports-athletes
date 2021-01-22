/*) Na biblioteca "vetores.h" criar função:
a) Com o protótipo void GerarVetorFloat0a1(float vetor[], int tam) que gera
vetor com valores float aleatórios entre 0 e 1, para isso use:
vetor[i] = (float)(rand()) / RAND_MAX;
b) Com o protótipo void GerarVetorFloat0a100(float vetor[], int tam) que gera
vetor com valores float aleatórios entre 0 e 100, para isso use:
vetor[i] = ((float)(rand()) / RAND_MAX)*100;
c) Com o protótipo void MostrarVetorFloat(float vetor[], int tam) que mostra os
elementos de um vetor float.
d) Com o protótipo float SomarVetorFloat(float vetor[], int tam) que soma os
elementos de um vetor float.
Usando essas funções:
a) Gerar um vetor do tipo float com 10 elementos aleatórios entre 0 e 1, exibir o vetor e mostrar a soma de
todos os elementos do vetor.
b) Gerar um vetor do tipo float com 50 elementos aleatórios entre 0 e 100 e exibir o vetor. Criar outros dois
vetores numéricos do tipo float, em um deles armazenar os valores menores que 50 e em outro os maiores
que 50. Mostrar os vetores gerados.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int tamc,tamd,x,y,z;
    float vetor[10],vetorb[50];

    do
    {
        tamc=0;
        tamd=0;
        y=0;
        z=0;
        GerarVetorFloat0a1(vetor,10);
        printf("---VETOR 1---\n");
        MostrarVetorFloat(vetor,10);
        printf("\n\n---VETOR 2---\n");
        GerarVetorFloat0a100(vetorb,50);
        MostrarVetorFloat(vetorb,50);
        for(x=0;x<50;x++)
        {
            if(vetorb[x]<50)
            {
                tamc++;
            }
            else if(vetorb[x]>50)
            {
                tamd++;
            }
        }
        float vetorc[tamc],vetord[tamd];
        for(x=0;x<50;x++)
        {
            if(vetorb[x]<50)
            {
                vetorc[y]=vetorb[x];
                y++;
            }
            else if(vetorb[x]>50)
            {
                vetord[z]=vetorb[x];
                z++;
            }
        }
        printf("\n\n---VETOR 3---\n");
        MostrarVetorFloat(vetorc,tamc);
        printf("\n\n---VETOR 4---\n");
        MostrarVetorFloat(vetord,tamd);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
