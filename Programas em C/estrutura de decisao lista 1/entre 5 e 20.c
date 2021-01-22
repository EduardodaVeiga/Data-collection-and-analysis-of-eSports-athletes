#include <stdio.h>

int main(void)
{
    float n1;

    printf("Informe um valor: ");
    scanf("%f", &n1);

    if(n1>=5 && n1<=20){
        printf("O numero esta entre 5 e 20");
    }
    else{
        printf("O valor nao esta entre 5 e 20");
    }

    return 0;
}
