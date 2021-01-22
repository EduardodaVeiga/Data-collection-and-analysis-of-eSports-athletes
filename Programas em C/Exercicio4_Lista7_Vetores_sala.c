/*) Gerar dois vetores com 10 elementos cada, os elementos devem ser distintos. Os valores são aleatórios e
entre 1 e 15 para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor com a união
dos valores dos vetores anteriores. Utilizar o conceito matemático de união entre conjuntos. Mostrar os três
vetores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geravetoraleatorio (int vetor[], int tam, int limsup);
void mostrarvetoraleatorio(int vetor[], int tam);
int main(void)
{
    char resposta;
    int vetora[10], vetorb[10], vetorc[10], x, y, cont;

    do
    {
        cont=0;
        geravetoraleatorio(vetora,10,15);
        printf("\n===VETOR A===\n");
        mostrarvetoraleatorio(vetora,10);
        geravetoraleatorio(vetorb,10,10);
        printf("\n===VETOR B===\n");
        mostrarvetoraleatorio(vetorb,10);
        printf("\n===VETOR UNIAO===\n");
        for(x=0;x<10;x++)
        {
            vetorc[cont]=vetora[x];
            cont++;
        }
        for(x=0;x<10;x++)
        {
            vetorc[cont]=vetorb[x];
            cont++;
        }
        mostrarvetoraleatorio(vetorc,cont);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
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

