#include <stdio.h>

float main (void)
{
    //Declaração de variaveis
    float vol,raio,alt;

    //Entrada de dados
    printf("Os dados a seguir devem ser fornecidos em mesmas escalas de medidas(Exemplo:200cm e 50cm ou 2m e 0.5m)\n\n");
    printf("Informe a altura do cilindro: ");
    scanf("%f", &alt);
    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    //Processamento de dados
    vol=(3.1415)*(raio*raio)*(alt);

    //Saída de dados
    printf("O volume do cilindro eh: %.2f cm3 se voce forneceu as medidas em centimetros\n\n",vol);
    printf("Caso fornecera as medidas em metros o volume eh: %.2f m3",vol);





    return 0;
}
