#include <stdio.h>

int main(void)
{
   int num1, num2;
   int resto;

   printf("Informe o primeiro valor: ");
   scanf("%d", &num1);
   printf("Informe o segundo valor: ");
   scanf("%d", &num2);

   if(num1!=0 && num1 > num2 && num2!=0)
   {
    resto = num1 % num2;
    printf("O resto da divisao eh %d\n", resto);
   }
   else if(num2!=0 && num2 > num1 && num1!=0)
   {
    resto = num2 % num1;
    printf("O resto da divisao eh %d\n", resto);
   }
   else if(num1 == 0 || num2 == 0)
   {
    printf("Nao eh possivel realizar divisao por zero\n");
   }

    return 0;


}
