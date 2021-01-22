#include <stdio.h>

double main(void)
{
    double n,pi,pd;

    printf("Informe um valor double: ");
    scanf("%lf", &n);
    if(n<100){
        pd=n-(int)n;
        pi=(int)n;
        printf("Parte inteira do n%cmero: %.2f\n",163,pi);
        printf("Parte decimal do n%cmero: %f",163,pd);

    }else{
        printf("O resto da divisao desse n%cmero por 3 %c: %d",163,130,((int)n%(int)3));

    }

    return 0;

}
