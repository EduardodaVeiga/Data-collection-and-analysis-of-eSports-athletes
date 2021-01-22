/*2) Sabendo-se que 1cm = 0,393701 polegadas, fazer uma função que converte de centímetros para
polegadas. Usar essa função para:
a) Mostrar o valor em polegadas de um determinado valor informado pelo usuário.
b) Imprimir uma tabela de conversão de centímetros para polegadas entre 1 a 20.*/

#include <stdio.h>

float centopoleg(float n);
int main(void)
{
    char resposta;
    int opcao;
    float n,x;

    do
    {
        printf("1-Converter centimetro para polegada\n2-Converter de 1 a 20 para polegada\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Informe um valor: ");
                scanf("%f", &n);
                printf("O equivalente em polegadas: %.2f",centopoleg(n));
            break;
            case 2:
                printf("====TABELA DE CONVERSAO====");
                printf("\nCENTIMETROS\tPOLEGADAS\n");
                for(x=1;x<=20;x++)
                {
                    printf("%.2f \t\t %.2f\n",x,centopoleg(x));
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
float centopoleg(float n)
{
    return ((float) n * 0.393701);
}
