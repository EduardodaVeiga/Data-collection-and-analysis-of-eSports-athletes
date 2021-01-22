#include <stdio.h>

int main(void)
{
    int contmi=0,contmai=0,contnao=0;
    char x;

    do
    {
        printf("Informe um caractere: ");
        fflush(stdin);
        scanf("%c", &x);
        if(x!='0')
        {
            if(x>=65 && x<=90)
            {
                contmai++;
            }
            else if(x>=97 && x<=122)
            {
                contmi++;
            }
            else contnao++;
        }
    }while(x!='0');

    printf("Foram informadas %d letras maiusculas",contmai);
    printf("\nForam informadas %d letras minusculas",contmi);
    printf("\nForam informados %d caracteres que nao sao letras",contnao);

    return 0;
}
