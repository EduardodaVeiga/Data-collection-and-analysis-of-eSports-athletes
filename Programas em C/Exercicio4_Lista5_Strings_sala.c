/*) Ler uma string e contar quantas palavras a mesma possui. Considerar o seguinte contexto:
O usuário pode informar apenas uma palavra, com ou sem espaços no início ou no final da mesma.
O usuário pode informar mais de um espaço entre palavras.
O usuário pode não informar nenhuma palavra (simplesmente pressionar ENTER).
*/

#include <stdio.h>

int main(void)
{
    char resposta, texto[150];
    int x,cont;

    do
    {
        x=0;
        cont=0;
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);
        for(x=0;texto[x]!='\0';x++)
        {
            if (texto[x] != ' ' && (texto[x+1] == ' ' || texto[x+1]=='\0'))
            {
                cont++;
            }
        }
        printf("O texto:// %s //possui %d palavras",texto,cont);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c",&resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
