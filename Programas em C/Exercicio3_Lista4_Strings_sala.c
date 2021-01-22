/*) Ler uma string, contar e exibir a quantidade de cada uma das vogais existentes nessa string. Armazenar
essas quantidades em um vetor. É indispensável armazenar a quantidade no vetor à medida que a string é
percorrida na forma vetVogais[indice]++. Portanto, o vetor que armazena a quantidade de vogais
deve ser inicializado com zero antes de ser utilizado. Mostrar os resultados da seguinte forma.
Vogal Quantidade
===================
A/a 5
E/e 0
I/i 1
O/o 2
U/u 0*/

#include <stdio.h>

int main(void)
{
    char resposta, frase[150], gaba[10]="AaEeIiOoUu";
    int x, vogais[5];

    do
    {
        x=0;
        vogais[0]=0;
        vogais[1]=0;
        vogais[2]=0;
        vogais[3]=0;
        vogais[4]=0;
        printf("Informe um texto com ate 150 caracteres: ");
        fflush(stdin);
        gets(frase);
        while(frase[x]!='\0')
        {
            if(frase[x]==gaba[0] || frase[x]==gaba[1])
            {
                vogais[0]++;
            }
            if(frase[x]==gaba[2] || frase[x]==gaba[3])
            {
                vogais[1]++;
            }
            if(frase[x]==gaba[4] || frase[x]==gaba[5])
            {
                vogais[2]++;
            }
            if(frase[x]==gaba[6] || frase[x]==gaba[7])
            {
                vogais[3]++;
            }
            if(frase[x]==gaba[8] || frase[x]==gaba[9])
            {
                vogais[4]++;
            }
            x++;
        }
        printf("Vogal\tQuantidade\n");
        printf("===================\n");
        printf("A/a  \t%2d\n",vogais[0]);
        printf("E/e  \t%2d\n",vogais[1]);
        printf("I/i  \t%2d\n",vogais[2]);
        printf("O/o  \t%2d\n",vogais[3]);
        printf("U/u  \t%2d\n",vogais[4]);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
