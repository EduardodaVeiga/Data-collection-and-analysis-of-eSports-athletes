/*7) Em uma determinada cidade, sabe-se que, de janeiro a abril de um determinado ano (121 dias), a temperatura
ficou entre a 5° e 45°. Gerar um vetor com valores inteiros randômicos nesse intervalo para esse período de
tempo. Para isso, crie uma função na biblioteca Vetores.h chamada GerarVetorInteiroComLimite() que receba
como parâmetros: o vetor, o tamanho do vetor, o valor inicial e o valor final do limite da aleatoriedade. A partir do
vetor gerado, obtenha e mostre:
a) A menor temperatura ocorrida.
b) A maior temperatura ocorrida.
c) A temperatura média.
d) O número de dias em que a temperatura foi inferior à temperatura média*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta;
    int soma,cont,limsup,liminf,vetor[121],x;
    float media=0;
    do
    {
        soma=0;
        cont=0;
        printf("Informe a menor temperatura: ");
        scanf("%d", &liminf);
        printf("Informe a maior temperatura: ");
        scanf("%d", &limsup);
        geravetorinteirocomlimite(vetor,121,limsup,liminf);
        printf("---VETOR---\n");
        mostrarvetoraleatorio(vetor,121);
        for(x=0;x<121;x++)
        {
            soma=soma+vetor[x];
            cont++;
        }
        media=(float)soma/cont;
        printf("\nTemperatura media: %.2f",media);
        cont=0;
        for(x=0;x<121;x++)
        {
            if(vetor[x]<media)
            {
                cont++;
            }
        }
        printf("\nQuantidade dos dias em que a temperatura foi menor que a media: %d",cont);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
