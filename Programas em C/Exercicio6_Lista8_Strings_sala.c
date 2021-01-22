/* Fazer uma função que verifica se uma substring pertence a uma string.*/

#include <stdio.h>
int main(void)
{
    char resposta,texto[100],sub[100];
    int x,z,i;

    do
    {
        x=0;
        z=0;
        i=0;
        printf("Informe uma string: ");
        fflush(stdin);
        gets(texto);
        printf("Informe uma substring: ");
        fflush(stdin);
        gets(sub);
        while(texto[x]!='\0')
        {
            if(texto[x]!=sub[z])
            {
                x++;
            }
            else if(texto[x]==sub[z])
            {
                while(sub[z]!='\0')
                {
                    if(texto[x]==sub[z])
                    {
                        x++;
                        z++;
                        i++;
                    }
                    else
                    {
                        i=0;
                        break;
                    }
                }
            }
        }
        if(i!=0)
            printf("\nA substring: \"%s\" pode ser encontrada na string: \"%s\"",sub,texto);
        else
            printf("\nA substring \"%s\" nao pode ser encontrada na string \"%s\"",sub,texto);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}

