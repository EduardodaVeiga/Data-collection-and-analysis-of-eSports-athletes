#include <Stdio.h>

int main(void)
{
    int x,cont=0;

    do
    {
        printf("Informe um valor(0 para sair): ");
        scanf("%d", &x);
        if(x>0)
        {
            if(x%5==0 && x%2==0)
            {
                cont++;
            }
        }
    }while(x>0);

    printf("Foram informados %d numeros divisiveis por 5 e pares",cont);

    return 0;
}
