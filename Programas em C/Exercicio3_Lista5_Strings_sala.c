/*Um n�mero primo � definido se ele possuir somente dois divisores: o n�mero um e ele pr�prio. S�o
exemplos de n�meros primos: 2, 3, 5, 101, 367 e 523. Neste problema, voc� deve ler uma palavra composta
somente por letras [a-zA-Z]. Cada letra possui um valor espec�fico, a vale 1, b vale 2 e assim por diante, at� a
letra z que vale 26. Do mesmo modo A vale 27, B vale 28, at� a letra Z que vale 52. Voc� precisa definir se
cada palavra em um conjunto de palavras � prima ou n�o. Para ela ser prima, a soma dos valores de suas
letras deve ser um n�mero primo.
Para resolver este problema, � necess�rio criar uma fun��o para contar os caracteres de um texto (com o
prot�tipo int ContarCaracteres(char texto[]);) e uma fun��o para converter os
caracteres para n�meros (com o prot�tipo int ConverteCharParaNumero(char ch);). Al�m
disso, � necess�rio usar uma fun��o que recebe um n�mero e retorna 0 se esse n�mero for primo ou 1, caso
contr�rio.
*/

#include <stdio.h>

int contarcaracteres(char texto[]);
int convertecharparanumero(char ch);
int primo(int num);
int main(void)
{
    char resposta,texto[150];
    int x,y,z,soma;

    do
    {
        soma=0;
        x=0;
        z=0;
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);
        while(x<=contarcaracteres(texto))
        {
            for(y=x;y<=150;y++)
            {
                if(texto[y]==32 || texto[y]=='\0')
                {
                    break;
                }
                soma=soma+convertecharparanumero(texto[y]);
            }
            x=y+1;
            while(z<=contarcaracteres(texto))
            {
                if(texto[z]==32)
                {
                    z++;
                    break;
                }
                printf("%c",texto[z]);
                z++;
            }
            printf(" = %d ==> ",soma);
            if(primo(soma)==0 && soma!=1)
            {
                printf("Prima\n");
            }
            else
            {
                printf("Nao prima\n");
            }
            soma=0;
        }
        printf("\nDeseja repetir o programa(s/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');
}
int contarcaracteres(char texto[])
{
    int x=0,cont=0;
    while(texto[x]!='\0')
    {

        x++;
    }

    return x;
}
int convertecharparanumero(char ch)
{
    if(ch>=97)
    {
        return ch-96;
    }
    else if(ch!=32)
    {
        return ch-38;
    }
}
int primo(int num)
{
    int i, contDiv=0;

    for(i=2; i<num; i++)
    {
        if(num % i == 0)
        {
            contDiv++;
            break;
        }
    }

    return(contDiv);
}
