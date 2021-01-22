#include <stdio.h>

int main(void)
{
    int data,dia,mes,ano;

    printf("Informe a data em formato ddmmaaaa: ");
    scanf("%d", &data);

    dia=data/1000000;
    mes=data%100000/10000;
    ano=data%100000%10000;

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
