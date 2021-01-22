#include <stdio.h>

int main(void)
{
    char x='a';
    int cont=0,cont2=0;

    do
    {
        printf("Informe um caractere(0 para encerrar): ");
        fflush(stdin);
        scanf("%c", &x);
        if(x!='0')
        {
            if(x==97 || x==101 || x==105 || x==111 || x==117)
            {
                cont++;
            }
            cont2++;
        }
    }while(x!='0');
    printf("Total de vogais minuscula(s): %d\n",cont);
    printf("Total de caracteres: %d\n",cont2);

    return 0;
}
