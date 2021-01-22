#include <stdio.h>

int main(void)
{
    float renda;

    printf("Informe sua renda anual: ");
    scanf("%f", &renda);

    if(renda<=10000)
    {
        printf("Seu imposto de renda e nulo");
    }
    else if(renda>10000 && renda<=25000)
    {
        printf("Imposto de renda =%.2fR$",renda*0.1);
    }
    else printf("Imposto de renda =%.2fR$",renda*0.25);

    return 0;
}
