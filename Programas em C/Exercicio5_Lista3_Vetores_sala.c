/*) Na biblioteca "vetores.h" criar fun��o:
a) Com o prot�tipo void GerarVetorCharMinuscula(char vetor[], int tam) para
gerar um vetor rand�mico de caracteres alfab�ticos min�sculos. A instru��o para gerar randomicamente
caracteres alfab�ticos min�sculos �:
vetor[i] = rand() % 26 + 97;
Explicando: A fun��o rand() % 26 gera um n�mero aleat�rio entre 0 e 25, que somado com 97 equivale a um
valor entre 97 a 122, que se refere aos caracteres alfab�ticos min�sculos da tabela ASCII.
b) Com o prot�tipo void GerarVetorCharMaiuscula(char vetor[], int tam) para
gerar um vetor rand�mico de caracteres alfab�ticos mai�sculos. A instru��o para gerar randomicamente
caracteres alfab�ticos mai�sculos �:
vetor[i] = rand() % 26 + 65;
Explicando: A fun��o rand() % 26 gera um n�mero aleat�rio entre 0 e 25, que somado com 65 equivale a um
valor entre 65 a 90, que se refere aos caracteres alfab�ticos mai�sculos da tabela ASCII.
c) Com o prot�tipo void MostrarVetorChar(char vetor[], int tam, int n) para
mostrar o vetor gerado em colunas com n caracteres por linha, separados por um espa�o.
Usando essas fun��es:
a) Gerar randomicamente um vetor com 100 caracteres alfab�ticos min�sculos.
b) Gerar randomicamente um vetor com 200 caracteres alfab�ticos mai�sculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha, sendo cada caractere
separado por um espa�o.*/

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
