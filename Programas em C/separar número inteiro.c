#include <stdio.h>

int main (void)
{
    int n,n1,n2,n3,n4;

    //Entrada de dados
    printf("Informe um n%cmero inteiro de at%c quatro d%cgitos: ",163,130,161);
    scanf("%d", &n);

    //Processamento de dados
    n1=n/1000;
    n2=n%1000/100;
    n3=(n%1000)%100/10;
    n4=n%1000%100%10;

    //Saída de dados
    printf("%d %c o primeiro d%cgito.\n",n1,130,161);
    printf("%d %c o segundo d%cgito.\n",n2,130,161);
    printf("%d %c o terceiro d%cgito.\n",n3,130,161);
    printf("%d %c o quarto d%cgito.\n",n4,130,161);

    return 0;

}
