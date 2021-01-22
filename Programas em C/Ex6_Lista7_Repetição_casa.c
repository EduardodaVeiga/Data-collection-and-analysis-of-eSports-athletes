/*Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário
(validar para que n seja diferente de 0). Se o usuário informar um número negativo
transformá-lo em positivo (sem usar funções prontas) antes de utilizar. Por exemplo, se o usuário informar 4, o programa deverá mostrar os quatro primeiros
números pares que são divisíveis por três: 0, 6, 12 e 18.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int x,y,cont;

    do
    {
        do
        {
            printf("Quantos pares divisiveis por 3 quer mostrar: ");
            scanf("%d", &x);
            if(x==0)
            {
                printf("Valor invalido\n");
            }
            else if(x<0)
            {
                x=x*(-1);
            }
        }while(x==0);
        y=0;
        cont=1;
        do
        {
            if(y%2==0 && y%3==0)
            {
                printf("%d\t",y);
                cont++;
            }
            y++;
        }while(cont<=x);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');


    return 0;
}
