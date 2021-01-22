/* Escreva um programa que informe se em um texto fornecido pelo usuário existem caracteres numéricos*/

#include <stdio.h>

int main(void)
{
    char resposta,texto[100];
    int x,dig;
    do
    {
        dig=0;
        x=0;
        printf("Informe um texto de ate 100 caracteres: ");
        fflush(stdin);
        gets(texto);
        while(texto[x]!='\0')
        {
            if(texto[x]>=48 && texto[x]<=57)
            {
                dig++;
            }
            x++;
        }
        if(dig>0)
        {
            printf("O texto possui digitos numericos");
        }
        else printf(" O texto nao possui digitos numericos");
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
