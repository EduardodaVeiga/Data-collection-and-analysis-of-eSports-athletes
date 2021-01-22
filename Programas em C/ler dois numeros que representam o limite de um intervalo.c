#include <stdio.h>

int main(void)
{
    int x,inc,limiteinicial,limitefinal;
    float div,divs;

    printf("Informe o valor do limite inicial: ");
    scanf("%d", &limiteinicial);
    printf("Informe o valor do limite final: ");
    scanf("%d", &limitefinal);
    printf("Informe o valor do incremento: ");
    scanf("%d", &inc);
    div=0;
    divs=0;

    if(limiteinicial>limitefinal)
    {
        for(x=limiteinicial;x>=limitefinal;x-=inc)
        {
            printf("x= %d\n",x);
            if(x%35==0)
            {
                div=div+x;
                divs=divs+1;
            }
        }
    printf("Media dos impares divisiveis por 35:%.2f",div/divs);
    }
    else if(limiteinicial<limitefinal)
    {
        for(x=limiteinicial;x<=limitefinal;x+=inc)
        {
            printf("x=%d\n",x);
            if(x%35==0)
            {
                div=div+x;
                divs=divs+1;
            }
        }
    printf("Media dos impares divisiveis por 35:%.2f",div/divs);
    }

    return 0;


}
