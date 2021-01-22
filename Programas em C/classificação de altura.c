#include <stdio.h>

float main(void)
{
    float altura;

    printf("Informe sua altura em metros(Ex:1.8): ");
    scanf("%f", &altura);

    if(altura< 1.5){
        printf("Altura abaixo de um metro e cinquenta centimetros");
    }
    if(altura>= 1.5 && altura<= 1.8){
        printf("Altura entre um metro e cinquenta e um metro e oitenta centimetros");
    }
    if(altura> 1.8){
        printf("Altura acima de um metro e oitenta centimetros");
    }

    return 0;
}
