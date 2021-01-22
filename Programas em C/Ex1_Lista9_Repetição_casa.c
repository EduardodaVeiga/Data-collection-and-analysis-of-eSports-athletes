/*Elaborar um programa para ler valores inteiros (incluindo valores positivos e negativos)
at� que o valor zero seja informado. O valor zero n�o dever� ser considerado. O
programa deve informar o maior e o menor entre todos os valores lidos e apresentar a
m�dia dos valores negativos informados. Obs.: Verificar para que n�o sejam realizadas
divis�es por zero.*/

#include <stdio.h>

int main(void)
{
    int num,cont;
    char resposta;
    float antmaior,antmenor,menor,maior,soma;

    do
    {
        antmenor=2147483647;
        antmaior=(-2147483648);
        maior=0;
        menor=0;
        cont=0;
        soma=0;
        do
        {
            printf("Informe um valor inteiro: ");
            scanf("%d",&num);
            if(num!=0)
            {
                if(num<antmenor)
                {
                    menor=num;
                    antmenor=num;
                }
                if(num>antmaior)
                {
                    maior=num;
                    antmaior=num;
                }
                if(num<0)
                {
                    num=num*(-1);
                    soma=soma+num;
                    cont++;
                }
            }
        }while(num!=0);
        printf("Menor: %.0f  e Maior: %.0f\n",menor,maior);
        if(cont>0)
        {
            printf("Media dos negativos: %.2f",soma/cont);
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
