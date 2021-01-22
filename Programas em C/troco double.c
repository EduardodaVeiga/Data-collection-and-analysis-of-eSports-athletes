#include <stdio.h>

int main(void)
{
    double troco;
    printf("Informe o valor do troco: ");
    scanf("%lf", &troco);
    printf("O valor do troco eh: %d e %.0lf",(int)troco, (troco-(int)troco)*100);

    return 0;
}
