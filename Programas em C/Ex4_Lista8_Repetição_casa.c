/*Ler dois n�meros que representam, respectivamente, o limite inferior e superior de um
intervalo. Validar para que o limite superior seja maior que o limite inferior. Em rela��o a
esse intervalo:
a) Mostrar os n�meros pares em colunas (n n�meros por linha, separados por tabula��o). n � um valor informado pelo usu�rio e deve ser validado para se obter uma entrada maior
que zero. b) Calcular e mostrar a m�dia dos n�meros �mpares. Validar para que n�o seja realizada
uma divis�o por zero. Aten��o: Antes de fazer a soma dos n�meros, converter os
negativos para positivos (sem fazer uso da fun��o abs()).*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int liminf, limsup,somaimpar,contimpar,cont, num,y;

    do
    {
        cont=-1;
        somaimpar=0;
        contimpar=0;
        printf("Informe um valor para o limite inferior: ");
        scanf("%d", &liminf);
        do
        {
            printf("Informe um valor para o limite superior: ");
            scanf("%d", &limsup);
            if(limsup<=liminf)
            {
                printf("Valor invalido\n");
            }
        }while(limsup<=liminf);
        do
        {
            printf("Quantos numeros por coluna quer mostrar: ");
            scanf("%d", &num);
            if(num<=0)
            {
                printf("Valor invalido\n");
            }
        }while(num<=0);
        for(y=liminf;y<=limsup;y++)
        {
            if(y%2==0)
            {
                printf("%d\t",y);
                cont++;
            }
            if(cont%num==0)
            {
                printf("\n");
            }
            if(y%2!=0)
            {
                somaimpar=somaimpar+y;
                contimpar++;
                if(y<0)
                {
                    somaimpar=somaimpar+2*(y*-1);
                }
            }
        }
        printf("Media dos impares: %.2f",(float)somaimpar/cont);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
