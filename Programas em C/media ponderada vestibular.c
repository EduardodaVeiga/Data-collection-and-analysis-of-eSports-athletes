#include <stdio.h>

int main(void)
{
    int exatas, humanas, cg;
    float mp;

    printf("Informe sua pontuacao em exatas: ");
    scanf("%d", &exatas);
    printf("Informe sua pontuacao em humanas: ");
    scanf("%d", &humanas);
    printf("Informe sua pontuacao em conhecimento geral: ");
    scanf("%d", &cg);

    mp= ((exatas * 3) + (humanas * 2) + cg) / 6;

    if(mp<=250)
    {
        printf("Rendimento insuficiente");
    }
    else if(mp>250 && mp<=500)
    {
        printf("Rendimento baixo");
    }
    else if(mp>500 && mp<=700)
    {
        printf("Rendimento regular");
    }
    else if(mp>700 && mp<=900)
    {
        printf("Rendimento bom");
    }
    else if(mp>900)
    {
        printf("Rendimento excelente");
    }

    return 0;
}
