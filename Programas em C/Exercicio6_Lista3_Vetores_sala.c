/*Na biblioteca "vetores.h" criar uma fun��o com o prot�tipo void
GerarVetorCharAlfanumerico(char vetor[], int tam) que gera um vetor
rand�mico de caracteres alfanum�ricos (n�meros, letras e s�mbolos especiais, exceto caracteres de controle).
A instru��o para gerar randomicamente caracteres alfanum�ricos �:
vetor[i] = rand() % 223 + 33;
Explicando: A fun��o rand() % 223 gera um n�mero aleat�rio entre 0 e 222, que somado com 33 equivale a
um valor entre 33 a 255, que equivale aos caracteres alfanum�ricos da tabela ASCII.
Usando essa fun��o:
a) Gerar randomicamente um vetor com 200 caracteres alfanum�ricos (n�meros, letras e s�mbolos especiais,
exceto caracteres de controle).
b) Mostrar o vetor gerado em colunas com 12 caracteres por linha separados por um espa�o.
c) Percorrer o vetor e contar quantos caracteres s�o alfab�ticos mai�sculos, quantos s�o alfab�ticos
min�sculos e quantos s�o n�meros. Armazenar essas quantidades em um vetor. Esse vetor possui tamanho
3 e cada �ndice armazena a quantidade de um desses tipos. � indispens�vel ir armazenando as quantidades
� medida que o vetor � percorrido (vet[0]=vet[0]+1), portanto, � necess�rio inicializar com zero o
vetor das quantidades antes de utiliz�-lo.
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
