#include <stdio.h>

int main(void)
{
    int id1,id2,id3;
    printf("Informe a idade 1: ");
    scanf("%d", &id1);
    printf("Informe a idade 2: ");
    scanf("%d", &id2);
    printf("Informe a idade 3: ");
    scanf("%d", &id3);
    printf("Media das idades: %.1f anos",(float)(id1+id2+id3)/3);

    return 0;
}
