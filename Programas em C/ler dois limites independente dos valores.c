#include <stdio.h>

int main(void)
{
    int limiteinf, limitesup,cont=0,x=0,aux=0;
    char resposta;

    do
    {
        do
        {
            printf("Informe um valor para o limite inferior: ");
            scanf("%d", &limiteinf);
            if(limiteinf>0)
            {
                printf("Informe um valor para o limite superior: ");
                scanf("%d", &limitesup);
                if(limitesup<0 || limitesup==limiteinf)
                {
                    printf("Resposta invalida tente novamente\n");
                }
            }
            else printf("Resposta invalida tente novamente\n");
        }while(limiteinf<0 || limitesup<0 || limitesup==limiteinf);
        if(limiteinf>limitesup)
        {
            aux=limitesup;
            limitesup=limiteinf;
            limiteinf=aux;
        }
        x=limiteinf;
        cont=0;
        do
        {
            if(x%3==0 && x%2==0)
            {
                printf("%d\t",x);
            }
            x++;
        }while(x<=limitesup);
        printf("\nDeseja repetir o programa (S/N): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');


    return 0;
}

