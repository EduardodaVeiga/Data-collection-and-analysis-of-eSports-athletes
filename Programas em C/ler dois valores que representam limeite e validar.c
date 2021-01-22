#include <stdio.h>

int main(void)
{
    int limiteinf=0,limitesup=0,cont=0,soma=0,x;
    float media;


    do
    {
        printf("Informe um valor para o limite inferior: ");
        scanf("%d", &limiteinf);
        printf("Informe um valor para o limite superior: ");
        scanf("%d", &limitesup);

        if(limiteinf==limitesup || limiteinf<=0 || limitesup<=0 )
        {
            printf("Valores invalidos, por favor informe valores de limite diferentes de si e maiores que 0\n");
        }

    }while(limiteinf==limitesup || limiteinf<=0 || limitesup<=0);
    if(limiteinf<limitesup)
    {
        x=limiteinf;

        do
        {
            printf("x = %d\t",x);
            if(x%11==0 && x%7==0)
            {
                cont++;
                soma=soma+x;
            }
            x++;
        }while(x<=limitesup);
    }
    if(limiteinf>limitesup)
    {

        do
        {
            printf("x = %d\t",limitesup);
            if(limiteinf%11==0 && limiteinf%7==0)
            {
                cont++;
                soma=soma+limitesup;
            }
            limitesup++;
        }while(limiteinf>=limitesup);
    }

    media=(float)soma/cont;
    if(cont>0)
    {
        printf("\nMedia dos divisiveis por 11 e por 7: %.2f",media);
    }
    else if(cont<=0)
    {
        printf("\nNao ha numeros divisiveis por 11 e por 7 neste intervalo");
    }

    return 0;

}
