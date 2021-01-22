/*Fazer funções para:
a) Contar as palavras de uma string.
b) Mostrar o primeiro caractere de cada palavra de uma string.
c) Mostrar o último caractere de cada palavra de uma string.
Usando as funções criadas, elabore um programa que receba uma string de até 100 caracteres e forneça a
quantidade de palavras da string, mostre o primeiro caractere de cada palavra da string e mostre o último
caractere de cada palavra da string.
O programa também deverá copiar a primeira palavra da string para uma outra string e imprimi-la*/

#include <stdio.h>

int contar_palavras(char texto[],int tamanho)
{
    int x=0,contador=0;

    while(texto[x] != '\0')
    {
        if((texto[x]==32) && (texto[x-1]!=32) && (texto[x-2]!=32) && ((texto[x+1]>=65 && texto[x+1]<=90) || (texto[x+1]>=90 && texto[x+1]<=122)))
        {
            contador++;
        }
        x++;
    }
    return contador+1;
}
void mostra_primeiro_caractere(char texto[], int tamanho)
{
    int x=0,aux=0;

    printf("Primeiro caractere de cada palavra:\n");
    while(texto[x] != '\0')
    {
        aux++;
        if(texto[x]==32 || texto[x+1]=='\0')
        {
            if((texto[x-1]>=65 && texto[x-1]<=90) || (texto[x-1]>=90 && texto[x-1]<=122))
            {
                printf("%c   ",texto[x-(aux-1)]);
                aux=0;
            }
        }
        x++;
    }
}
void mostra_ultimo_caractere(char texto[], int tamanho)
{
    int x=0,aux=0;

    printf("\nUltimo caractere de cada palavra:\n");
    while(texto[x] != '\0')
    {
        aux++;
        if(texto[x]==32)
        {
            if((texto[x-1]>=65 && texto[x-1]<=90) || (texto[x-1]>=90 && texto[x-1]<=122))
            {
                printf("%c   ",texto[x-1]);
                aux=0;
            }
        }
        if(texto[x+1]=='\0')
        {
            if((texto[x-1]>=65 && texto[x-1]<=90) || (texto[x-1]>=90 && texto[x-1]<=122))
            {
                printf("%c   ",texto[x]);
                aux=0;
            }

        }
        x++;
    }
}
void mostra_primeira_palavra(char texto[], int tamanho)
{
    int x=0,aux=0;

    printf("\nPrimeira palavra:\n");
    while(texto[x] != '\0')
    {
        if(aux==1)
        {
            break;
        }
        if(texto[x]!=32 && ((texto[x+1]>=65 && texto[x+1]<=90) || (texto[x+1]>=90 && texto[x+1]<=122)))
        {
            printf("%c",texto[x]);
            aux=2;
        }
        if(aux==2)
        {
            if(texto[x+1]==32 || texto[x+1]=='\0')
            {
                printf("%c",texto[x]);
                aux=1;
            }
        }
        x++;
    }
}
int main(void)
{
    char resposta,texto[100];

    do
    {
        printf("Informe uma frase de ate 100 caracteres: ");
        fflush(stdin);
        gets(texto);
        printf("\"%s\" possui %d palavras\n",texto,contar_palavras(texto,100));
        mostra_primeiro_caractere(texto,100);
        mostra_ultimo_caractere(texto,100);
        mostra_primeira_palavra(texto,100);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
