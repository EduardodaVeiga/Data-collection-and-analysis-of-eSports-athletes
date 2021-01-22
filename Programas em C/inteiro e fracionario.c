#include <stdio.h>
#include <math.h>

double main (void)
{
    double n,n2;float n1;

    //Entrada de dados
    printf("Informe o sal%crio: R$ ",160);
    scanf("%lf", &n);

    //Processamento de dados
    n1=(int)n;
    n2=(n-n1)*100;

    printf("Reais: %.0f\n",n1);
    printf("Centavos: %.0f",n2);

    return 0;

}

