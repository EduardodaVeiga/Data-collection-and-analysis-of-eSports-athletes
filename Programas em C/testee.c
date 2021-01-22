#include<stdio.h>

int main(void)
{
    char texto[150];
    int palavras=0,i=0;

    printf("Informe um texto: ");
    fflush(stdin);
    gets(texto);
    for(i=0;texto[i]!= '\0';i++)
    {
        if(texto[i] != ' ' && texto[i] != '\t')
        {
            palavras++;
            while(texto[i] != ' ' && texto[i] != '\t')
                i++;
        }
    }
    printf("%d",palavras);
}
