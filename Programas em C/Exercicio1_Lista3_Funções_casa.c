/*1) Fazer fun��es para:
a) Mostrar os m�ltiplos de y entre 1 (se for o caso) e x, sendo x o valor at� o qual os m�ltiplos de y devem ser
mostrados. A fun��o recebe por par�metro o n�mero e valor que representa "m�ltiplo de". Por exemplo:
par�metros 10 (como x) e 2 (como y) significa os m�ltiplos de 2 entre 1 e 10.
b) Somar os m�ltiplos de y entre 1 (se for o caso) e x, sendo x o valor at� o qual os m�ltiplos devem ser
somados. Por exemplo: par�metros 10 (como x) e 2 (como y) significa somar os m�ltiplos de 2 entre 1 e 10. O
resultado da soma deve ser retornado da fun��o.
Fazer um programa que:
a) Leia dois valores sendo que o primeiro representa o limite final do intervalo (o limite inicial � 1) e o segundo
valor representa �m�ltiplo de�.
b) Leia tr�s valores, sendo que o primeiro e o segundo representam, respectivamente, o limite inicial e final de
um intervalo e o terceiro valor representa �m�ltiplo de�. Utilize as duas fun��es, criadas anteriormente, para
apresentar a sa�da da forma como apresentado a seguir. Nesse exemplo os valores para os limites inferior e
superior s�o 10 e 13 e o �m�ltiplo de� � 2.*/

#include <stdio.h>
#include "mostrar'soma multiplo de x entre 1 e n.h"

int main(void)
{
    char resposta;
    int x,opcao,limsup,liminf,mult;

    do
    {
        printf("1-Mostra e soma os multiplos de um numero\n2-Mostra e soma os multiplos dos numeros de um intervalo\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            printf("Informe um numero: ");
            scanf("%d", &limsup);
            printf("Mostrar os multiplos de: ");
            scanf("%d", &mult);
            printf("%d = ",limsup);
            mostrarmultiplo(mult,limsup);
            printf(" => Soma: %d",mostrarsomamultiplo(mult,limsup));
        break;
        case 2:
            printf("Informe um valor para o limite inferior: ");
            scanf("%d", &liminf);
            printf("Informe um valor para o limite superior: ");
            scanf("%d", &limsup);
            printf("Mostrar multiplos de: ");
            scanf("%d", &mult);
            for(x=liminf;x<=limsup;x++)
            {
                printf("%d = ",x);
                mostrarmultiplo(mult,x);
                printf(" => Soma: %d\n",mostrarsomamultiplo(mult,x));
            }
        break;
        default:
            printf("Opcao invalida\n");
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
