/*1) Transformar os caracteres alfabéticos de uma string para letras minúsculas. Exemplo:
String: Eu Gosto De Programar
Apresentar: eu gosto de programar
2) Mostrar uma string com apenas 1 espaço entre as palavras e sem nenhum espaço no início e no final da string. Exemplo (considere
no exemplo que os traços representam os espaços):
String: ---eu--gosto--de---programar----
Apresentar: eu-gosto-de-programar
Fazer um programa que leia uma string e, usando função, mostre a string em letras minúsculas. Na sequência, também usando função,
retirar os espaços do início e do final de uma string e deixar apenas 1 espaço entre as palavras, imprimir a string e calcular e mostrar o
percentual de consoantes da string. Ainda, substituir cada vogal lida por N vogais iguais, onde N representa o número de vogais lidas
até então, gerando uma nova string. Para os demais caracteres, o programa deverá imprimir apenas o próprio caractere.
Exemplo:*/

#include <stdio.h>

void maiuscula_para_minuscula(char texto[])
{
    int x=0;
    while(texto[x]!='\0')
    {
        if(texto[x]>=65 && texto[x]<=90)
        {
            texto[x]=texto[x]+32;
        }
        x++;
    }
    x=0;
    while(texto[x]!='\0')
    {
        printf("%c",texto[x]);
        x++;
    }
}
void tira_espaco(char texto[])
{
    int x,i=1;
    for (x=1;texto[x]!='\0'; x++)
    {
        if (texto[x]!=32 || texto[x-1]!=32)
        {
            texto[i] = texto[x];
            i++;
        }
    }
    texto[i] = '\0';
    printf("\n");
    x=0;
    while(texto[x]!='\0')
    {
        printf("%c",texto[x]);
        x++;
    }
}
int main(void)
{
    char texto[100],vogais[10]={"AaEeIiOoUu"},novastring[150];
    int x=0,aux=0,cont=0,y,z,i=0;

    printf("Informe um texto: ");
    fflush(stdin);
    gets(texto);
    printf("===TEXTO EM LETRAS MINUSCULAS===\n");
    maiuscula_para_minuscula(texto);
    printf("\n===TEXTO SEM ESPACOS SUCESSIVOS===");
    tira_espaco(texto);
    while(texto[x]!='\0')
    {
        for(y=0;y<10;y++)
        {
            if(texto[x]!=vogais[y] && texto[x]!=32)
            {
                aux=0;
            }
            else
            {
                aux=1;
                break;
            }
        }
        if(aux==0)
        {
            cont++;
        }
        x++;

    }
    printf("\nPercentual de consoantes: %.2f%%\n",((float)cont*100)/(x));
    printf("\n===TEXTO COM VOGAIS REPLICADAS===\n");
    cont=0;
    aux=0;
    x=0;
    while(texto[x]!='\0')
    {
        for(y=0;y<10;y++)
        {
            if(texto[x]==vogais[y])
            {
                cont++;
                aux=1;
            }
        }
        if(aux==1)
        {
            for(z=0;z<cont;z++)
            {
                novastring[i]=texto[x];
                i++;
            }
        }
        else if(aux==0)
        {
            novastring[i]=texto[x];
            i++;
        }
        x++;
        aux=0;
    }
    x=0;
    while(novastring[x+2]!='\0')
    {
        printf("%c",novastring[x]);
        x++;
    }

    return 0;
}
