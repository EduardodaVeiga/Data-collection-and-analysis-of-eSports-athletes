/*5) Copiar todas as funções criadas nos exercícios anteriores para dentro de uma biblioteca chamada
"diversos.h". Fazer um programa que use essa biblioteca e tenha o seguinte menu de opções (use switchcase):
1 - Calcula o quadrado de um numero
2 - Converte centímetros para polegadas
3 - Converte um valor para dólar ou real
4 - Multiplica dois números
Opção:*/

#include <stdio.h>
#include "diversos.h"

int main(void)
{
    char resposta,tipo;
    int opcao,n,n2;
    float cotacao,valor;

    do
    {
        printf("1-Calcula o quadrado de um numero\n2-Converte centimetros para polegadas\n3-Converte um valor para dolar ou real\n4-Multiplica dois numeros\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Informe um valor: ");
                scanf("%d", &n);
                mostrarquadrado(n);
                printf(" = %d",quadrado(n));
            break;
            case 2:
                printf("Informe a medida em centimetros: ");
                scanf("%f", &valor);
                printf("Equivalente em polegadas: %.2f",centopoleg(valor));
            break;
            case 3:
                printf("Informe o valor: ");
                scanf("%f", &valor);
                printf("Informe a cotacao: ");
                scanf("%f", &cotacao);
                printf("Informe o tipo de conversao(D-dolar e R-real): ");
                fflush(stdin);
                scanf("%c", &tipo);
                printf("O valor obtido e: %.2f",converter(valor,cotacao,tipo));
            break;
            case 4:
                printf("Informe o primeiro valor: ");
                scanf("%d", &n);
                printf("Informe outro valor: ");
                scanf("%d", &n2);
                multiplicar(n,n2);
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
