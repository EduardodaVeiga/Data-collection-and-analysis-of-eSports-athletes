/*Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50 e apresentar o
valor obtido da multiplicação sucessiva de N por 2, enquanto o produto for menor que 250
(N*2; N*2*2; N*2*2*2; etc.). O valor N deverá ser verificado quanto a sua validade. Caso o
usuário informe um valor fora da faixa, o programa deverá informar que o valor digitado
não é válido e repetir a leitura. Atenção: o produto deve ser menor que 250.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int x,y=2,soma=0;

    do
    {
        do
        {
            printf("Informe um valor entre 1 e 50: ");
            fflush(stdin);
            if(scanf("%d", &x)==0)
            {
                printf("Caractere invalido\n");
                x=0;
            }
            else if(x<1 || x>50)
            {
                printf("Valor invalido\n");
            }
        }while(x<1 || x>50);
        soma=x*2;
        do
        {
            printf("N * %d = %d\n",y,soma);
            soma=soma*2;
        }while(soma<=250);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
