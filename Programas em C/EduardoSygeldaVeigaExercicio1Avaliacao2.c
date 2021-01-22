/*Ler uma string e contar quantos espaços sucessivos ela contém. Armazenar esses valores em um vetor.
Utilizando função, mostrar os elementos desse vetor. Identifique se nesse vetor há três valores em sequência que estão em ordem
crescente. Se há, mostre-os. Em seguida, usando função, ordene o vetor e mostre-o novamente. Conte a quantidade de cada valor que
há no vetor. Por exemplo: String informada (considere no exemplo que os traços representam os espaços): */


#include <stdio.h>

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
int main(void)
{
    char texto[150];
    int vetor[50],x=0,cont=0,y=0,z,aux,k;

    printf("Informe uma string: ");
    fflush(stdin);
    gets(texto);
    do
    {
        if(texto[x]==32)
        {
            cont++;
        }
        else
        {
            if(cont!=0)
            {
                vetor[y]=cont;
                cont=0;
                y++;
            }
        }
        x++;
    }while(texto[x-1]!='\0');
    printf("\nVetor Mostrado: ");
    mostrarvetoraleatorio(vetor,y);
    for(z=0;z<y;z++)
    {
        if(vetor[z+1]==vetor[z]+1)
        {
            if(vetor[z+2]==vetor[z+1]+1)
            {
                printf("\nSequencia de tres numeros em ordem crescente: \n");
                printf("%d %d %d",vetor[z],vetor[z+1],vetor[z+2]);
            }
        }
    }
    printf("\nVetor ordenado: ");
    vetorordenado(vetor,y);
    mostrarvetoraleatorio(vetor,y);
    printf("\nValor   Quantidade de ocorrencias\n");
    cont=0;
    for(z=0;z<y;z++)
    {
        if(vetor[z]!=vetor[z-1] || z==0)
        {
            aux=vetor[z];
            for(k=0; k<y; k++)
            {
                if(vetor[k]==aux)
                {
                    cont++;
                }
            }
            printf("%d     %d\n",vetor[z],cont);
            cont=0;
        }
    }

    return 0;
}
