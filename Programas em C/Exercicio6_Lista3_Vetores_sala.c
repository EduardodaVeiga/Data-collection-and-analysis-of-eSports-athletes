/*Na biblioteca "vetores.h" criar uma função com o protótipo void
GerarVetorCharAlfanumerico(char vetor[], int tam) que gera um vetor
randômico de caracteres alfanuméricos (números, letras e símbolos especiais, exceto caracteres de controle).
A instrução para gerar randomicamente caracteres alfanuméricos é:
vetor[i] = rand() % 223 + 33;
Explicando: A função rand() % 223 gera um número aleatório entre 0 e 222, que somado com 33 equivale a
um valor entre 33 a 255, que equivale aos caracteres alfanuméricos da tabela ASCII.
Usando essa função:
a) Gerar randomicamente um vetor com 200 caracteres alfanuméricos (números, letras e símbolos especiais,
exceto caracteres de controle).
b) Mostrar o vetor gerado em colunas com 12 caracteres por linha separados por um espaço.
c) Percorrer o vetor e contar quantos caracteres são alfabéticos maiúsculos, quantos são alfabéticos
minúsculos e quantos são números. Armazenar essas quantidades em um vetor. Esse vetor possui tamanho
3 e cada índice armazena a quantidade de um desses tipos. É indispensável ir armazenando as quantidades
à medida que o vetor é percorrido (vet[0]=vet[0]+1), portanto, é necessário inicializar com zero o
vetor das quantidades antes de utilizá-lo.
d) Mostrar o vetor com as quantidades.
*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta,vetor[200];
    int vetorb[3],x;

    do
    {
        vetorb[0]=0;
        vetorb[1]=0;
        vetorb[2]=0;
        GerarVetorCharAlfanumerico(vetor,200);
        printf("\n---VETOR ALFANUMERICO---\n");
        MostrarVetorChar(vetor,200,12);
        for(x=0;x<200;x++)
        {
            if(vetor[x]>=65 && vetor[x]<=90)
            {
                vetorb[0]=vetorb[0]+1;
            }
            else if(vetor[x]>=97 && vetor[x]<=122)
            {
                vetorb[1]=vetorb[1]+1;
            }
            else if(vetor[x]>=48 && vetor[x<=57])
            {
                vetorb[2]=vetorb[2]+1;
            }
        }
        printf("\nCaracteres alfabeticos maiusculos: %d",vetorb[0]);
        printf("\nCaracteres alfabeticos minusculos: %d",vetorb[1]);
        printf("\nCaracteres numericos: %d",vetorb[2]);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
