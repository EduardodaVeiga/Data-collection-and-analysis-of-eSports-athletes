#include <stdio.h>

int main(void)
{
    int n1,n2,n3;

    printf("Informe um valor: ");
    scanf("%d", &n1);
    printf("Informe outro valor: ");
    scanf("%d",&n2);
    printf("Informe outro valor: ");
    scanf("%d", &n3);

    if(n1<n2 && n2<n3 && n1<n3)
        {
            printf("Menor: %d, Meio: %d, Maior: %d",n1,n2,n3);
        }
        else if(n1<n2 && n2>n3 && n1<n3)
        {
            printf("Menor: %d, Meio: %d, Maior: %d", n1,n3,n2);
        }
        else if(n1>n2 && n2<n3 && n1>n3)
        {
            printf("Menor: %d, Meio: %d, Maior: %d", n2,n3,n1);
        }
        else if(n1>n2 && n2<n3 && n1<n3)
        {
            printf("Menor: %d, Meio: %d, Maior: %d", n2,n1,n3);
        }
        else if(n1>n2 && n2>n3 && n1>n3)
        {
            printf("Menor: %d, Meio: %d, Maior: %d",n3,n2,n1);
        }
        else printf("Menor: %d, Meio: %d, Maior: %d",n3,n1,n2);

        return 0;

}
