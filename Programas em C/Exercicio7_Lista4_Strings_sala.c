/* Ler um texto e imprimir o texto na vertical com uma letra por linha.*/

#include <stdio.h>

int main(void)
{
    char resposta, texto[150];
    int x;

    do
    {
        x=0;
        printf("Informe um texto de ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);
        while(texto[x]!='\0')
        {
            printf("%c\n",texto[x]);
            x++;
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
