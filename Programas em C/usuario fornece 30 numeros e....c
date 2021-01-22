#include <Stdio.h>

int main(void)
{
    float x,soma10=0,soma20=0,soma30=0;
    int contador=1;

    do
    {
        printf("Informe o valor: ");
        scanf("%f", &x);
        soma10=soma10+x;
        contador ++;
    }while(contador<=10);
    do
    {
        printf("Informe o valor: ");
        scanf("%f", &x);
        soma20=soma20+x;
        contador ++;
    }
    while(contador>10 && contador<=20);
    do
    {
        printf("Informe o valor: ");
        scanf("%f", &x);
        soma30=soma30+x;
        contador ++;
    }
    while(contador>20 && contador<=30);

    printf("Soma dos 10 primeiros: %.1f\n",soma10);
    printf("Soma do 11 ao 20: %.1f\n",soma20);
    printf("Soma do 21 ao 30: %.1f\n",soma30);
    printf("Soma de todos os numeros: %.1f\n",soma10+soma20+soma30);

    return 0;


}
