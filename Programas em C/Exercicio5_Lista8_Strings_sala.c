/*Ler uma string e contar quantos espaços sucessivos ela contém. Armazenar esses valores em um vetor.
Mostrar esse vetor.*/

#include <stdio.h>

int main(void)
{
    char resposta,texto[100];
    int x,vetor[50],aux,z;

    do
    {
        aux=0;
        z=0;
        printf("Informe um texto de ate 100 caracteres: ");
        fflush(stdin);
        gets(texto);
        while(texto[x]!='\0')
        {
            if(texto[x]==32)
            {
                aux++;
            }
            else
            {
                if(aux>0 && texto[x+1]!=32)
                {
                    vetor[z]=aux;
                    z++;
                }
                aux=0;
            }
            x++;
        }
        for(x=0;x<z;x++)
        {
            printf("%d  ",vetor[x]);
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
