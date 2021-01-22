/* Fazer uma função para contar a quantidade de caracteres de uma string, incluindo espaços, e outra função
não incluindo espaços.
*/

#include <stdio.h>

int contacaracteressemespaco(char texto[]);
int contacaracteres(char texto[]);
int main(void)
{
    char resposta, texto[150];

    do
    {
        printf("Informe um texto de ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);
        printf("Numero de caracteres sem espaco: %d\n",contacaracteressemespaco(texto));
        printf("Numero de caracteres com espaco: %d",contacaracteres(texto));
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
int contacaracteressemespaco(char texto[])
{
    int cont=0, x=0;
    while(texto[x]!='\0')
    {
        if(texto[x]!=32)
        {
            cont++;
        }
        x++;
    }
    return (cont);
}
int contacaracteres(char texto[])
{
    int x=0, cont=0;
    while(texto[x]!= '\0')
    {
        cont++;
        x++;
    }
    return cont;
}
