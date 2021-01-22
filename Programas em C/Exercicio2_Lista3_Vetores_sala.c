/*Criar uma fun��o para gerar valores aleat�rios com ambos os limites especificados com o seguinte
prot�tipo:
void GerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int
limSup);
Sendo que limInf e limSup aceitam quaisquer valores positivos.
Dica: Use vetor[i] = (rand() % ((limSup - limInf) + 1)) + limInf;
Usando a fun��o GerarVetorInteiroComFaixa(), gerar aleatoriamente um vetor com 20 elementos entre 5 e
20. Em seguida ordenar o vetor. Percorrer o vetor ordenado e mostrar os divisores e a quantidade de
divisores de cada um dos valores armazenados. Caso existam elementos repetidos, considerar apenas um
deles.
Aten��o: Neste exerc�cio, al�m de utilizar a fun��o GerarVetorInteiroComFaixa(), a fun��o
MostrarVetorInteiro() e a fun��o OrdenarVetorInteiro(), utilizar tamb�m a fun��o MostrarDivisores() e a fun��o
QtdeDivisores(), ambas criadas em exerc�cios anteriores e armazenadas em uma biblioteca chamada
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
