#include <stdio.h>
#include <math.h>

int main (void)
{
    float altesc,altdes,degr;

    //Entrada de dados
    printf("Informe qual a altura de um degrau da escada em cm: ");
    scanf("%f", &altesc);
    printf("Informe qual a altura que deseja alcan%car subindo a escada, em cm: ",135);
    scanf("%f", &altdes);

    //Processamento de dados
    degr=ceil(altdes/altesc);

    //Saida de dados
    printf("Voc%c ter%c que subir %.0f degraus para alcan%car %.0f centimetros;",136,160,degr,135,altdes);

    return 0;
}
