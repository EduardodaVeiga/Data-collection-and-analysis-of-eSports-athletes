#include <stdio.h>

int main(void)
{
    int n1;

    printf("Informe um valor: ");
    scanf("%d",&n1);


    if(n1%5==0 && n1%3==0 && n1%2==0)
    {
        printf("%d e divisivel por 5, por 3 e por 2",n1);
    }
    else if(n1%3==0 && n1%5==0)
    {
        printf("%d e divisivel somente por 3 e por 5",n1);
    }
    else if(n1%5==0 && n1%2==0)
    {
        printf("%d e divisivel somente por 5 e por 2",n1);
    }
    else if(n1%3==0 && n1%2==0)
    {
        printf("%d e divisivel somente por 3 e por 2",n1);
    }
    else if(n1%5==0)
    {
        printf("%d e divisivel somente por 5",n1);
    }
    else if(n1%3==0)
    {
        printf("%d e divisivel somente por 3",n1);
    }
    else if(n1%2==0)
    {
        printf("%d e divisivel somente por 2",n1);
    }
    else printf("%d nao e divisivel por 5, 3 ou 2",n1);

    return 0;

}
