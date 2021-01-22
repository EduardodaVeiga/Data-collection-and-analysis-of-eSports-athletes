#include <stdio.h>

int main(void)
{
    int l1,l2,l3;
    printf("Informe um valor: ");
    scanf("%d", &l1);
    printf("Informe outro valor: ");
    scanf("%d",&l2);
    printf("Informe outro valor: ");
    scanf("%d",&l3);

    if(l1<l2+l3)
    {
        if(l1==l2 && l2==l3)
        {
            printf("Triangulo equilatero");
        }
        else if(l1!=l2 && l2!=l3)
        {
            printf("Triangulo escaleno");
        }
        else if(l1==l2 || l2==l3)
        {
            printf("Triangulo isosceles");
        }
    }else printf("Nao pode formar um triangulo");

    return 0;
}
