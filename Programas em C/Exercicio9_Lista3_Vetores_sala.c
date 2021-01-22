/*) Uma locadora de v�deos armazena em um vetor A de 300 posi��es a quantidade de filmes retirados por
seus clientes durante o ano. A locadora est� fazendo uma promo��o e para cada 10 filmes retirados, o cliente
tem direito a uma loca��o gr�tis. Fa�a um programa que crie um vetor B contendo a quantidade de loca��es
gratuitas a que cada cliente tem direito. Declare ambos os vetores com valores inteiros.
*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int vetor[300],vetorb[300],x;

    do
    {
        geravetorinteirocomlimite(vetor,300,100,0);
        printf("\n---VETOR A---\n");
        mostrarvetoraleatorio(vetor,300);
        printf("\n---VETOR B---\n");
        for(x=0;x<300;x++)
        {
            vetorb[x]=vetor[x]/10;
        }
        mostrarvetoraleatorio(vetorb,300);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
