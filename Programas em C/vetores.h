#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geravetoraleatorio (int vetor[], int tam, int limsup)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = (rand() % limsup)+1;
    }
}
void geravetorinteirocomlimite (int vetor[], int tam, int limsup, int liminf)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % ((limsup-liminf)+1)+liminf;
    }
}
void vetorordenado(int vetor[],int tam)
{
    int aux=0;
    for (int i = 0; i < tam; i++)
            {
                for (int j = 0; j < tam; j++)
                {
                    if (vetor[i] < vetor[j])
                    {
                        aux = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = aux;
                    }
                }
            }
}
void mostrarvetoraleatorio(int vetor[], int tam)
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
void mostrarvetoraleatoriopares(int vetor[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]%2==0)
        {
            printf("%d\t",vetor[i]);
        }
    }
}
void mostrarvetoraleatorioimpar(int vetor[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]%2!=0)
        {
            printf("%d\t",vetor[i]);
        }
    }
}
void mostrarvetoraleatoriodobro(int vetor[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\t",2*vetor[i]);
    }
}
void mostrarvetoraleatoriomultindice(int vetor[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\t",vetor[i]*i);
    }
}
void mostrarvetoraleatorioinverso(int vetor[], int tam)
{
    int i;

    for(i=tam-1;i>=0;i--)
    {
        printf("%d\t",vetor[i]);
    }
}
void vetorconfere(int vetora[], int tama, int vetorb[], int tamb)
{
    int i;

    if(tamb>=tama)
    {
        for(i=0;i<tamb;i++)
        {
            if(i>tama)
            {
                printf("-1\t");
            }
            else if(vetora[i]>vetorb[i])
            {
                printf("1\t");
            }
            else if(vetora[i]==vetorb[i])
            {
                printf("-1\t");
            }
            else printf("0\t");
        }

    }
    else
    {
        for(i=0;i<tama;i++)
        {
            if(i>tamb)
            {
                printf("1\t");
            }

            else if(vetora[i]>vetorb[i])
            {
                printf("1\t");
            }
            else if(vetora[i]<vetorb[i])
            {
                printf("-1\t");
            }
            else printf("0\t");
        }
    }
}
void mostrarsomamenor100(int vetor[], int tam)
{
    int i, soma=0;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]<100)
        {
            soma=soma+vetor[i];
        }
    }
    printf("\nSoma dos valores menores que 100: %d",soma);
}
void mostrarquantigual100(int vetor[], int tam)
{
    int i,cont=0;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]==100)
        {
            cont++;
        }
    }
    printf("\nQuantidade de valores igual(s) a 100: %d", cont);
}
void mostrarmedia100(int vetor[], int tam)
{
    int i,cont=0,soma=0;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]>100)
        {
            cont++;
            soma=soma+vetor[i];
        }
    }
    printf("\nMedia dos valores maiores que 100: %.2f", (float)soma/cont);
}
int somavetorinteiro(int vetor[],int tam)
{
    int x,soma;
    soma=0;
    for(x=0;x<50;x++)
    {
        soma=soma+vetor[x];
    }
    return (soma);
}
void GerarVetorFloat0a1(float vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = (float)(rand()) / RAND_MAX;
    }
}
void GerarVetorFloat0a100(float vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = ((float)(rand()) / RAND_MAX)*100;
    }

}
void MostrarVetorFloat(float vetor[], int tam)
{
    int i,cont=0;

    for(i=0;i<tam;i++)
    {
        printf("%.2f\t",vetor[i]);
        cont++;
        if(cont%15==0 && cont!=1)
        {
            printf("\n");
            cont=0;
        }
    }
}
float SomarVetorFloat(float vetor[], int tam)
{
     int x,soma=0;
     for(x=0;x<tam;x++)
     {
         soma=soma+vetor[x];
     }
     return(soma);
}
void GerarVetorCharMinuscula(char vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 26 + 97;
    }
}
void GerarVetorCharMaiuscula(char vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 26 + 65;
    }
}
void MostrarVetorChar(char vetor[], int tam, int n)
{
    int i,cont=0;

    for(i=0;i<tam;i++)
    {
        printf("%c ",vetor[i]);
        cont++;
        if(cont%n==0 && cont!=1)
        {
            printf("\n");
            cont=0;
        }
    }
}
void GerarVetorCharAlfanumerico(char vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 223 + 33;
    }
}
void GerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo,int limPositivo)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i]=(rand()%(2*limPositivo+1))+limNegativo;
    }
}
