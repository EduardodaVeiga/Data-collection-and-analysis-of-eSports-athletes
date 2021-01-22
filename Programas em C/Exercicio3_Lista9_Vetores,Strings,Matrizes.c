/* Dado um vetor de n números reais, informar os elementos que compõem o vetor e o número de vezes que
cada um deles ocorre no vetor. Sugestão: Ordenar o vetor antes de verificar a ocorrência dos elementos no
mesmo.*/

#include <stdio.h>

void vetorordenado(float vetor[],int tam)
{
    float aux;
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
void mostrarvetoraleatorio(float vetor[], int tam)
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
int main(void)
{
    char resposta;
    int cont,x,tamanho,y;

    do
    {
        cont=0;
        printf("Informe a quantidade de elementos de um vetor: ");
        scanf("%d", &tamanho);
        float vetor[tamanho],aux;
        for(x=0;x<tamanho;x++)
        {
            printf("Informe o elemento %d do vetor: ",x+1);
            scanf("%f", &vetor[x]);
        }
        printf("\n===VETOR===\n");
        mostrarvetoraleatorio(vetor,tamanho);
        vetorordenado(vetor,tamanho);
        printf("\n===VETOR ORDENADO===\n");
        mostrarvetoraleatorio(vetor,tamanho);
        for(x=0;x<tamanho;x++)
        {
            aux=vetor[x];
            for(y=0;y<tamanho;y++)
            {
                if(aux==vetor[y])
                {
                    cont++;
                }
            }
            if(vetor[x]!=vetor[x-1] && cont==1)
            {
                printf("\n%.2f ocorre %d vez",aux,cont);
            }
            else if(vetor[x]!=vetor[x-1] && cont>1)
            {
                printf("\n%.2f ocorre %d vezes",aux,cont);
            }
            cont=0;
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
