/*6) Para saber se um número é feliz, você deve obter o quadrado de cada dígito deste número, em seguida
você faz a soma desses resultados. A seguir o mesmo procedimento deve ser feito com o valor resultante
desta soma. Se ao repetir o procedimento diversas vezes obtivermos o valor 1, o número inicial é considerado
feliz.
Tomamos o 7, que é um número feliz:*/

#include <stdio.h>
#include "numerofeliz.h"

int main(void)
{
    int num;
    char resposta;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &num);
        printf("%d",numerofeliz(num));
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
