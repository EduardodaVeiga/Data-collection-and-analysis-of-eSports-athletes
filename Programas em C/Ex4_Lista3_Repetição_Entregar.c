/*Complete o código a seguir para:
a) Ler a quantidade somente se o valor é válido. b) Garantir que a quantidade seja maior que 0;
c) Garantir que a média seja float e que não seja realizada divisão por zero.*/

#include <stdio.h>
int main(void)
{
    char categoria;
    int quantidade,qtde=0;
    float valor, media=0,soma=0;
    do
    {
        printf("Informe o valor: ");
        scanf("%f", &valor);
        if(valor>0)
        {
            do
            {
                printf("Informe a quantidade: ");
                scanf("%d", &quantidade);
                if(quantidade<=0)
                {
                    printf("Valor invalido\n");
                }
            }while(quantidade<=0);
            soma = soma + (valor * quantidade);
            qtde=qtde+quantidade;
            media = soma / qtde;
        }
    }while(valor>0);
    printf("Media geral (de todas as entradas): %.2f", media);
    return 0;
}
