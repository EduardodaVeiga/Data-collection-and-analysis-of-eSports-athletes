#include <stdio.h>

int main (void)
{
    int n,n1,n2,n3;

    //Entrada de dados
    printf("Informe um valor inteiro de at%c tr%cs d%cgitos: ",130,136,161);
    scanf("%d", &n);

    //Processamento de dados
    n1=n/100;
    n2=n%100/10;
    n3=n%100%10;


    //Saida de dados
    printf("O primeiro d%cgito %c: %d\n",161,130,n1);
    printf("O segundo d%cgito %c: %d\n",161,130,n2);
    printf("O terceiro d%cgito %c: %d\n",161,130,n3);
    printf("O inverso do valor %c:%d%d%d",130,n3,n2,n1);

    return 0;
}
