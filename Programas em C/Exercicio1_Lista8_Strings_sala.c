/*Escreva um programa que calcule e escreva a quantidade de letras maiúsculas existentes em um texto de
até 100 caracteres fornecido pelo usuário.
*/

#include <stdio.h>

int main(void)
{
    char resposta,texto[100];
    int x,res;

    do
    {
        res=0;
        printf("Informe um texto de ate 100 caracteres: ");
        fflush(stdin);
        gets(texto);
        while(texto[x]!='\0')
        {
            if(texto[x]>=65 && texto[x]<=90)
            {
                res++;
            }
            x++;
        }
        printf("O texto possui %d caracteres maiusculos.\n",res);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
