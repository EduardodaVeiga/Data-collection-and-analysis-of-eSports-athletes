/* (Desafio) Gerar um vetor (pode conter valores repetidos) com 15 valores aleatórios entre 1 e 20. Ordenar o
vetor. Mostrar o vetor. Gerar um novo vetor apenas com os valores que se repetem no vetor anterior. Mostrar
o vetor.
Dica: Poderá ser criada uma função com o protótipo int ExisteNoVetor(int vet[], int tamanho,
int valor) que recebe como parâmetros o vetor, o tamanho do vetor e um valor e retorna o número de
vezes que esse valor ocorre no vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
void geravetorinteirocomlimite (int vetor[], int tam, int limsup, int liminf)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % ((limsup-liminf)+1)+liminf;
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
int ExisteNoVetor(int vet[], int tamanho,int valor)
{
    int x,cont=0;
    for(x=0;x<tamanho;x++)
    {
        if(vet[x]==valor)
        {
            cont++;
        }
    }
    return cont;
}
int main(void)
{
    char resposta;
    int vetora[15],vetorc[15]={},x,z,repete,cont;

    do
    {
        z=0;
        cont=0;
        geravetorinteirocomlimite(vetora,15,20,1);
        vetorordenado(vetora,15);
        printf("\n===VETOR A===\n");
        mostrarvetoraleatorio(vetora,15);
        printf("\n===REPETIDOS===\n");
        for(x=0; x<15; x++)
        {
            if(ExisteNoVetor(vetora,15,vetora[x])>1)
            {
                repete=0;
                for(z=0; z<cont; z++)
                {
                    if(vetora[x]==vetorc[z])
                    {
                        repete=1;
                        break;
                    }
                }
                if(repete==0)
                {
                    vetorc[cont] = vetora[x];
                    cont++;
                }
            }
        }
        mostrarvetoraleatorio(vetorc,cont);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
