/*1) Ler 10 n�meros inteiros e armazenar em um vetor. Validar as entradas para que sejam informados valores
positivos. Em listagens separadas:
a) Mostrar e contar os valores pares do vetor;
b) Mostrar os valores do vetor que divis�veis por 3 e por 5, contar a quantidade deles e mostrar essa
quantidade.
c) Mostrar e contar os valores do vetor que s�o menores que 10 ou maiores do que 100.
d) Mostrar e contar os valores do vetor que s�o maiores que 10 e os menores que 100.
e) Mostrar os �mpares e a quantidade de �mpares. Calcular o percentual dos �mpares em rela��o a
quantidade total de n�meros.
O programa permanecer� em execu��o at� que seja escolhida a op��o sair*/
#include <stdio.h>

int main(void)
{
    char resposta;
    int num[10],x,cont;

    do
    {
        cont=0;
        for(x=0;x<=9;x++)
        {
            printf("Informe um numero: ");
            scanf("%d", &num[x]);
        }
        printf("\t---PARES---\n");
        for(x=0;x<=9;x++)
        {
            if(num[x]%2==0)
            {
                printf("%d\t",num[x]);
                cont++;
            }
        }
        printf("\nTotal de pares: %d\n",cont);
        cont=0;
        printf("\t---DIVISIVEIS POR 3 E POR 5---\n");
        for(x=0;x<=9;x++)
        {
            if(num[x]%3==0 && num[x]%5==0)
            {
                printf("%d\t",num[x]);
                cont++;
            }
        }
        printf("\nTotal de numeros divisiveis por 3 e por 5: %d\n",cont);
        cont=0;
        printf("\t---MENORES QUE 10 OU MAIORES QUE 100---\n");
        for(x=0;x<=9;x++)
        {
            if(num[x]<10 || num[x]>100)
            {
                printf("%d\t",num[x]);
                cont++;
            }
        }
        printf("\nTotal menores que 10 ou maiores que 100: %d",cont);
        cont=0;
        printf("\n\t---MAIORES QUE 10 E MENORES QUE 100---\n");
        for(x=0;x<=9;x++)
        {
            if(num[x]>10 && num[x]<100)
            {
                printf("%d\t",num[x]);
                cont++;
            }
        }
        printf("\nTotal de numeros maiores que 10 e menores que 100: %d",cont);
        cont=0;
        printf("\n\t---IMPARES---\n");
        for(x=0;x<=9;x++)
        {
            if(num[x]%2!=0)
            {
                printf("%d\t",num[x]);
                cont++;
            }
        }
        printf("\nTotal de numeros impares: %d",cont);
        printf("\nPercentagem de impares em relacao ao total de numeros: %.1f%%",(float)cont*10);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
