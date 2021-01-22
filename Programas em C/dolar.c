#include <stdio.h>

int main(void)
{
float dolar, real;

printf("Informe o valor do dolar atual: ");
scanf("%f", &dolar);
printf("Informe o valor em real: ");
scanf("%f", &real);
printf("R$ %.2f equivale  a U$%.2f",real,real/dolar);

}


