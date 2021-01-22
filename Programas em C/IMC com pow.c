#include <stdio.h>
#include <math.h>

int main (void)
{
   float peso,alt,imc;

   //Entrada de dados
   printf("Informe seu peso em kilogramas: ");
   scanf("%f", &peso);
   printf("Informe sua altura em metros: ");
   scanf("%f", &alt);

   //Processamento de dados
   imc=peso/pow(alt,2);

   //Saida de dados
   printf("Seu Indice de Massa Corporea %c %.2f",130,imc);

   return 0;

}
