#include <stdio.h>

int main(void)
{
    long int tempo;

    printf("Informe o tempo em segundos: ");
    scanf("%li", &tempo);
    printf("%d horas:%d minutos e %d segundos",(tempo/60)/60,((tempo/60)%60),((tempo%60)));

    return 0;
}
