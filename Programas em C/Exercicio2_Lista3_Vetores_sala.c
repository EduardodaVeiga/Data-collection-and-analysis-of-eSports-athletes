/*Criar uma função para gerar valores aleatórios com ambos os limites especificados com o seguinte
protótipo:
void GerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int
limSup);
Sendo que limInf e limSup aceitam quaisquer valores positivos.
Dica: Use vetor[i] = (rand() % ((limSup - limInf) + 1)) + limInf;
Usando a função GerarVetorInteiroComFaixa(), gerar aleatoriamente um vetor com 20 elementos entre 5 e
20. Em seguida ordenar o vetor. Percorrer o vetor ordenado e mostrar os divisores e a quantidade de
divisores de cada um dos valores armazenados. Caso existam elementos repetidos, considerar apenas um
deles.
Atenção: Neste exercício, além de utilizar a função GerarVetorInteiroComFaixa(), a função
MostrarVetorInteiro() e a função OrdenarVetorInteiro(), utilizar também a função MostrarDivisores() e a função
QtdeDivisores(), ambas criadas em exercícios anteriores e armazenadas em uma biblioteca chamada
"divisores.h".
*/

#include <stdio.h>
#include "vetores.h"
#include "Divisores.h"

int main(void)
{
    char resposta;
    int vetor[20],x,aux;

    do
    {
        geravetorinteirocomlimite(vetor,20,20,5);
        printf("\n---VETOR A---\n");
        mostrarvetoraleatorio(vetor,20);
        printf("\n---VETOR ORDENADO---\n");
        vetorordenado(vetor,20);
        mostrarvetoraleatorio(vetor,20);
        printf("\n---DIVISORES---\n");
        aux=100;
        for(x=0;x<20;x++)
        {
            if(vetor[x]!=aux)
            {
                printf("%d => ",vetor[x]);
                mostrardivisores(vetor[x]);
                printf(" - %d divisores",quantdivisores(vetor[x]));
                printf("\n--------------------------------------\n");
                aux=vetor[x];
            }
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
