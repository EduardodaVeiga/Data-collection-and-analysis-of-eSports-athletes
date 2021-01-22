#include <stdio.h>

int main(void){


    int num,x=1;
    int nLinha;
    do
    {
        printf("Quantos pares quer mostrar: ");
        scanf("%d", &num);
        printf("Quantos numeros por linha deseja mostrar: ");
        scanf("%d", &nLinha);
        if(num<0)
        {
            printf("O valor deve ser maior ou igual a 0, tente novamente.\n");
        }
    }
    while(num<0);

    do
    {
        if(x%2==0)
        {
            printf("%d\t",x);
            if (x/2 % nLinha == 0)
            {
              printf("\n");
            }

        }
        x++;
    }
    while(x<=(2*num));


    return 0;
}
