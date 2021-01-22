#include <stdio.h>;
#include <math.h>;

float main (void)
{
    int seg;float min,hor,dias;

    //Entrada de dados
    printf("Infome o tempo em segundos: ");
    scanf("%d", &seg);

    //Processamento de dados
    min=seg/60;
    hor=min/60;
    dias=hor/24;

    //Saída de dados
    printf("O tempo informado em minutos %c: %.1f\n",130,min);
    printf("O tempo informado em horas %c: %.1f\n",130,hor);
    printf("O tempo informado em dias %c: %.1f\n",130,dias);

    return 0;


}
