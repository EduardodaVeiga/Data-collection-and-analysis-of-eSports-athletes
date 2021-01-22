/*Criar funcao para inverter string*/

#include <stdio.h>

void inverterstring(char texto[])
{
    int x=0,y;

    while(texto[x]!='\0')
    {
        x++;
    }
    for(y=x; y>=0; y--)
    {
        printf("%c",texto[y]);
    }
}
