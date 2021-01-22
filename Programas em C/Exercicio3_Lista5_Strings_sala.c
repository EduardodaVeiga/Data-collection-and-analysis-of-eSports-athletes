/*Um número primo é definido se ele possuir somente dois divisores: o número um e ele próprio. São
exemplos de números primos: 2, 3, 5, 101, 367 e 523. Neste problema, você deve ler uma palavra composta
somente por letras [a-zA-Z]. Cada letra possui um valor específico, a vale 1, b vale 2 e assim por diante, até a
letra z que vale 26. Do mesmo modo A vale 27, B vale 28, até a letra Z que vale 52. Você precisa definir se
cada palavra em um conjunto de palavras é prima ou não. Para ela ser prima, a soma dos valores de suas
letras deve ser um número primo.
Para resolver este problema, é necessário criar uma função para contar os caracteres de um texto (com o
protótipo int ContarCaracteres(char texto[]);) e uma função para converter os
caracteres para números (com o protótipo int ConverteCharParaNumero(char ch);). Além
disso, é necessário usar uma função que recebe um número e retorna 0 se esse número for primo ou 1, caso
contrário.
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
