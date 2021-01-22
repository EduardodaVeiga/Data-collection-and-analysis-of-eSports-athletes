 /*Fazer uma função que recebe duas strings e retorna 1 se elas são iguais ou 0, caso sejam diferentes.
Elaborar um programa que leia uma palavra, armazene o seu inverso em outra string e determine se a
mesma representa um palíndromo ou não, usando a função que compara strings. Exemplos de palavras
palíndromos: ovo, natan, sos, arara, mirim, anilina ana.*/


#include <stdio.h>

int comparapalavra(char palavra[], char inverso[]);
int main(void)
{
    char resposta,palavra[20],palavrainv[20];
    int x,y;

    do
    {
        x=0;
        y=0;
        printf("Informe uma palavra: ");
        fflush(stdin);
        gets(palavra);
        while(palavra[x]!='\0')
        {
            x++;
        }
        while(x>=0)
        {
            palavrainv[y]=palavra[x-1];
            x--;
            y++;
        }
        printf("%d",comparapalavra(palavra,palavrainv));
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
int comparapalavra(char palavra[], char inverso[])
{
    int x=0,y=0,aux=0;
    while(palavra[x]!='\0')
    {
        if(palavra[x]==inverso[x])
        {

        }
        else
        {
            aux++;
        }
        x++;
    }
    if(aux==0)
    {
        return 1;
    }
    else return 0;

    return 0;
}
