/* Ler a altura de 5 pessoas, armazenar em um vetor. Validar para que seja informado um valor positivo para
a altura. Identificar e mostrar a maior altura e o índice do vetor que essa altura corresponde. Calcular a média
das alturas acima de 1,50 e mostrar essa média. Validar para que não seja realizada uma divisão por zero no
cálculo da média.
*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int x,indice,cont;
    float notas[5],total,maior;

    do
    {
        maior=0;
        indice=0;
        total=0;
        cont=0;
        for(x=0;x<5;x++)
        {
            printf("Informe a altura da pessoa %d: ",x+1);
            scanf("%f", &notas[x]);
            if(notas[x]>1.5)
            {
                total=total+notas[x];
                cont++;
            }
            if(notas[x]>maior)
            {
                maior=notas[x];
                indice=x;
            }
        }
        printf("Maior altura e %.2f e esta na posica %d do vetor\n",maior,indice);
        if(cont!=0)
        {
            printf("Media das alturas maiores que um metro e meio: %.2f",total/cont);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
