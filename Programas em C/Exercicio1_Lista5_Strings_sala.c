/* Ler uma string e copiá-la para outra string sem os possíveis espaços em branco no início e no final.
Também devem ser eliminados dois ou mais espaços sucessivos entre as palavras.*/

#include <stdio.h>

int main(void)
{
    char resposta, texto[150],textosem[150];
    int x,y;

    do
    {
        printf("Informe um texto de ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);
        x=0;
        y=0;
        while(texto[x]!='\0')
        {
            if(texto[x]!=32)
            {
                textosem[y]=texto[x];
                y++;
            }
            x++;
        }
        textosem[y]='\0';
        printf("Texto sem espaco: %s",textosem);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
