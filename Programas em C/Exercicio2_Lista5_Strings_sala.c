/*Elaborar um programa que leia uma frase e determine se a mesma representa um palíndromo. Em frases
de palíndromos os espaços não são considerados, então é necessário inicialmente retirar os espaços em
brancos do texto. Para comparar as strings use a função int ComparaStrings(char str1[],
char str2[]) criada na Lista 4 de exercícios. */

#include <stdio.h>

int comparapalavra(char palavra[], char inverso[]);
int main(void)
{
    char resposta, texto[150],textosem[150],inverso[150];
    int x,y;

    do
    {
        printf("Informe um texto de ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);
        x=0;
        y=0;
        while(texto[x]!='\0')
        {
            if(texto[x]!=32)
            {
                textosem[y]=texto[x];
                y++;
            }
            x++;
        }
        textosem[y]='\0';
        x=0;
        y=0;
        while(textosem[x]!='\0')
        {
            x++;
        }
        while(x>=0)
        {
            inverso[y]=textosem[x-1];
            x--;
            y++;
        }
        if(comparapalavra(textosem,inverso)==1)
        {
            printf("\nE palindromo");
        }
        else printf("\nNao e palindromo");
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
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
