#include <stdio.h>

int main(void)
{
    char genero;
    float altura;

    printf("Informe seu genero(M para masculino e F para feminino): ");
    scanf("%c", &genero);

    if(genero=='F' || genero=='f')
    {
      printf("Informe sua altura(em metros): ");
      scanf("%f", &altura);
      printf("Peso ideal = %.1f KG",(62.1 * altura) - 44.7);
    }
    else if(genero=='M' || genero=='m')
    {
        printf("Informe sua altura(em metros): ");
        scanf("%f", &altura);
        printf("Peso ideal = %.1f KG",(72.7 * altura) - 58);
    }
    else if(genero!='M' && genero!='m' && genero!='F' && genero!='f')
    {
        printf("Caractere invalido");
    }

    return 0;
}
