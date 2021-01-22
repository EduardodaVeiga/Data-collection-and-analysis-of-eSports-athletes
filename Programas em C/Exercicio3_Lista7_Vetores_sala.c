#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void geravetoraleatorio (int vetor[], int tam, int limsup)
{
    int i,x,repete,cont=0,random;

    srand(time(NULL));
    cont=0;
    do
    {
        random=(rand() % limsup)+1;
        repete=0;
        for(x=0; x<cont; x++)
        {
            if(random==vetor[x])
            {
                repete=1;
                break;
            }
        }
        if(repete==0)
        {
            vetor[cont] = random;
            cont++;
        }
    }while(cont!=tam);
}
