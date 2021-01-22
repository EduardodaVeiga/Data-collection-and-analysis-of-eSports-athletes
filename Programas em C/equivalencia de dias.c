#include <stdio.h>

int main(void)
{
    int dias;
    printf("Informe o tempo em dia(s): ");
    scanf("%d", &dias);
    printf("%d dia(s) equivale(m) a %d ano(s) %d mes(es) e %d dia(s)",dias,dias/360,((dias%360)/30),((dias%360)%30));

    return 0;
}
