#include <stdio.h>

int main(void)
{
    int menor,maior,num,primeiro=0;

    while(num!=0)
    {
        printf("Informe um valor: ");
        scanf("%d",&num);
        if(num!=0)
        {
            if(primeiro == 0)
            {
                maior = num;
                menor = num;
                primeiro = 1;
            }
            else
            {
                if(num > maior)
                {
                    maior = num;
                }
                else if (num < menor)
                {
                    menor = num;
                }

            }
        }

    }printf("Menor: %d e Maior:%d",menor,maior);


    return 0;
}
