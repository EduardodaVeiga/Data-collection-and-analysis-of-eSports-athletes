/*7) Use a fun��o criada no exerc�cio anterior para mostrar todos os n�meros felizes existentes no intervalo de
1 at� 500.*/

#include <stdio.h>
#include "numerofeliz.h"

int main(void)
{
    int n;

    printf("Numeros felizes entre 1 e 500\n");
    for(n=1;n<=500;n++)
    {
        if(numerofeliz(n)==1)
        {
            printf("%d  ",n);
        }
    }
    return 0;
}
