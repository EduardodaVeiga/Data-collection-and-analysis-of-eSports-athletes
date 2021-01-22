#include <stdio.h>

int main(void)
{
    int cont=0;
    char x;

    do
    {
        printf("Informe um caractere: ");
        fflush(stdin);
        scanf("%c",&x);
        if(x!='0')
        {
            if(x=='A')
            {
                cont++;
            }
        }
    }while(x!='0');

    printf("Foram informadas %d vezes o caractere A",cont);

    return 0;
}
