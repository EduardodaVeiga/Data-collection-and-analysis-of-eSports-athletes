#include <stdio.h>

int main(void)
{
    float peso;

    printf("Informe seu peso em Kg: ");
    scanf("%f", &peso);
    printf("Seu peso em gramas: %.1f\n",peso*1000);
    printf("Seu peso em gramas se engordar 12%%: %.1f\n",(peso*1000)+((peso*1000)*0.12));
    printf("Seu peso em quilogramas se engordar 12%%: %.1f\n",peso+(peso*0.12));

    return 0;
}
