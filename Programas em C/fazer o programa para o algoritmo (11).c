#include <stdio.h>

int main(void)
{
    int cont,num;

    printf("Informe um valor: ");
    scanf("%d", &num);
    cont=0;
    while(cont<=10)
    {
        printf("%d * %d = %d\n",cont,num,cont*num);
        cont++;
    }

    printf("A estrutura representada e o while");
    printf("\nO programa apresenta a tabuada do numero informado");


    return 0;
}
