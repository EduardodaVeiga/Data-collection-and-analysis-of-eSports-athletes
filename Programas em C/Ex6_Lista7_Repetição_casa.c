/*Apresentar os n primeiros n�meros pares e divis�veis por 3 informados pelo usu�rio
(validar para que n seja diferente de 0). Se o usu�rio informar um n�mero negativo
transform�-lo em positivo (sem usar fun��es prontas) antes de utilizar. Por exemplo, se o usu�rio informar 4, o programa dever� mostrar os quatro primeiros
n�meros pares que s�o divis�veis por tr�s: 0, 6, 12 e 18.*/

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
