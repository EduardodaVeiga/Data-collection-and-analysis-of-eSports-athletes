#include <stdio.h>

int main(void)
{
    int i, s;
    s=1;

    for(i=0;i<5;i++)
    {
        s=s*i;
    }
    printf("Produto: %d\n",s);
    printf("O s foi iniciado em 1 pois ele sera utilizado para obtencao de um produto, caso fosse iniciado em 0 tornaria todos os resultados = 0\n");
    printf("O problema e que o i esta sendo iniciado em 0 tornando o todos os resultados 0, ja que ha a obtancao de um produto");
    printf("A solucao seria iniciar o i em 1 e nao em 0");

    return 0;
}
