/*) Num intervalo A e B informado pelo usuário, sendo que A e B devem ser números
pares maiores do que zero e B deve ser maior que A, utilize uma estrutura for para
mostrar cada um dos itens em listagens separadas. Colocar um cabeçalho/título que
identifique cada uma das listagens:
a) Os valores desse intervalo em ordem decrescente. b) Os valores pares desse intervalo, sem utilizar if, apenas a variável de inicialização, controle e incremento/decremento do for. c) Os múltiplos de 10, em ordem decrescente e sem utilizar if, apenas a variável de
inicialização, controle e incremento/decremento do for. d) Os múltiplos de 5, em ordem decrescente e sem utilizar if, apenas a variável de
inicialização, controle e incremento/decremento do for.*/

#include <stdio.h>

int main(void)
{
    char resposta;
    int liminf,limsup,cont,aux,aux2,contrario1,contrario2;

    do
    {
        do
        {
            printf("Informe o limite inferior: ");
            scanf("%d", &liminf);
            if(liminf%2!=0 || liminf<=0)
            {
                printf("Valor invalido\n");
            }
        }while(liminf%2!=0 || liminf<=0);
        do
        {
            printf("Informe o limite superior: ");
            scanf("%d", &limsup);
            if(limsup%2!=0 || limsup<liminf)
            {
                printf("Valor invalido\n");
            }
        }while(limsup%2!=0 || limsup<liminf);
        cont=0;

        printf("\t\tVALORES EM ORDEM DECRESCENTE\n");
        for(aux=limsup;aux>=liminf;aux--)
        {
            printf("\t%d",aux);
            cont++;
            if(cont%7==0)
            {
                printf("\n");
            }
        }
        cont=0;
        printf("\n\t\tVALORES PARES DO INTERVALO\n");
        for(aux=liminf;aux<=limsup;aux+=2)
        {
            printf("\t%d",aux);
            cont++;
            if(cont%7==0)
            {
                printf("\n");
            }
        }
        cont=0;
        printf("\n\t\tMULTIPLOS DE 10 em ordem decrescente\n");
        aux2=limsup-limsup%10;
        for(aux=aux2;aux>=liminf;aux-=10)
        {
            printf("\t%d",aux);
            cont++;
            if(cont%7==0)
            {
                printf("\n");
            }
        }
        cont=0;
        printf("\n\tMULTIPLOS DE 5 EM ORDEM DECRESCENTE\n");
        aux2=limsup-limsup%5;
        for(aux=aux2;aux>=liminf;aux-=5)
        {
            printf("\t%d",aux);
            cont++;
            if(cont%7==0)
            {
                printf("\n");
            }
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
