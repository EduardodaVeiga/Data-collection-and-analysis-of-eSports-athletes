#include <stdio.h>

int main(void)
{
    int res;
    float resf,xf,yf;

    printf("Informe o valor para x: ");
    scanf("%f", &xf);
    printf("Informe o valor de y: ");
    scanf("%f", &yf);

    printf("a) ((x+y)/y)*x^2=%.2f\n\n",((xf+yf)/yf)*xf*xf);
    printf("Informe o valor para x: ");
    scanf("%f", &xf);
    printf("Informe o valor de y: ");
    scanf("%f", &yf);
    printf("b) (x+y)/(x-y)=%.2f\n\n",(xf+yf)/(xf-yf));
    printf("Informe o valor para x: ");
    scanf("%f", &xf);
    printf("Informe o valor de y: ");
    scanf("%f", &yf);
    printf("c) (x^2+y^3)/2=%.2f\n\n",(xf*xf+yf*yf*yf)/2);
    printf("Informe o valor para x: ");
    scanf("%f", &xf);
    printf("Informe o valor de y: ");
    scanf("%f", &yf);
    printf("d) x^3/x^2=%.2f\n\n",(xf*xf*xf)/(xf*xf));
    printf("Informe o valor para x: ");
    scanf("%f", &xf);
    printf("Informe o valor de y: ");
    scanf("%f", &yf);
    printf("e) resto da divisao de x por y= %.2d\n\n",(int)xf%(int)yf);
    printf(    "resto da divisao de x por 3= %.2d\n\n",(int)xf%3);
    printf(    "resto da divisao de y por 5= %.2d\n\n",(int)yf%5);


    return 0;


}
