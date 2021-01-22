/*Criar uma função para trocar os caracteres maiúsculos por minúsculos de uma string*/

#include <stdio.h>

void trocacaracteres(char texto)
{
    int x;
    while(texto[x]!='\0')
    {
        if(texto[x]>=65 && texto[x]<=90)
        {
            texto[x]=texto[x]+32;
        }
    }
}
