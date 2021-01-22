/*) Sabendo-se que na matemática os números primos começam a partir do 2, solicite ao
usuário que forneça o valor do limite superior de um intervalo (validar para que seja maior
que 2). O programa deverá fornecer todos os números primos presentes no intervalo. Por
exemplo, se o usuário informar 10, o programa deverá fornecer todos os números primos
entre 2 e 10, que são 2, 3, 5 e 7.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int limsup,y=0,x=1,cont=0,num=0;

    do
    {
        do
        {
            printf("Informe o valor para o limite superior: ");
            scanf("%d", &limsup);
            if(limsup<=2)
            {
                printf("Valor invalido\n");
            }
        }while(limsup<=2);
        num=2;
        cont=0;
        do
        {
            for(x=2;x<num;x++)
            {
                if(num%x==0)
                {
                    cont++;
                }
            }
            if(cont==0 && num>1)
            {
                printf("%d\t",num);
            }
            num++;
            cont=0;
        }while(num<=limsup);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
