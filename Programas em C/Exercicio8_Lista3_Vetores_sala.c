/*8) Gerar um vetor A de inteiros com 100 elementos aleatórios entre 0 e 10. Criar um vetor B float que conterá
os valores do vetor A divididos pelo maior valor contido no vetor A. Mostrar os dois vetores.
*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int x,maior,vetor[100];
    float vetorb[100];

    do
    {
        geravetorinteirocomlimite(vetor,100,10,0);
        printf("\n---VETOR A---\n");
        mostrarvetoraleatorio(vetor,100);
        maior=vetor[0];
        for(x=0;x<100;x++)
        {
            if(vetor[x]>maior)
            {
                maior=vetor[x];
            }
        }
        printf("\nMaior: %d",maior);
        printf("\n---VETOR B---\n");
        for(x=0;x<100;x++)
        {
            vetorb[x]=(float)vetor[x]/maior;
        }
        MostrarVetorFloat(vetorb,100);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
