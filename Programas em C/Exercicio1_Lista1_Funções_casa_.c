#include <stdio.h>

void soma(void);
void subtrair(int num1, int num2);
int multiplicar(void);
float dividir(int num1, int num2);
int resto(int num1, int num2);

int main(void)
{
    char opcao, escolha;
    int n1, n2;

    do //repeti��o de programa
    {
        printf("A - Adicionar\n");
        printf("S - Subtrair\n");
        printf("M - Multiplicar\n");
        printf("D - Dividir\n");
        printf("R - Resto\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &escolha);

        switch(escolha)
        {
            case 'A':
            case 'a':
                soma();
                break;
            case 'S':
            case 's':
                printf("Informe o primeiro numero: ");
                scanf("%d", &n1);
                printf("Informe o segundo numero: ");
                scanf("%d", &n2);

                subtrair(n1, n2);
                break;
            case 'M':
            case 'm':
                printf("Multiplicacao: %d\n", multiplicar());
                break;
            case 'D':
            case 'd':
                printf("Informe o primeiro numero: ");
                scanf("%d", &n1);

                do
                {
                    printf("Informe o segundo numero: ");
                    scanf("%d", &n2);

                    if(n2 <= 0)
                    {
                        printf("Valor invalido\n");
                    }
                }while(n2 <= 0);

                printf("Divisao: %.2f\n", dividir(n1, n2));
                break;
            case 'R':
            case 'r':
                printf("Informe o primeiro numero: ");
                scanf("%d", &n1);

                do
                {
                    printf("Informe o segundo numero: ");
                    scanf("%d", &n2);

                    if(n2 <= 0)
                    {
                        printf("Valor invalido\n");
                    }
                }while(n2 <= 0);

                printf("Resto: %d\n", resto(n1, n2));
                break;
            default:
                printf("Opcao invalida\n");
        }

        printf("\n\nDeseja repetir o programa (S/s)? ");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao == 'S' || opcao == 's');


    return 0;
}

void soma(void)
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
}

void subtrair(int num1, int num2)
{
    printf("Subtracao: %d\n", num1 - num2);
}

int multiplicar(void)
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    return(num1 * num2);
}

float dividir(int num1, int num2)
{
    return((float)num1/num2);
}

int resto(int num1, int num2)
{
    return(num1%num2);
}
