#include <stdio.h>

int main(void){


    int num,x=1,cont=1;
    int nLinha;
    char resposta;
    do
    {


    do
    {
        printf("Quantos multiplos de 5 quer mostrar: ");
        scanf("%d", &num);
        printf("Quantos numeros por linha deseja mostrar: ");
        scanf("%d", &nLinha);
        if(num<0)
        {
            printf("O valor deve ser maior ou igual a 0, tente novamente.\n");
        }
    }
    while(num<0);
    cont=1;
    x=1;
    do
    {
        if(x%5==0)
        {
            printf("%d\t",x);
            cont++;
            if (x/5 % nLinha == 0)
            {
              printf("\n");
            }

        }
        x++;
    }
    while(cont<=num);
    printf("\nDeseja repetir o programa (S/N): ");
    fflush(stdin);
    scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');


    return 0;
}
