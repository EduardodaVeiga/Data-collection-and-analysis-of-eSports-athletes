#include <stdio.h>
#include <math.h>

int main(void)
{
    float n1, n2;

    printf("Informe um valor float: ");
    scanf("%f", &n1);
    printf("Informe outro valor float: ");
    scanf("%f", &n2);
    printf("%f / %f = %d\n",n1,n2, (int)n1/(int)n2);
    printf("%f + %f = %d",n1,n2,(int)(ceil(n1+n2)));

}
