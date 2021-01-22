/*Ler um texto e armazenar a primeira palavra desse texto em outra string. Mostrar a string armazenada.
Observação: Colocar ‘\0’ na nova string após o último caractere útil para indicar final da mesma.
*/

#include <stdio.h>

int main(void)
{
    char resposta,texto[100],palavra[100];
    int x;

    do
    {
        x=0;
        printf("Informe um texto de ate 100 caracteres: ");
        fflush(stdin);
        gets(texto);
        while(texto[x]!=32)
        {
            if(texto[x]=='\0')
            {
                break;
            }
            palavra[x]=texto[x];
            x++;
        }
        palavra[x]='\0';
        x=0;
        while(palavra[x]!='\0')
        {
            printf("%c",palavra[x]);
            x++;
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
