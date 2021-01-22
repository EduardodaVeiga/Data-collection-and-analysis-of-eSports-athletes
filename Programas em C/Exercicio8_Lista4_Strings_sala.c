/*Ler um texto (pode ser composto por uma ou mais palavras), copiar para um vetor somente a primeira
palavra. Mostrar a string armazenada.
Observação: Não esquecer de finalizar a string gerada (copiada).*/

#include <stdio.h>

int main(void)
{
    char resposta,texto[150],palavra[150];
    int x;

    do
    {
        x=0;
        printf("Informe um texto de ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);
        while(texto[x]!=32)
        {
            palavra[x]=texto[x];
            x++;
        }
        printf("%s",palavra);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
