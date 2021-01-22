//Calcula a circunferência do círculo a partir do raio fornecido

#include<stdio.h>
float main (void)
{
    //Declação de variáveis
    float raio, circ;

    //Entrada de dados
    printf("Informe o raio do circulo em cm: ");
    scanf("%f", &raio);

    //Processamento de dados
    circ=(2*3.1415*raio);

    //Saida de dados
    printf("Circunferencia: %.2fcm",circ);

    return 0;


}

