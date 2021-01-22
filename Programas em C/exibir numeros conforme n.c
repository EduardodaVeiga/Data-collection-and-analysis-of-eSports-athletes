#include <stdio.h>

int main(void)
{
    int num=2,quant,cont=0,i=0,cont2=1;
    char resposta;

    do
    {
        printf("Quantos primos quer mostrar: ");
        scanf("%d", &quant);
        cont2=1;
        num=2;
        do
        {
            i=1;
            cont=0;
            for(i=1; i<=num; i++)
            {
                if(num%i == 0)
                {
                    cont++;
                }
            }
            if(cont==2)
            {
                printf("%d\t",num);
                cont2++;
            }
            num++;
        }while(cont2<=quant);
        printf("\nDeseja repetir o programa (S/N): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
