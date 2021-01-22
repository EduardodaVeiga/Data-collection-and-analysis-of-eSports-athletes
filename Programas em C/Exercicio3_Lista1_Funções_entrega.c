/*3) Fazer uma função que converte de reais para dólares ou de dólares para reais. Essa função recebe como
parâmetros: o valor a ser convertido, o valor da cotação, é se é para converter em dólares ou em reais. A
função faz a conversão e retorna o valor convertido.
Sugestão de cabeçalho da função:
float ConverterModeadas(float Valor, float Cotacao, char Tipo) /*Tipo 'D' ou 'd' significa que a conversão é de real para dólar e 'R' ou
'r' significa que a conversão é de dólar para real.
Usando essa função:
a) Ler um determinado valor, o valor da cotação e o tipo de conversão e apresentar o valor obtido.
b) Ler os valores que representam os limites de um intervalo, o valor da cotação e o tipo de conversão e
apresentar a tabela de conversão resultante.*/

#include <stdio.h>

float converter(float n,float cotacao,char tipo);
int main(void)
{
    char resposta,tipo;
    int opcao,x,limsup,liminf;
    float n,cotacao;

    do
    {
        printf("1-Converter valor\n2-Converter intervalo\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            printf("Informe o valor: ");
            scanf("%f", &n);
            printf("Informe a cotacao: ");
            scanf("%f", &cotacao);
            printf("Informe o tipo de conversao(D-dolar e R-real): ");
            fflush(stdin);
            scanf("%c", &tipo);
            printf("O valor obtido e: %.2f",converter(n,cotacao,tipo));
        break;
        case 2:
            printf("Informe o limite inferior: ");
            scanf("%d", &liminf);
            printf("Informe o limite superior: ");
            scanf("%d", &limsup);
            printf("Informe a cotacao: ");
            scanf("%f", &cotacao);
            printf("Informe o tipo de conversao(D para dolar e R para real): ");
            fflush(stdin);
            scanf("%c", &tipo);
            if(tipo=='D' || tipo=='d')
            {
                printf("REAL\tDOLAR\n");
            }
            else
            {
                printf("DOLAR\tREAL\n");
            }
            for(x=liminf;x<=limsup;x++)
            {
                printf("%4d\t%.2f\n",x,converter(x,cotacao,tipo));
            }
        break;
        default:
            printf("Opcao invalida\n");
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
float converter(float n,float cotacao,char tipo)
{
    if(tipo=='D' || tipo=='d')
    {
        return(n/cotacao);
    }
    else
    {
        return(n*cotacao);
    }
}
