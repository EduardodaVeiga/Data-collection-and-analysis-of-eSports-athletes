#include <stdio.h>

int main(void)
{
    int valor, maior,j;

    printf("Informe o valor: ");
    scanf("%d", &valor);
    maior=valor;

    for(j=0;j<4;j++)
    {
        printf("Informe um valor: ");
        scanf("%d", &valor);
        if(valor>maior)
        {
            maior=valor;
        }
    }
    printf("Maior : %d\n",maior);

    printf("Para nao ser necessario fazer uma leitura do valor antes do for, e necessario apenas iniciar a variavel valor/maior com um valor, por exemplo '0'.");

    return 0;
}
