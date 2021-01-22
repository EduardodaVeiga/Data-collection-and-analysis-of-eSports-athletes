#include <stdio.h>

int main(void)
{
    int valido, branco, nulo;

    printf("Informe o numero de votos validos:  ");
    scanf("%d", &valido);
    printf("Informe o numero de votos em branco: ");
    scanf("%d", &branco);
    printf("Informe o numero de votos nulo: ");
    scanf("%d",&nulo);

    printf("Votos validos: %.1f%%\n",(((float)valido*100)/((float)valido+(float)branco+(float)nulo)));
    printf("Votos em branco: %.1f%%\n",(((float)branco*100)/((float)valido+(float)branco+(float)nulo)));
    printf("Votos nulos: %.1f%%\n",(((float)nulo*100)/((float)valido+(float)branco+(float)nulo)));

    return 0;
}
