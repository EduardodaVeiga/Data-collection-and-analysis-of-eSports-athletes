/*Escreva um programa que conta e exibe, separadamente, a quantidade de caracteres alfabéticos e de
dígitos numéricos existentes em um texto de até 100 caracteres fornecido pelo usuário.
*/

#include <stdio.h>

int main(void)
{
    char resposta,texto[100];
    int x,carac,dig;
    do
    {
        carac=0;
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
            if((texto[x]>=65 && texto[x]<=90) || (texto[x]>=97 && texto[x]<=122))
            {
                carac++;
            }
            x++;
        }
        printf("\nA frase possui %d caracteres alfabeticos",carac);
        printf("\nA frase possui %d digitos",dig);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
