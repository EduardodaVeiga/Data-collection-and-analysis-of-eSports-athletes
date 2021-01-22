#include <Stdio.h>

int main(void)
{
    int base, expoente, res=1,cont=0;

    printf("Informe o numero base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);
    do
    {
        if(expoente==0)
        {
            res=1;
        }
        else
        {
        res*=base;
        }
        cont++;
    }while(cont<expoente);

    printf("Resultado: %d",res);

    return 0;
}
