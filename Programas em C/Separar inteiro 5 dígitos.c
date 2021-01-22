#include <stdio.h>

int main (void)
{
    int n,n1,n2,n3,n4,n5,soma;

    //Entrada de dados
    printf("Informe um valor inteiro de at%c cinco d%cgitos: ",130,161);
    scanf("%d", &n);

    //Processamento de dados
    n1=n/10000;
    n2=n%10000/1000;
    n3=n%10000%1000/100;
    n4=n%10000%1000%100/10;
    n5=n%10000%1000%100%10;
    soma=n1+n2+n3+n4+n5;

    //Saida de dados
    printf("O primeiro d%cgito %c: %d\n",161,130,n1);
    printf("O segundo d%cgito %c: %d\n",161,130,n2);
    printf("O terceiro d%cgito %c: %d\n",161,130,n3);
    printf("O quarto d%cgito %c: %d\n",161,130,n4);
    printf("O quinto d%cgito %c: %d\n",161,130,n5);
    printf("A soma dos d%cgitos %c: %d\n",161,130,soma);

    return 0;
}
