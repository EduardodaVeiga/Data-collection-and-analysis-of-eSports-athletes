/*3) Fazer uma fun��o que verifica se um n�mero � um quadrado perfeito. Um n�mero � quadrado perfeito se
possui como raiz quadrada um valor inteiro. A fun��o para obter a raiz quadrada � sqrt() e est� na biblioteca
<math.h>. Por exemplo, 25 � um quadrado perfeito porque raiz quadrada de 25 � 5.
Use essa fun��o para:
a) Verificar se um n�mero, informado pelo usu�rio, � um quadrado perfeito.
b) Mostrar quais n�meros de um intervalo s�o quadrados perfeitos.
Use menu de op��es (com switch-case) e implemente a repeti��o de programa*/

#include <stdio.h>
#include <math.h>

int numperfeito(float n);
int main(void)
{
    char resposta;
    int liminf,limsup,opcao;
    float num,x;

    do
    {
        printf("1-Verifica se um numero e perfeito\n2-Mostra os numeros perfeitos de um intervalo\nOpcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Informe um numero: ");
                scanf("%f", &num);
                if(numperfeito(num)==1)
                {
                    printf("%.0f e um quadrado perfeito ==> raiz quadrada de %.0f e %.0f",num,num,sqrt(num));
                }
                else printf("%0.f nao e um quadrado perfeito",num);
            break;
            case 2:
                printf("Informe o limite inferior: ");
                scanf("%d", &liminf);
                printf("Informe o limite superior: ");
                scanf("%d", &limsup);
                for(x=liminf;x<=limsup;x++)
                {
                    if(numperfeito(x)==1)
                    {
                        printf("%.0f e um quadrado perfeito ==> raiz quadrada de %.0f e %.0f\n",x,x,sqrt(x));
                    }
                }
            break;
            default:
                printf("Opcao invalida\n");
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
int numperfeito(float n)
{
    if(sqrt(n) - (int)sqrt(n) == 0)
    {
        return 1;
    }
    else return 0;
}
