#include <stdio.h>

int main(void)
{
    int dia,mes,ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    if((mes != 2)&&(mes==4||mes==6||mes==9||mes==11))
    {
        if(dia>0 && dia<=30 && ano<=2020)
        {
            printf("Data valida");
        }
    }
    else if((mes!=2)&&(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12))
    {
        if(dia>0 && dia<=31 && ano<=2020)
        {
            printf("Data valida");
        }
    }
    else if(mes==2 && dia>0 && dia<=29 && (ano%4==0 && ano%100!=0) || (ano%400==0))
    {
        printf("Data valida");

    }
    else printf("Data invalida");

    return 0;
}
