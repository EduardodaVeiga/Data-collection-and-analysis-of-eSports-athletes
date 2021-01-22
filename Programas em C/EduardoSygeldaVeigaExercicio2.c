#include <stdio.h>

int main(void)
{
    char entrada;
    int y,x,div=1,cont=0,cont2=0,contmin=0,contcarac=0;

    do
    {
        cont2=0;
        printf("\nInforme um caractere(0 para sair): ");
        fflush(stdin);
        scanf("%c",&entrada);
        if(entrada!='0')
        {
            contcarac++;
            if(entrada>='a' && entrada<='z')
            {
                contmin++;
            }
            if(entrada>='1' && entrada<='9')
            {
                for(y=entrada;y>=2;y--)
                {
                    printf(" %d *",y);
                }
                printf(" 1");
            }
            if((entrada>='a' && entrada<='z')|| (entrada>='A' && entrada<='Z'))
            {
                for(x=2;x<=entrada;x++)
                {
                    cont=0;
                    for(div=1;div<=x;div++)
                    {
                        if(x%div==0)
                        {
                            cont++;
                        }
                    }
                    if(cont==2)
                    {
                        printf("%2d ",x);
                        cont2++;
                        if(cont2%6==0)
                        {
                            printf("\n");
                        }
                    }
                }
            }
        }
    }while(entrada!='0');
    printf("\nTotal de letras minusculas: %d",contmin);
    printf("\nTotal de caracteres: %d",contcarac);
    if(contcarac>0)
    {
        printf("\nPercentual de letras minusculas: %d%%",contmin*100/contcarac);
    }
    else printf("\nNao e possivel identificar o percentual de letras minusculas ja que o total de caracteres e 0");

    return 0;
}
