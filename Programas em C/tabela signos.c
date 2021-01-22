#include <Stdio.h>

int main(void)
{
    int dia ,mes;

    printf("Informe o dia de nascimento: ");
    scanf("%d", &dia);
    printf("Informe o mes de nascimento: ");
    scanf("%d", &mes);

    if((mes==12 && dia>=22 && dia<=31)||(mes==1 && dia>=1 && dia <=20))
    {
        printf("Capricornio");
    }
    else if((mes==1 && dia>=21 && dia<=31)||(mes==2 && dia>=1 && dia<=19))
    {
        printf("Aquario");
    }
    else if((mes==2 && dia>=20 && dia<=31)||(mes==3 && dia>=1 && dia<=20))
    {
        printf("Peixes");
    }
    else if((mes==3 && dia>=21 && dia<=31)||(mes==4 && dia>=1 && dia<=20))
    {
        printf("Aries");
    }
    else if((mes==4 && dia>=21 && dia<=31)||(mes==5 && dia>=1 && dia<=20))
    {
        printf("Touro");
    }
    else if((mes==5 && dia>=21 && dia<=31)||(mes==6 && dia>=1 && dia<=20))
    {
        printf("Gemeos");
    }
    else if((mes==6 && dia>=21 && dia<=31)||(mes==7 && dia>=1 && dia<=21))
    {
        printf("Cancer");
    }
    else if((mes==7 && dia>=22 && dia<=31)||(mes==8 && dia>=1 && dia<=22))
    {
        printf("Leao");
    }
    else if((mes==8 && dia>=23 && dia<=31)||(mes==9 && dia>=1 && dia<=22))
    {
        printf("Virgem");
    }
    else if((mes==9 && dia>=23 && dia<=31)||(mes==10 && dia>=1 && dia<=22))
    {
        printf("Libra");
    }
    else if((mes==10 && dia>=23 && dia<=31)||(mes==11 && dia>=1 && dia<=21))
    {
        printf("Escorpiao");
    }
    else if((mes==11 && dia>=22 && dia<=31)||(mes==12 && dia>=1 && dia<=21))
    {
        printf("Sagitario");
    }
    else printf("Data invalida");

    return 0;

}

