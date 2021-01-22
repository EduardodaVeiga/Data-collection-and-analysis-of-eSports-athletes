/*) Completar e corrigir o c�digo a seguir para:
a) Ler a quantidade somente se a categoria � v�lida. b) Garantir que a quantidade seja maior que 0. c) Validar para que n�o seja realizada uma divis�o por zero no c�lculo da m�dia. d) Permitir a leitura da categoria nas execu��es sucessivas do programa. e) Garantir que a m�dia seja float.*/

#include <stdio.h>
int main(void)
{
    char categoria,resposta;
    int quantidade, soma, total;
    do
    {
        total=0;
        soma=0;
        quantidade=0;
        do
        {
            printf("Informe a categoria: ");
            fflush(stdin);
            scanf("%c", &categoria);
            if(categoria=='A' || categoria=='B' || categoria=='a' || categoria=='b')
            {
                do
                {
                    printf("Informe a quantidade: ");
                    scanf("%d", &quantidade);
                    if(quantidade<=0)
                    {
                        printf("Valor invalido\n");
                    }
                }
                while(quantidade<=0);
                soma = soma + quantidade;
                total++;
            }
        }
        while(categoria == 'A' || categoria=='B' || categoria == 'a' || categoria=='b');
        if(quantidade>0)
        {
            printf("A media dos produtos eh %.2f",(float)soma/total);
        }
        else printf("Dados insuficientes");
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}
