#include <stdio.h>

int main(void)
{
    int num=0;

    do
    {
        num=num+1;
        printf("%d\n",num);
    }while(num<=100);

    printf("A estrutura representada no algoritmo e o do-while\n");
    printf("O programa apresenta numeros entre 0 e 100");
    printf("\nOs problemas sao: dessa forma nao e apresentado o 0 e apresentado o 101, as modificacoes seriam imprimir num antes de aumenta-lo e usar operadores de incrementacao em vez de acumula em variavel");


    return 0;
}
