#include <stdio.h>
#include "Fatorial.h"

int main(void)
{
    int nm,x,fat,y;
    char opcao,resposta;
    do
    {


    printf("A-Fatorial entre 1 e 8\nB-Fatorial de um numero\nOpcao: ");
    fflush(stdin);
    scanf("%c", &opcao);
    switch(opcao)
    {
        case 'A':
        case 'a':
            for(x=1;x<=8;x++)
        {
            fat=1;
            printf("%d! ==>",x);
            for(y=x;y>1;y--)
            {
                fat=fat*y;
                printf(" %d x",y);
            }
            printf(" %d == %ld\n",y,fat);
        }
        break;
        case 'B':
        case 'b':
            printf("Informe um numero: ");
            scanf("%d", &nm);
            mostrarfat(nm);
            printf(" %lld\n",fatorial(nm));
        break;
        default: printf("Opcao invalida\n");
    }
    printf("\nDeseja repetir o programa(S/s): ");
    fflush(stdin);
    scanf("%C", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;

}
