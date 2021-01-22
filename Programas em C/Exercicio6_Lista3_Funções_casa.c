/*6) Para saber se um n�mero � feliz, voc� deve obter o quadrado de cada d�gito deste n�mero, em seguida
voc� faz a soma desses resultados. A seguir o mesmo procedimento deve ser feito com o valor resultante
desta soma. Se ao repetir o procedimento diversas vezes obtivermos o valor 1, o n�mero inicial � considerado
feliz.
Tomamos o 7, que � um n�mero feliz:*/

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
