/* Ler um texto e imprimir o inverso do texto.
*/

#include <stdio.h>

int main(void)
{
    char resposta,texto[150];
    int x,cont,y;
    do
    {
        x=0;
        cont=0;
        printf("Informe um texo de ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);
        while(texto[x]!='\0')
        {
            x++;
        }
        for(y=x;y>=0;y--)
        {
            printf("%c",texto[y]);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
