#include <stdio.h>

int main(void)
{
    int x,nm,soma,produto;
    float media;

    printf("Informe um numero maior que 2: ");
    scanf("%d", &nm);
    printf("Imprime todos os pares entre 2 e o numero lido:\n");

    x=2;
    do
    {
        if(x%2==0)
        {
        printf("x=%d\n",x);
        }
    x++;
    }
    while(x<=nm);

    printf("Imprime a soma dos pares:\n");
    x=0;
    soma=0;
    do
    {
        if(x%2==0)
        {
            soma=soma+x;

        }
        x++;
    }while(x<=nm);
    printf("Soma:%d\n",soma);

    printf("Imprime o produto dos divisiveis por 9:\n");

    produto=1;
    for(x=1;x<=nm;x++)
    {
        if(x%9==0)
        {
            produto=produto*x;
        }
    }
        printf("Produto: %d\n",produto);
        printf("Media de todos os numeros do intervalo:\n");
        media=0;

    for(x=2;x<=nm;x++)
    {
        media=media+x;
    }
    printf("Media: %.2f",media/nm);

    return 0;

}
