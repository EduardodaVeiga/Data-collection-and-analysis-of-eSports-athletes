/*) Na biblioteca "vetores.h" criar função:
a) Com o protótipo void GerarVetorCharMinuscula(char vetor[], int tam) para
gerar um vetor randômico de caracteres alfabéticos minúsculos. A instrução para gerar randomicamente
caracteres alfabéticos minúsculos é:
vetor[i] = rand() % 26 + 97;
Explicando: A função rand() % 26 gera um número aleatório entre 0 e 25, que somado com 97 equivale a um
valor entre 97 a 122, que se refere aos caracteres alfabéticos minúsculos da tabela ASCII.
b) Com o protótipo void GerarVetorCharMaiuscula(char vetor[], int tam) para
gerar um vetor randômico de caracteres alfabéticos maiúsculos. A instrução para gerar randomicamente
caracteres alfabéticos maiúsculos é:
vetor[i] = rand() % 26 + 65;
Explicando: A função rand() % 26 gera um número aleatório entre 0 e 25, que somado com 65 equivale a um
valor entre 65 a 90, que se refere aos caracteres alfabéticos maiúsculos da tabela ASCII.
c) Com o protótipo void MostrarVetorChar(char vetor[], int tam, int n) para
mostrar o vetor gerado em colunas com n caracteres por linha, separados por um espaço.
Usando essas funções:
a) Gerar randomicamente um vetor com 100 caracteres alfabéticos minúsculos.
b) Gerar randomicamente um vetor com 200 caracteres alfabéticos maiúsculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha, sendo cada caractere
separado por um espaço.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resposta,vetor[100],vetorb[200];
    int n;
    do
    {
        printf("Quantos por linha: ");
        scanf("%d", &n);
        GerarVetorCharMinuscula(vetor,100);
        GerarVetorCharMaiuscula(vetorb,200);
        printf("\n---MINUSCULAS---\n");
        MostrarVetorChar(vetor,100,n);
        printf("\n---MAIUSCULAS---\n");
        MostrarVetorChar(vetorb,200,n);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
