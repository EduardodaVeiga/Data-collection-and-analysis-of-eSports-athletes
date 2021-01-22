#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Informe uma letra: ");
    scanf("%c", &ch);

    ch=toupper(ch);

    if(ch=='A' || ch=='B' || ch=='C' || ch=='D' || ch=='E' || ch=='F' || ch=='G' || ch=='H' || ch=='I' || ch=='J' || ch=='K' || ch=='L' || ch=='M' || ch=='N' || ch=='O' || ch=='P' || ch=='Q' || ch=='R' || ch=='S' || ch=='T' || ch=='U' || ch=='V' || ch=='W' || ch=='X' || ch=='Y' || ch=='Z')
    {
        printf("O caracter digitado pertence ao alfabeto\n");
        switch(ch)
        {
            case 'A':printf("VOGAL '%c'\n",ch);
            break;
            case 'E':printf("VOGAL '%c'\n",ch);
            break;
            case 'I':printf("VOGAL '%c'\n",ch);
            break;
            case 'O':printf("VOGAL '%c'\n",ch);
            break;
            case 'U':printf("VOGAL '%c'\n",ch);
            break;
            default:printf("CONSOANTE '%c'\n",ch);
        }

    }else printf("Nao pertence ao alfabeto");

    return 0;
}
