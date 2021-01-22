#include <stdio.h>

int main(void)
{

    int idade,temptrab;
    char genero;

    printf("Informe a inicial do seu g%cnero sexual(Exemplo:f para feminino): ",136);
    scanf("%c", &genero);


    if(genero=='m' || genero=='M' || genero=='f' || genero=='F')
    {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        printf("Informe quantos anos de contribuicao para o INSS voce tem: ");
        scanf("%d", &temptrab);

        if(genero=='m' || genero=='M')
        {
            if(idade>70 || temptrab>=45)
            {
                printf("Voce esta apto para se aposentar dentro das normas estabelecidas pelo governo brasileiro");
            }
            else
            {
                printf("Voce nao esta apto para se aposentar dentro das normas estabelecidas pelo governo brasileiro");
            }

        }
        else
        {
            if(idade>65 || temptrab>=40)
            {
                printf("Voce esta apto para se aposentar dentro das normas estabelecidas pelo governo brasileiro");
            }
            else
            {
                printf("Voce nao esta apto para se aposentar dentro das normas estabelecidas pelo governo brasileiro");
            }
        }
    }
    else
    {
        printf("Genero invalido\n");
    }

    return 0;
}
