#include <stdio.h>

int main(void)
{
    int n1,n2,n3,menor;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n1);
    printf("Informe outro valor inteiro: ");
    scanf("%d", &n2);
    printf("Informe outro valor inteiro: ");
    scanf("%d", &n3);

    if(n1<n2 && n1<n3)
    {
        menor=n1;
        printf("Menor: %d",menor);
    }
    else if(n2<n1 && n2<n3)
    {
        menor=n2;
        printf("Menor: %d",menor);
    }
    else if(n3<n1 && n3<n2)
    {
        menor=n3;
        printf("Menor: %d",menor);
    }

    return 0;
}
