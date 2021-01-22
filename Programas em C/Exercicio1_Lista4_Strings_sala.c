/*Ler um texto com até 100 caracteres. Se o primeiro caractere for 'a' imprimir esse texto, caso contrário
contar quantos caracteres 'o' o texto possui.
*/

#include <stdio.h>

int main(void)
{
    char string[100],resposta;
    int x,cont;

    do
    {
        printf("Informe um texto com ate 100 caracteres: ");
        fflush(stdin);
        gets(string);
        x=0;
        cont=0;
        if(string[0]=='a')
        {
            printf("%s\n",string);
        }
        else
        {
            while(string[x]!= '\0')
            {
                if(string[x]=='o')
                {
                    cont++;
                }
                x++;
            }
        }
        printf("O texto possui %d caracteres 'o'",cont);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
