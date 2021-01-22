#include <stdio.h>

int main(void)
{
    double n1;
    printf("Informe um valor double: ");
    scanf("%lf", &n1);
    printf("Numero informado: %lf\n",n1);
    printf("Parte inteira: %d\n",(int)n1);
    printf("Parte decimal: %lf\n",n1-(int)n1);
    printf("Parte decimal como inteiro de tres digitos: %d\n",(int)(1000*(n1-(int)n1)));
    printf("Centena(s): %d\n",(int)((int)n1/100));
    printf("Dezena(s): %d\n",((int)(int)n1/10)%10);
    printf("Unidade(s): %d\n",((int)n1%10));

    return 0;


}
