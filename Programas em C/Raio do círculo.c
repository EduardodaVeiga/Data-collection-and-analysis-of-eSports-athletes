//Calcula a circunfer�ncia do c�rculo a partir do raio fornecido

#include<stdio.h>
float main (void)
{
    //Decla��o de vari�veis
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

