//Calcula média ponderada de notas com peso 1, 2 e 3.

#include <stdio.h>

float main(void)
{
    //Declaração de variáveis
    float nt1, nt2, nt3, media;

    //Entrada de dados
    printf("Informe sua nota de peso 3: ");
    scanf("%f", &nt1);
    printf("Informe sua nota de peso 2: ");
    scanf("%f", &nt2);
    printf("Informe sua nota de peso 1: ");
    scanf("%f", &nt3);

    //Processamento de dados
    media=((nt1*3)+(nt2*2)+nt3)/6;

    //Saída de dados
    printf("Sua media foi: %.2f",media);

}
