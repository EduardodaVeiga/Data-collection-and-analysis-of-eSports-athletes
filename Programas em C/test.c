/*Solicitar dois n�meros ao usu�rio, somar esses n�meros e mostrar na tela o resultado da soma*/
#include <stdio.h>
int main (void)
{
    //Declara��o de vari�veis
    char ch1, ch2;

    //Entrada de dados
    printf("Informe o primeiro caractere: ");
    scanf("%c", &ch1);
    fflush(stdin);
    printf("Informe o segundo caractere: ");
    scanf("%c", &ch2);

    //Sa�da de dados
    printf("Primeiro caractere: %c\n",ch1);
    printf("Segundo caractere: %c\n",ch2);
    return 0;
}
