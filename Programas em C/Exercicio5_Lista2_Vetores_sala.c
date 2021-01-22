/*5) Gerar vetores A e B, sendo A com n elementos aleatórios entre 1 e 20 e B com n elementos aleatórios
entre 1 e 15. O usuário informa a quantidade de elementos dos vetores, ou seja, o seu tamanho. Validar para
que seja informado um valor positivo para a quantidade de elementos. Mostrar os elementos dos vetores A e
B. Construir um vetor C, em que cada elemento de C será 1 quando o elemento de A for maior que o
respectivo elemento em B; será 0 quando o elemento de A for igual ao respectivo elemento em B; e será -1
quando o elemento de A for menor que o respectivo elemento em B. Mostrar os elementos do vetor C.
*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int tama,tamb;

    do
    {
        printf("Informe o tamanho do vetor A: ");
        scanf("%d", &tama);
        int vetora[tama];
        printf("Informe o tamanho do vetor B: ");
        scanf("%d", &tamb);
        int vetorb[tamb];
        printf("---VETOR A---\n");
        geravetoraleatorio(vetora,tama,20);
        mostrarvetoraleatorio(vetora,tama);
        printf("\n---VETOR B---\n");
        geravetoraleatorio(vetorb,tamb,15);
        mostrarvetoraleatorio(vetorb,tamb);
        printf("\n---VETOR C---\n");
        vetorconfere(vetora,tama,vetorb,tamb);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
