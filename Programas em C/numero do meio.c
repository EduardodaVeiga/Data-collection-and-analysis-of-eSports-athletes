#include <stdio.h>

int main(void)
{
    int n1,n2,n3,meio;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n1);
    printf("Informe outro valor inteiro: ");
    scanf("%d", &n2);
    printf("Informe outro valor inteiro: ");
    scanf("%d", &n3);

    if(n1<n2 && n2<n3 && n1<n3)
        {
            meio=n2;
            printf("Numero do meio: %d",meio);
        }
        else if(n1<n2 && n2>n3 && n1<n3)
        {
            meio=n3;
            printf("Numero do meio: %d", meio);
        }
        else if(n1>n2 && n2<n3 && n1>n3)
        {
            meio=n3;
            printf("Numero do meio: %d",meio);
        }
        else if(n1>n2 && n2<n3 && n1<n3)
        {
            meio=n1;
            printf("Numero do meio: %d",meio);
        }
        else if(n1>n2 && n2>n3 && n1>n3)
        {
            meio=n2;
            printf("Numero do meio: %d",meio);
        }
        else if (n1<n2 && n2>n3 && n3<n1)
        {
            meio=n1;
            printf("Numero do meio: %d",meio);
        }

        return 0;
}
