#include <stdio.h>

int main(void)
{
    int num, cont=0, i;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
        	cont++;
			break;
        }
    }

    if(cont == 0 && num > 1)
    {
        printf("Eh um numero primo\n");
    }
    else
    {
        printf("Nao eh um numero primo\n");
    }

    return 0;
}
