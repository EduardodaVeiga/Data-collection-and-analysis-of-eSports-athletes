#include <Stdio.h>

int main(void)
{
    int idade, aut18=0,cont18=0,soma=0;
    char tipo;

    do
    {
        printf("Informe a idade(0 para encerrar): ");
        scanf("%d", &idade);
        if(idade>0)
        {
            printf("Informe se e autonomo ou funcionario (a/f): ");
            fflush(stdin);
            scanf("%c", &tipo);
            if(tipo!='f' && tipo!='F' && tipo!='a' && tipo!='A')
            {
                printf("Resposta invalida, tente novamente\n");
            }
            if(idade<18 && (tipo=='A' || tipo=='a'))
            {
                aut18++;
            }
            else if(idade>18)
            {
                cont18++;
                soma=soma+idade;
            }
        }
    }while(idade>0);
    if(aut18<1 && cont18<1)
    {
        printf("Entradas insuficientes\n");
    }else
        printf("Total de autonomos com menos de 18 anos: %d",aut18);
        printf("\nMedia de idade dos maiores de 18 anos: %d",soma/cont18);


        return 0;



}
