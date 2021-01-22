/*7) Use a função criada no exercício anterior para mostrar todos os números felizes existentes no intervalo de
1 até 500.*/

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
